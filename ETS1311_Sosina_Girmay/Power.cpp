#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x, y;
    double result = 1;
    label1:
    cout<<"enter the base: "<<endl;
    cin>>x;
    cout<<"enter the exponent: "<<endl;
    cin>>y;

    if(cin.fail()){
        cout<<"invalid input! please try again."<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        goto label1;
    }
    
    if(y<0){
        for(int i=1; i<=-y; i++){
            result *= x; }
            result = 1/result;
    } else{
        for(int i=1; i<=y; i++){
            result *= x;
    }
    }
    
    cout<<x<<"^"<<y<<" = "<<result;

    return 0;
}