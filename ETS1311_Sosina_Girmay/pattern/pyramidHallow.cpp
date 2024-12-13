#include<iostream> 
using namespace std; 
int main(){
// hallow pyramid
    int Row;
	label1: 
	cout<<"enter the number of rows: "; 
	cin>> Row; 
	 if(cin.fail()){
    	cout<<"invalid input! Please try again. \n"; 
    	cin.clear(); 
    	cin.ignore(); 
    	goto label1; 
	}
    
    for(int i=1; i<=Row; i++){
        for(int j=1; j<=2*Row-1; j++){
            if(i==Row || j+i==Row+1 || j-i==Row-1){
                cout<<"* ";
            } else{
                cout<<"  ";
            }
        }
    	cout<<"\n"; 
	}
    return 0; 
}

