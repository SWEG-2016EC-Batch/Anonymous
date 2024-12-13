#include <iostream>
using namespace std; 
int main(){
    // printing the reverse of an integer.
    int num, reverse = 0, remainder, temp;
    label1:
    cout<<"Please enter a number: ";
    cin>>num;
    
    if(cin.fail()){
    	cout<<"Invalid input! Please enter a valid input. "<<endl;
    	cin.clear();
    	cin.ignore(1000,'\n');
    	goto label1;
	}
    temp = num;
    do{
        remainder = num % 10;
        reverse += remainder;
        num /= 10;
        if(num == 0){
        	break;
		}
		else{
			reverse *= 10;
		}
    }while(num != 0);
    cout<<"The rever of "<<temp<<" is "<<reverse;


    return 0;
}  



