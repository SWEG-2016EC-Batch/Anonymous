
#include<iostream> 
using namespace std; 
int main(){
// 12345 triangle
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
    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
        	if(i>=j){
        		cout<<j<<" ";
			}
        }
        cout<<endl;
}
    return 0; 
}
