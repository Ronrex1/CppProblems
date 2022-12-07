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
class C :public A,public B
{
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
void main()
{
	clrscr();
	C c;
	getch();
}




