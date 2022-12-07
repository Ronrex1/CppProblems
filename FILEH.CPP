#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{clrscr();
ofstream filout;
filout.open("marks.dat",ios::out);
char ans='y';
int rollno;
float marks;
while(ans=='y'||ans=='Y')
{cout<<"enter rollno"<<endl;
cin>>rollno;
cout<<"enter marks"<<endl;
cin>>marks;
filout<<rollno<<'\n'<<marks<<'\n';
cout<<"want to enter more records?(y/n)"<<endl;
cin>>ans;
}
filout.close();
getch();
}