#include <iostream>
using namespace std;

int main() {
    float quizMark, testMark, projectMark,finalMark, assignmentMark, totalMark;
    label1:
    cout << "Enter the test mark from 15% : ";
    cin >> testMark;
    if(testMark>15||testMark<0){ cout<<"please enter a mark that is not above 15 or below 0"<<endl;
    goto label1;}
    lable2:
    cout << "Enter the quiz mark from 5% : ";
    cin >> quizMark;
    if(quizMark>5|| quizMark<0){ cout<<"please enter mark that is not above 5 or below 0"<<endl;
    goto lable2 ;}
    lable3:
    cout << "Enter the project mark from 20%: ";
    cin >> projectMark;
    if(projectMark>20|| quizMark<0){ cout<<"please enter mark that is not above 20 or below 0"<<endl;
    goto lable3;}
    lable4:
    cout << "Enter the Assignment mark from 10%: ";
    cin >> assignmentMark;
    if(assignmentMark>10|| quizMark<0){ cout<<"please enter mark that is not above 10 or below 0"<<endl;
    goto lable4;}
    lable5:
    cout << "Enter the Final exam mark from 50%: ";
    cin >> finalMark;
    if(finalMark>50|| quizMark<0){ cout<<"please enter mark that is not above 50 or below 0"<<endl;
    goto lable5;}

    totalMark = testMark +quizMark + projectMark + assignmentMark + finalMark;

    cout << "\nTotal Marks from 100%: " << totalMark << endl;

    if (totalMark >= 90) {
        cout << "Letter Grade: A+" << endl;
    } else if (totalMark >= 80) {
        cout << "Letter Grade: A" << endl;
    } else if (totalMark >= 75) {
        cout << "Letter Grade: B+" << endl;
    } else if (totalMark >= 60) {
        cout << "Letter Grade: B" << endl;
    } else if (totalMark >= 55) {
        cout << "Letter Grade: C+" << endl;
    } else if (totalMark >= 45) {
        cout << "Letter Grade: C" << endl;
    } else if (totalMark >= 30) {
        cout << "Letter Grade: D" << endl;
    } else {
        cout << "Letter Grade: F" << endl;
    }

    return 0;
}
