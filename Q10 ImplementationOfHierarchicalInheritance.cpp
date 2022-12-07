#include<iostream.h>
#include<conio.h>

class A     //Base class
{
    public:
    double a,b;
	 void getnumber()
    {
			  cout<<"Enter Number for complex number:::\n";
			  cin>>a>>b;
			  cout<<"\nComplex number is :::\t";
			  if(b>0)
			  cout<<a<<"+"<<b<<"i";
			  else
			  cout<<a<<b<<"i";
	 }
};

class B : public A
{
	 public:
	 B(double a,double b,double c,double d)
	 {

		  if((b+d)>0)
		  cout<<"\n\nAddition of complex number "<<(a+c)<<"+"<<(b+d)<<"i";
		  else
		  cout<<"\n\nAddition od complex number "<<(a+c)<<(b+d)<<"i";

	 }

};

class C : public A
{
	 public:
	 C(double a,double b,double c,double d)
	 {

		  if(((a*d)*(b*c))>0)
	 cout<<"\n\nMultiplication of complex number "<<((a*c)+((b*d)*(-1)))<<"+"<<(a*d)+(b*c)<<"i";
		  else
	 cout<<"\n\nMultiplication of complex number "<<((a*c)+((b*d)*(-1)))<<(a*d)+(b*c)<<"i";

	 }
};

int main()
{
	 clrscr();
	 A a1;
	 a1.getnumber();
	 A a2;
	 cout<<"\n";
	 a2.getnumber();
	 cout<<"\n";
	 B(a1.a,a1.b,a2.a,a2.b);
	 cout<<"\n";
	 C(a1.a,a1.b,a2.a,a2.b);
	 cout<<"\n";
	 getch();
}

