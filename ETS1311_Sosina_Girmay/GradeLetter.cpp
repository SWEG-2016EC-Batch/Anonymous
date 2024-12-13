#include <iostream>

using namespace std; 
int main(){
    float test, quiz, project, assignment, final, mark;
    label1:
    cout<<"Please enter the test score you got out of 15: ";
    cin>>test;
    if(test > 15 || test <0){
        cout<<"Please enter the correct test score you got out of 15. "<<endl;
        goto label1;
    }
    label2:
    cout<<"Please enter the quiz score you got out of 5: ";
    cin>>quiz;
    if(quiz > 5 || quiz < 0){
        cout<<"Please enter the correct quiz score you got out of 5."<<endl;
        goto label2; 
    }
    label3:
    cout<<"please enter the project score you got out of 20: ";
    cin>>project;
    if(project > 20 || project < 0){
        cout<<"Please enter the correct project score you got out of 20."<<endl;
        goto label3;
    }
    label4:
    cout<<"Please enter the assignment score you got out of 10: ";
    cin>>assignment;
    if(assignment > 10 || assignment <0){
        cout<<"Please enter the correct assignment score you got out of 10."<<endl;
        goto label4;
    }
    label5:
    cout<<"Please enter the final score you got out of 50: ";
    cin>>final;
    if(final > 50 || final < 0){
        cout<<"Please enter the correct final score you got out of 50."<<endl;
        goto label5;
    }
    if(cin.fail()){
        cout<<"Invalid input! Please try again."<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        goto label1;
    }
    
    mark = test + quiz + project + assignment + final; 
    cout<<"Your mark out of 100 is "<<mark<<" and ";
    if(mark >= 90){
        cout<<"Your grade letter is A+ ";
    } else if(mark >=80){
        cout<<"Your grade letter is A ";
    } else if(mark >=75){
        cout<<"your grade letter is B+ ";
    } else if(mark >= 60){
        cout<<"your grade letter is B ";
    } else if(mark >= 55){
        cout<<"Your grade letter is C+ ";
    } else if(mark >= 45){
        cout<<"Your grade letter is C ";
    } else if(mark >= 30){
        cout<<"Your grade letter is D ";
    } else{
        cout<<"Your grade letter is F ";
    }


    return 0;
}
