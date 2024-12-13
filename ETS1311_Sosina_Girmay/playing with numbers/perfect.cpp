#include <iostream>
using namespace std; 
int main(){
    /*Check whether a number is Perfect number or not.
[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number itself
equals the number.*/
int num, number, sum = 0; 
label1: 
cout<<"Please enter a number: "; 
cin>>num; 
if(cin.fail()){
	cout<<"Invalid input! Please try again. "<<endl; 
	cin.clear();
	cin.ignore(1000,'\n');
	goto label1; 
}
number = num; 
for(int i=1; i<=number; i++){
    if(num % i == 0){
        sum += i;
    } else{
        continue; 
    }
}
sum -= number; 
if(sum == number){
    cout<<number<<" is a perfet number.";
} else{
    cout<<number <<" is not a perfect number. ";
}



    return 0;
}
