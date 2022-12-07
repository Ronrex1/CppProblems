#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	ifstream f1;
	long count=0;
	char ch;
	f1.open("lines.txt",ios::in);
	if(!f1)
	{
		cout<<"File not found";
		exit(0);
	}
	f1.seekg(0);
	while(!f1.eof())
	{
		f1.get(ch);
		if(ch=='\n')
			count++;
	}
	cout<<count;
	getch();
}

