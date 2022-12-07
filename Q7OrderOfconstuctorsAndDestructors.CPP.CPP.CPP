#include<iostream.h>
#include<conio.h>
class A
{
public:
	A()
	{
		cout<<"Constructor A \n";
	}
	~A()
	{
		cout<<"Destructor A \n";
	}

};
class B
{
public:
	B()
	{
		cout<<"Constructor B \n";
	}
	~B()
	{
		cout<<"Destructor B \n";
	}

};
class C
{
	A ob1,ob2;
	B ob3;
public:
	C()
	{
		cout<<"Constructor C \n";
	}
	~C()
	{
		cout<<"Destructor C \n";
	}

};
int main()
{
	clrscr();
	C oc;
	B ob;
	A oa;
	getch();
}




