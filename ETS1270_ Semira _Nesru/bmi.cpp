#include <iostream>
using namespace std;

int main(){
// declaring inputs ( weight and height)
    float weight ,height;
    int num;  // declaring num for how many people to calculate the bmi
    cout<<"Enter for how many people you want to calculate BMI "<<endl;
    cin>>num;
// a loop to repeat the calculate the bmi
    for( int n=1; n<=num; n++)
    {
      // getting the input from the user
    cout<<"Enter weight in kg: "<<endl;
    cin>>weight;
    cout<<"Enter height in meter: "<<endl;
    cin>>height;
// calculating the BMI( body mass index)
    float BMI= weight / (height*height);
    cout<<"your BMI is "<<BMI<<endl;
// categorizing the BMI in to under, normal, over weight and obese
    if(BMI<=18.5)
    {
        cout<<"you are under weight"<<endl;
    }
    else if(BMI>18.5 && BMI<=24.9)
    {
        cout<<"you are normal weight"<<endl;
    }
    else if(BMI>24.9 && BMI<= 29.9)
    {
        cout<<"you are over weight"<<endl;
    }
    else
    {
        cout<<"you are obese"<<endl;
    }
    }
    return 0;
}