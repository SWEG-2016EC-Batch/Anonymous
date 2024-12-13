
    
#include<iostream> 
using namespace std; 
int main(){
// inverted pyramid
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
    for (int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for (int j=row; j>=i; j--){
            cout<<"* ";
        }
        for(int j=row; j>i; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    

    return 0; 
}
