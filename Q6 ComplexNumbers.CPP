#include<iostream.h>
#include<conio.h>
class complex
{
	int real,img;
	public:
	void getdata();
	void putdata();
	complex add(complex,complex);
	complex sub(complex,complex);
}c1,c2,c3,c4;
void complex :: getdata()
{
	cout<<"\nEnter the real part of the complex number";
	cin>>real;
	cout<<"\nEnter the imaginary part of the complex number";
	cin>>img;
}
void complex :: putdata()
{
	cout<<"\nThe complex number is:";
	cout<<real<<" + "<<img<<"i";

}
complex complex :: add(complex,complex)
{
       c3.real=c1.real+c2.real;
       c3.img=c1.img+c2.img;
       return c3;

}
complex complex :: sub(complex,complex)
{
       c4.real=c1.real-c2.real;
       c4.img=c1.img-c2.img;
       return c4;
}
void main()
{
	clrscr();
	complex c5,c6;
	c1.getdata();
	c2.getdata();
	c1.putdata();
	c2.putdata();
	cout<<"\nAfter addition\n";
	c3=c3.add(c1,c2);
	c3.putdata();
	cout<<"\nAfter subtraction\n";
	c4=c4.sub(c1,c2);

	c4.putdata();
	getch();
}




