#include <iostream>
using namespace std;

//declaring functions
void five_times();
void alphabets();
void pyramid_left();
void pyramid_right();
void aphabets_pyramid();
void five_aphabets();
void hollow();
void inverted_pyramid();
void hollow_pyramid();
void full();
void inverted_full();
void hollow_p();

int main(){
	
	// menu display
	cout<<"******* MENU *******"<<endl;
	cout<<endl;
	cout<<"Enter 1 to print natural numbers upto 5, n times."<<endl;
	cout<<"Enter 2 to print alphabets upto x, in n rows."<<endl;
	cout<<"Enter 3 to print natural numbers upto 5, n times in half pyramid to the left."<<endl;
	cout<<"Enter 4 to print natural numbers upto 5, n times in half pyramid to the right."<<endl;
	cout<<endl;
	cout<<"Enter 5 to print alphabets upto e, n times in half pyramid."<<endl;
	cout<<"Enter 6 to print alphabets upto e, n times."<<endl;
	cout<<"Enter 7 to print hollow rectangle."<<endl;
	cout<<"Enter 8 to print inverted half pyramid."<<endl;
	cout<<endl;
	cout<<"Enter 9 to print hollow inverted half pyramid."<<endl;
	cout<<"Enter 10 to print full pyramid."<<endl;
	cout<<"Enter 11 to print inverted full pyramid."<<endl;
	cout<<"Enter 12 to print hollow pyramid."<<endl;
	cout<<endl;
	
	int choice;
	
	do{
	cout<<"please enter number to choose the patterns: ";
	int number;
	cin>>number;
	cout<<endl;
	
		if(cin.fail() || number == 0 || number > 12)
		{
		cout<<" Please enter the correct number from the menu. "<<endl;
		cin.ignore();
		cin.clear();
		cin>>number;
	    }
		switch(number)
		{
		case 1: five_times();
			break;
		case 2: alphabets();
			break;
		case 3: pyramid_left();
			break;
		case 4: pyramid_right();
			break;
		case 5: aphabets_pyramid();
			break;
		case 6: five_aphabets();
			break;
		case 7: hollow();
			break;
		case 8: inverted_pyramid();
			break;
		case 9: hollow_pyramid();
			break;
		case 10: full();
			break;
		case 11: full_pyramid();
			break;
		case 12: hollow_p();
			break;
	}
cout<<endl;
cout<<"would you like to see more patterns? (0 / 1) "<<endl;
cin>>choice;

}while(choice==1);
cout<<"good bye! :( "<<endl;
 
return 0;
}

// pattern 1
void five_times()
{
cout<<endl;
cout<<"pattern 1"<<endl;
cout<<"please enter row and column"<<endl;
int row, column;
cin>>row>>column;
for(int i=1; i<=row; i++)
{
	for(int j=1; j<=column; j++)
	{
 		cout<<j<<" ";
	}
cout<<endl;
}
cout<<endl;
}

// pattern 2
void alphabets()
{
cout<<endl;
cout<<"pattern 2"<<endl;
cout<<"please enter column "<<endl;
int column;
cin>> column;

for(char i = 'A'; i <= 'Z' ; i++)
{
	cout<<i<<"  ";
	if (column == 14)
	{
		if((i-8) % column==0)
		{
			cout<<endl;
		}
	}   
	else if (column == 19)
	{
		if((i-7) % column==0)
		{
			cout<<endl;
		}
	}   
	else if (column == 10 || column == 12|| column == 15|| column == 20)
	{
		if((i-4) % column==0)
		{
			cout<<endl;
		}
	}   
	else if (column==7 || column==9||column==21)
	{
		if((i-1) % column==0)
		{
			cout<<endl;
		}
	}   
	else if (column<3|| column==4 || column == 8 || column == 16 )
	{
		if(i %column==0)
		{
			cout<<endl;
		}
	}   
	else if (column==5 || column==13)
	{
		if((i+1) % column==0)
		{
			cout<<endl;
		}
	}   
	else if (column==3 || column==6 || column==11|| column==22)
	{
		if((i+2) % column==0)
		{
			cout<<endl;
		}
	}
	else if ( column==23 )
	{
		if((i+5) % column==0)
		{
			cout<<endl;
		}
	}   
	else if ( column==24 )
	{
		if((i-16) % column==0)
		{
			cout<<endl;
		}
	}   
	else if (column == 17)
	{
		if((i+4) % column == 0)
		{
			cout<<endl;
		}
	}   
	else if (column==18)
	{
		if((i+8) % column==0)
		{
			cout<<endl;
		}
	}     
	else if ( column == 25)
	{
		if((i+11) % column==0)
		{
			cout<<endl;
		}
	}     
}	
}

// pattern 3
void pyramid_left()
{
cout<<endl;
cout<<"pattern 3"<<endl;
cout<<endl;
cout<<"please enter row: ";
int row, column;
cin>>row;
column= row;
for(int i=1; i<=row ; i++)
{
	column = column-(column-i);
	for(int j=1; j<=column; j++)
	{
		cout<<j<<" ";
	}
cout<<endl;
}
}

// pattern 4
void pyramid_right()
{
cout<<"pattern 4"<<endl;
cout<<endl;
int row;
cout<<"please enter row: ";
cin>>row;
for (int i=1; i<=row; i++)
{
    for (int k=row-i; k>0; k--)
	{
    	cout<< "  ";
    }
    for(int j=i; j>=1; j --)
	{
        cout <<j<< " ";
    }
cout << endl;
}	
}

// pattern 5
void aphabets_pyramid()
{
cout<<endl;
cout<<"pattern 5"<<endl;
int row;
cout<<"please enter row: ";
cin>>row; 
for(int i=0; i<row; i++)
{
	for(char j='a'; j<='a'+i; j++)
	{
		cout<<j<<" ";
	}
cout<<endl;
}
}

// pattern 6
void five_aphabets()
{
cout<<endl;
cout<<"pattern 6"<<endl;
cout<<"please enter row. "<<endl;
int row;
cin>>row;
for(int i=1; i<=row; i++)
{
	cout<<"a, b, c, d, e ";
	cout<<endl;
}
}

// hollow rectangle 
void hollow()
{
cout<<endl;
cout<<"hollow rectangle "<<endl;
int row, column;

cout<<"please enter row: ";
cin>>row;
cout<<"please enter a column: ";
cin>>column;

for(int i=1; i<=row; i++)
{
	for(int j=1; j<=column; j++)
	{
		if (j==1||j==column||i==1||i==row)
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
	}
cout<<endl;
} 
}

// inverted half pyramid 
void inverted_pyramid()
{
cout<<"inverted half pyramid"<<endl;
cout<<endl;
int row, column;

cout<<"enter the row: ";
cin>>row;
cout<<"enter the column: ";
cin>>column;

for(int i = 0; i < row; i++)
{
	for(int j =1; j<= column-i; j++)
	{
		cout<<"* ";
	}
cout<<endl;
}
}

//hollow inverted half pyramid 
void hollow_pyramid()
{
cout<<"hollow inverted half pyramid"<<endl;
cout<<endl;
int row;

cout<<"please enter the row: ";
cin>>row;
for(int i= row; i>=1; i--)
{
	for (int j= 1; j<=i; j++)
	{
		if(j==1||i==row|i==1||i==j)
		{
		cout<<"* ";
		}
		else 
		{
		cout<<"  ";
		}
	
	}
	cout<<endl;
}
}

//full pyramid 
void full()
{
cout<<"full pyramid "<<endl;
cout<<endl;	
int row;
cout<<"please enter row: ";
cin>>row;

for (int i=1; i<=row; i++)
{ 
	for(int j=1; j<=row-i; j++)
	{
		cout<<"  ";
	}
	for(int k=1; k<=row-(row-i); k++)
	{
		cout<<"  * ";
	}
	cout<<endl;
}
}

//inverted full pyramid 
void inverted_full()
{
cout<<"inverted full pyramid "<<endl;
cout<<endl;
int row;

cout<<"enter the row: ";
cin>>row;

for(int i=1; i<=row; i++)
{
	for(int j=1; j<=row-(row-i); j++)
	{
		cout<<"  ";
	}
	for(int k=0; k<=row-i; k++)
	{
		cout<<"  * ";
	}
cout<<endl;
}
}

//hollow pyramid
void hollow_p()
{
cout<<"hollow pyramid"<<endl;
cout<<endl;

cout<<"please enter the row: ";
int row; 
cin>>row;

for(int i=1; i<=row; i++)
{
	for(int j=1; j<=row-i; j++)
	{
		cout<<"  ";
	}
	for(int k=1; k<=row-(row-i); k++)
	{
		if (i==row||k==1||k==row-(row-i))
		{
			cout<<"  * ";
		}
		else
		{
			cout<<"    ";
		}
	}
cout<<endl;
}
}
