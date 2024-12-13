#include <iostream>
using namespace std; 
int main(){
    /*Check if a number is Strong or not.
[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal to the
number itself.*/
int num, number, fact = 1, remainder, sum = 0; 
label1: 
cout<<"Please enter a number: "; 
cin>> num; 
if(cin.fail()){
    cout<<"Invalid input! Please try again. "<<endl; 
    cin.clear(); 
    cin.ignore(1000,'\n'); 
    goto label1; 
}
number = num; 
while(num > 0){ 
    remainder = num % 10; 
    num /= 10; 
    // reset the fact to 1 
    fact = 1; 
    for(int i = 1; i<= remainder; i++){
        fact *= i; 
    }
    sum += fact; 
}
if(sum == number){
    cout<<"The number "<<number<<" is strong.";
} else {
    cout<<"The number "<<number<<" is not strong. "; 
}


    return 0;
}
