#include<iostream> 
using namespace std; 
int main(){
    int size;
    float w, h, BMI = 1;
    label1:
    cout<<"How many peopl's BMI do you want to calculate? "<<endl;
    cin>>size;
    
    //use for loop to calclate the required number of BMI. 
    for(int i=1; i<=size; i++){
    	cout<<"\t BMI of person "<<i<<endl;
    
     cout<<"please enter a person's weight in kilogram: "<<endl;
     cin>>w;
     cout<<"please enter a person's height in meter: "<<endl;;
     cin>>h;
     
     if(cin.fail()){
         cout<<"invalid input! Please try again."<<endl;
         cin.clear();
         cin.ignore(1000,'\n');
         goto label1;
     }
    
     //calculate the BMI
     BMI = w / (h*h);
     if(BMI < 18){
        cout<<"The BMI of the person is "<<BMI <<" and underweight!"<<endl;
     } else if(BMI >= 18 && BMI < 25) {
        cout<<"The BMI of the person is "<<BMI <<" and normal."<<endl;
     } else {
        cout<<"The BMI of the person is "<<BMI <<" and overweight!"<<endl;
     }
    }
    return 0;
}