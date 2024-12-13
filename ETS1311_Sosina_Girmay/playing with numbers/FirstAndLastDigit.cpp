#include <iostream>
using namespace std; 
int main(){
    //Prints the first and the last digit of the number and find their sum.
    int firstDigit, num, temp, lastDigit;
    label1:
    cout<<"please enter a number: ";
    cin>>num; 
    if(cin.fail()){
    	cout<<"Invalid input! Please try again. "<<endl;
    	cin.clear();
    	cin.ignore(1000,'\n');
    	goto label1;
	}
	temp = num;
    lastDigit = num % 10;
    num /= 10;
    while(num != 0){
        firstDigit = num % 10; // since we are not storing the previous values of the remainder, we will have the first digit at 
        num /= 10;
    }
    cout<<"The first and the last digits of "<<temp<<" is "<<firstDigit<<" and "<<lastDigit<<" respectively and their sum is "<<lastDigit + firstDigit;


    return 0;
}
