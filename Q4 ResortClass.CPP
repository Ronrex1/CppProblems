#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class RESORT
{
	int Rno,days;
	char name[20];
	float charges;
	float COMPUTE();
	public:
	void getinfo();
	void Dispinfo();
};
void RESORT::getinfo()
{
	cout<<"Enter Rno \n";
	cin>>Rno;
	cout<<"Enter the name \n";
	gets(name);
	cout<<"Enter the charges \n";
	cin>>charges;
	cout<<"Enter the number of days"<<endl;
	cin>>days;
}
void RESORT:: Dispinfo()
{
	cout<<"Rno is "<<Rno<<endl;
	cout<<"Name: ";
	puts(name);
	cout<<"charges: "<<charges<<endl;
	cout<<"Days: "<<days<<endl;
	cout<<COMPUTE()<<endl;
}
float RESORT:: COMPUTE()
{
	float amount= charges*days;
	if (amount>10000)
	{
		amount =((1.02)*days*charges);
	}
	return amount;
}
void main()
{
	clrscr();
	RESORT ob;
	ob.getinfo();
	ob.Dispinfo();
	getch();
}


