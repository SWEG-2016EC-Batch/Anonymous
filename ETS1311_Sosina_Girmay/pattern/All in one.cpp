#include <iostream>
using namespace std; 
int main(){
    int n = 5;

// 12345 rectangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

// ABCDE rectangle
    int row=4, column = 6;
    char ch = 'A';
    for(int i=1; i<=row; i++){
        for(int j=1; j<=column;j++){
            cout<<ch++<<" ";
        }
        cout<<endl; 
    }
    cout<<"\n\n";

// 12345 triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        	if(i>=j){
        		cout<<j<<" ";
			}
        }
        cout<<endl;
}
	cout<<"\n\n";

// 12345 right triangle
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(i>=j){
            	cout<<j<<" ";
			} else{
				cout<<"  ";
			}
        }
        cout<<endl;
    }
    cout<<"\n\n";

// ABCDE triangle
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
    cout<<"\n\n";

// abcde rectangle
    char CH = 'a';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            	cout<<CH++<<" ";	
        }
        CH='a';
        cout<<endl;
    }
    cout<<"\n\n";

// hallow rectangle
int N = 7;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(i==1 || i==N || j==1 || j==N){
            	cout<<"* ";
			} else{
				cout<<"  ";
			}
        }
        cout<<endl;
    }
    cout<<"\n\n";

// inverted triangle
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j>=i){
            	cout<<"* ";
			}
        }
        cout<<endl;
    }
    cout<<"\n\n";

// hallow inverted triangle
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
        
            if(j==n || j==i || i==1){
                cout<<"* ";
            } else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    
// pyramid
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
// inverted pyramid
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for (int j=n; j>=i; j--){
            cout<<"* ";
        }
        for(int j=n; j>i; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

// hallow pyramid
    int Row = 5;
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
   cout<<"\n\n";
// inverted hallow pyramid
    for(int i=1; i<=Row; i++){
        for(int j=1; j<=(2*Row-1); j++){
            if(i==1 || i==j || i+j==2*Row){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }



    return 0;
}
