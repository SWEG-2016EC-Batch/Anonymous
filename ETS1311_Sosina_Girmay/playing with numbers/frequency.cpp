#include <iostream>
using namespace std; 
int main(){
    //Find the frequency of each digit in a given integer and print in table format.
    int num, number, digit; 
    int frequency[10]= {0};
    label1: 
    cout<<"Enter a number: ";
    cin>>num;
    if(cin.fail()){
    	cout<<"Invalid input! Please try again. "<<endl; 
        cin.clear();
        cin.ignore(1000,'\n');
        goto label1; 
	}
    number = num; 
    while(num > 0){
        digit = num % 10;
        frequency[digit]++;
        num /= 10; 
        }
    cout<<"The frequency of digits in "<<number<<" is "<<endl; 
    for(int i=0;i<=9;i++){
        cout<<i<<"  "<<frequency[i]<<endl;
         
    }

    return 0;
}
