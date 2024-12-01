#include <iostream>
using namespace std; 
int main(){
    int M, G, N_mile = 1;
    start:
    cout<<"enter the miles per gallon the automobile can be driven:  ";
    cin>>M;
    cout<<"enter the capacity of the automobile fuel tank in gallon : ";
    cin>>G;
    if(cin.fail()){
        cout<<"Invalid input. Please try again!"<<endl;
        cin.clear();
        cin.ignore(1000, '\n');
        goto start;
    } else {

// Now calculate the number of miles the automobile can be driven without refueling.
    N_mile = M * G;
    cout<<"The number of mile the automobile ca n be driven without refueling is "<<N_mile<<" miles.";
    }
    return 0;
}
