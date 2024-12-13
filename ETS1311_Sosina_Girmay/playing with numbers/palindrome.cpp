#include <iostream>
using namespace std; 
int main(){
//Check whether a number is palindrome or not.
int num, number, remainder, temp = 0;
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
while(num != 0){
    remainder = num % 10;
    temp = temp * 10 + remainder; 
    num /= 10;
}
if(temp == number){
    cout<<"The number "<<number<<" is palindrome.";
} else{
    cout<<"The number "<<number<<" is not palindrome.";
}


    return 0;
}