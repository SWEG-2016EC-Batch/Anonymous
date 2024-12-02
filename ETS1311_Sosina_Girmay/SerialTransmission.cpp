#include <iostream> 
using namespace std;
int main(){
    int size, time = 1, hour = 1, minute = 1, day =1, second =1;
    label1:
    cout<<"please enter the file size that you want to send in byte: ";
    cin>>size;

    if(cin.fail()){ 
        cout<<"invalid input! please try again."<<endl;
        cin.clear();
        cin.ignore(1000,'\n');

        goto label1;
    }
     /*Since 1 byte is the same as 1 character, we can find the time by dividing the size 
     by 960. 
     1 day = 86400 seconds, 1 hour = 3600 seconds and 1 minute = 60 seconds. */
    time = size / 960;
    day = time / 86400;
    time %= 86400;
    hour = time / 3600;
    time %= 3600;
    minute = time / 60;
    time %= 60;
    second = time;

    cout<<"The time it takes to send "<<size<<" bytes is "<<day <<" day, "<<hour<<" hour, "<<minute<<" minutes and "<<second<<" seconds.";

    return 0;
}