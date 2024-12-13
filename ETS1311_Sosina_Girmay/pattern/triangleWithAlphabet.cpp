#include<iostream> 
using namespace std; 
int main(){
// ABCDE triangle
	int n; 
	label1: 
	cout<<"enter the number of rows: "; 
	cin>> n; 
	 if(cin.fail()){
    	cout<<"invalid input! Please try again. \n"; 
    	cin.clear(); 
    	cin.ignore(); 
    	goto label1; 
	}
	char Ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        	if(i>=j){
            	cout<<Ch++<<" ";
			}
        }
        Ch='A';
        cout<<endl;
    } 

    return 0; 
}
