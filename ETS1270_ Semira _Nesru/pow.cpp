#include <iostream>
using namespace std;

int main(){
/* let p is x^y
declare and accept  the 3 variables (the base (x), the exponent (y) and p that represnt x^y */
int x, y, p;
cout<<"enter a number for the base"<<endl;
cin>>x;
cout<<"enter a number for the exponent "<<endl;
cin>>y;
// calcuate the power 
p=pow(x,y);
// print the result
cout<< x <<" ^ "<<y <<" is "<<p<<endl;
    return 0;
}
