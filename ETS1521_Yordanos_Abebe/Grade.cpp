#include <iostream> 
using namespace std;
int main()
{
	double test, quiz, assignment, project, final, total_marks;
	char grade, sign ;
	cout<<"enter your test score (15%): ";
	cin>>test;
	cout<<"enter your quiz score (5%): ";
	cin>>quiz;
	cout<<"enter your assignment score (10%): ";
	cin>>assignment;
	cout<<"enter your project score (20%): ";
	cin>>project;
	cout<<"enter your final score (50%): ";
	cin>>final;
		total_marks = test + quiz + assignment + project + final;
	cout<<"your score is: "<<total_marks<<endl;
	if(total_marks >= 90)
	{
	    grade = 'A';
	    sign= '+';
		cout<<"your grade is: "<<grade<<sign<<endl;
	}
	else if(total_marks < 90 && total_marks >= 80)
	{
	    grade = 'A';
		cout<<"your grade is: "<<grade<<endl;
	}
	else if( total_marks < 80 && total_marks >= 75)
	{
	    grade = 'B';
	    sign = '+';
		cout<<"your grade is: "<<grade<<sign<<endl;
	}
	else if( total_marks < 75 && total_marks >= 60)
	{
	    grade = 'B';
		cout<<"your grade is: "<<grade<<endl;
	}
	else if(total_marks < 60 && total_marks >= 55)
	{
	    grade = 'C';
	    sign= '+';
		cout<<"your grade is: "<<grade<<sign<<endl;
	}
	else if(total_marks <55 && total_marks >= 45)
	{
	    grade = 'C';
		cout<<"your grade is: "<<grade<<endl;
	}
	else if(total_marks < 45 && total_marks >= 30 )
	{
	    grade = 'D';
		cout<<"your grade is: "<<grade<<endl;
	}
	else 
	{
	    grade = 'F';
		cout<<"your grade is: "<<grade<<endl;
	}
	
	return 0;
}
