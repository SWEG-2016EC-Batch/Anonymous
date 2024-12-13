#include<iostream>
using namespace std;

int main(){

    float test,quiz,project,assignment,final_exam,mark=0;

    cout<<"enter test result out of 15: "<<endl;
    cin>>test;
    cout<<"enter quiz result out of 5: "<<endl;
    cin>>quiz;
    cout<<"enter project result out of 20: "<<endl;
    cin>>project;
    cout<<"enter assignment result out of 10: "<<endl;
    cin>>assignment;
    cout<<"enter final reslut out of  50: "<<endl;
    cin>>final_exam;

    mark=test+quiz+project+assignment+final_exam;

    if(mark>=90){
        cout<<" your grade is 'A+' "<<endl;
    }
    else if(mark>=80){
        cout<<" your grade is 'A' "<<endl;
    } 
    else if(mark>=75){
        cout<<" your grade is 'B+' "<<endl;
    }
    else if(mark>=60){
        cout<<" your grade is 'B' "<<endl;
    }
   else if(mark>=55){
        cout<<" your grade is 'C+' "<<endl;
    }
   else if(mark>=45){
        cout<<" your grade is 'C' "<<endl;
    }
   else if(mark>=30){
        cout<<" your grade is 'D' "<<endl;
    }
   else{
    cout<<" your grade is 'F' "<<endl;
    }


    return 0;
    }
