#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int display(char a, char b, char c,char d,int t1, int t2,int t3,int t4);//function Declaration

int display(char a, char b, char c,char d,int t1, int t2,int t3,int t4)//function definition
{
	for(int i=10;i>=0;i--)//ten second loop
	{
		system("CLS");
		
		if(i<=1 && a=='G'&& b=='R'&& c=='R'&& d=='R')
		{
			a='Y';
			b='Y';
		}//if
		else if (i<=1 && a=='R'&& b=='G'&& c=='R'&& d=='R')
		{
			b='Y';
			c='Y';
		}//if
			else if (i<=1 && a=='R'&& b=='R'&& c=='G'&& d=='R')
		{
			c='Y';
			d='Y';
		}//if
			else if (i<=1 && a=='R'&& b=='R'&& c=='R'&& d=='G')
		{
			d='Y';
			a='Y';
		}//if
		
		cout<<"\n\n\t\t *************************************** ";
		
		cout<<"\n\n\t\t    *TRAFFIC CONTROLLING SYSTEM * ";
		
		cout<<"\n\n\t\t *************************************** ";
		
		//main display (layout)
		
		cout<<"\n\n\n\n";
        cout<<"\n\t\t\t         |      |";
		
		cout<<"\n\t\t\t         |   |  |";
		
		cout<<"\n\t\t\t  "<<a<<"["<<t1+i<<"]"<<"\t\t   "<<b<<"["<<t2+i<<"]";
		cout<<"\n\t\t_________________|   |  |________________";
		cout<<"\n\t\t                                          ";
		cout<<"\n\t\t     ----------              ----------   ";
		cout<<"\n\t\t_________________|   |  |________________";
		cout<<"\n\t\t\t  "<<c<<"["<<t3+i<<"]"<<"\t\t   "<<d<<"["<<t4+i<<"]";
		
		cout<<"\n\t\t\t         |   |  |";
		
		cout<<"\n\t\t\t         |      |";
		
		Sleep(1000);//delay program for one minute
		
		
	}//for
	
}//display


main()
{
	while(1)//infinite loop
	{
		//a
		
		display('G','R','R','R',0,0,11,21);
		system("CLS");
		
		//b
		
		display('R','G','R','R',21,0,0,10);
		system("CLS");
		
		//c
		
		display('R','R','G','R',10,21,0,0);
		system("CLS");
		
		//d
		
		display('R','R','R','G',0,10,21,0);
		system("CLS");
	}//while
	
	return 0;

}//main
