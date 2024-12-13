#include <iostream>
using namespace std; 
int main(){
    int num, product = 1, remainder, temp;
    label1:
    cout<<"please enter a number: ";
    cin>>num;
    if(cin.fail()){
        cout<<"Invalid input! Please try again."<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        goto label1;
    }
    // store the number in temp before updating it 
    temp = num;
    while(num != 0){
    remainder = num % 10;
    num /= 10;
    if(remainder % 2 != 0){
        continue;
    } else{
        product *= remainder;
    }
    }
    // if product is 1, that means there is no even digit in the number so we should update it to 0. 
    if(product == 1){
    	product = 0;
	}
cout<<"The product of the even digits in "<<temp <<" is "<<product;

    return 0;
}
