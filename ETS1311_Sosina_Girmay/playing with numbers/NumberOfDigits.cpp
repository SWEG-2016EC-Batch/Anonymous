    // printing the number of digits of a number
#include <iostream>
using namespace std; 
int main(){
int num,i,temp;
label1:
cout<<"Please enter a number: ";
cin>>num;
if(cin.fail()){
	cout<<"Invalid input! Please enter a valid number. "<<endl;
	cin.clear();
	cin.ignore(1000,'\n');
	goto label1;
}
temp = num;
    for(i=1;;i++){
        num /= 10;
        if(num == 0){
        	break;
		}
    }
cout<<"The number of digits of "<<temp<<" is "<<i;

    return 0;
}