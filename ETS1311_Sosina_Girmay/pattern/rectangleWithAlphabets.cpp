
#include<iostream> 
using namespace std; 
int main(){
// abcde rectangle
    int row; 
	label1: 
	cout<<"enter the number of rows: "; 
	cin>> row; 
	 if(cin.fail()){
    	cout<<"invalid input! Please try again. \n"; 
    	cin.clear(); 
    	cin.ignore(); 
    	goto label1; 
	}
    char CH = 'a';
    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
            	cout<<CH++<<" ";	
        }
        CH='a';
        cout<<endl;
    }  

    return 0; 
}
