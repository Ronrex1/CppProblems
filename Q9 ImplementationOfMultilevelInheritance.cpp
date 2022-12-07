#include<iostream.h>
#include<conio.h>

class student // Base Class
{
	protected:
	int rollno;
	char *name;
	public:
	void getdata(int b,char *n)
	{
		rollno = b;
		name = n;
	}
	void putdata(void)
	{
		cout<< " The Name Of Student \t: "<< name<< endl;
		cout<< " The Roll No. Is \t: "<< rollno<< endl;
	}
};

class test:public student // Derieved Class 1
{
	protected:
	float m1,m2;
	public:
	void gettest(float b,float c)
	{
		m1 = b;
		m2= c;
	}
void puttest(void)
{
	cout<< " Marks In CP Is \t: "<< m1<< endl;
	cout<< " Marks In Drawing Is \t: "<< m2<< endl;
}
};

class result:public test // Derieved Class 2
{
	protected:
	float total;
	public:
	void displayresult(void)
	{
		total = m1 + m2;
		putdata();
		puttest();
		cout<< " Total Of The Two \t: "<< total<< endl;
	}
};

void main()
{
	clrscr();
	int x;
	float y,z;
	char n[20];
	cout<< "Enter Your Name:";
	cin>>n;
	cout<< "Enter The Roll Number:";
	cin>>x;
	result r1;
	r1.getdata(x,n);
	cout<< "ENTER COMPUTER PROGRAMMING MARKS:";
	cin>>y;
	cout<< "ENTER DRAWING MARKS:";
	cin>>z;
	r1.gettest(y,z);
	cout<< endl<< endl<< " RESULT"<< endl;
	r1.displayresult();
	getch();
}