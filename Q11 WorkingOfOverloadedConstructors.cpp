#include<iostream.h>
#include<conio.h>
class deposit
{
	long int principal;
	int time;
	float rate;
	float total_amt;
public:
	deposit();
	deposit(long p,int t,float r);
	deposit(long p,int t);
	deposit(long p,float r);
	deposit(deposit&);
	void calc_amt();
	void display();
};
deposit::deposit()
{
	principal=time=rate=0.0;
}
deposit::deposit(long p,int t,float r)
{
	principal=p;
	time=t;
	rate=r;
}
deposit::deposit(long p,int t)
{
	principal=p;
	time=t;
	rate=0.08;
}
deposit::deposit(long p,float r)
{
	principal=p;
	time=2;
	rate=r;
}
deposit::deposit(deposit &d)
{
	principal=d.principal;
	time=d.time;
	rate=d.rate;
}
void deposit::calc_amt()
{
	total_amt=principal+(principal*rate*time)/100;
}
void deposit::display()
{
	cout<<"pricipal amount "<<principal<<endl;
	cout<<"time "<<time<<endl;
	cout<<"Rate "<<rate<<endl;
	cout<<"total "<<total_amt<<endl;
}
void main()
{
	clrscr();
	deposit d1,d2(2000,2,0.7f),d3(4000,1),d4(3000,0.12f),d5(d3);
	d1.calc_amt();
	d2.calc_amt();
	d3.calc_amt();
	d4.calc_amt();
	d5.calc_amt();
	cout<<"ob1 ";
	d1.display();
	cout<<"ob2 ";
	d2.display();
	cout<<"ob3 ";
	d3.display();
	cout<<"ob4 ";
	d4.display();
	cout<<"ob5 ";
	d5.display();
	getch();
}


