#include <iostream>
#include <cmath>
using namespace std; 
int main(){
    // Swap the first and the last digit of the number.
    label1: 
int num, temp, firstDigit,size,lastDigit,number, swappedNumber;
cout<<"enter the size of the number: ";
cin>>size; 
cout<<"Please enter a number: ";
cin>>num;
if(cin.fail()){
	cout<<"Invalid input! Please try again."<<endl;
	cin.clear();
	cin.ignore(1000,'\n');
	goto label1;
}
number = num;
lastDigit = num % 10;
temp = pow(10,size-1);
firstDigit = num / temp;
num = num % temp;
// to remove the last digit, divide num by 10. 
num /= 10;
swappedNumber = lastDigit * temp + num * 10 + firstDigit; 
cout<<"when the first and the last digits of "<<number<<" are swapped, it will be "<<swappedNumber;

    return 0;
}
