
#include<iostream> 
using namespace std; 
int main(){
// hallow rectangle
	int row, column;
    label1: 
    cout<<"enter the size of the row: "; 
    cin>>row; 
    cout<<"enter the size of the column: "; 
    cin>> column; 
    if(cin.fail()){
    	cout<<"invalid input! Please try again. \n"; 
    	cin.clear(); 
    	cin.ignore(); 
    	goto label1; 
	}
    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            if(i==1 || i==row || j==1 || j==column){
            	cout<<"* ";
			} else{
				cout<<"  ";
			}
        }
        cout<<endl;
    }
    return 0; 
}
