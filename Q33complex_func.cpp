//Program to implement pointer to a class as argument to a function
#include <iostream.h>
#include <conio.h>

class complex
{ public:
  int x,y;
};
// Pointer to Classes used as the function argument
void add_complex( complex *, complex *);
void main( )
{  clrscr( );
  complex c1,c2;
  complex *p1,*p2;
p1=&c1;
p2=&c2;      
 
   //c1 specification
cout<<"Enter the first complex number\n";
   cin>>p1->x>>p1->y;
  //c2 specification
cout<<"Enter the second complex number\n";
   cin>>p2->x>>p2->y;
cout<<"\n\nFirst Number is :   "<<p1->x<<" + " <<p1->y<<"i";
cout<<"\n\nSecond Number is :  "<<p2->x<<" + " <<p2->y<<"i";
  // add complex numbers
add_complex( p1,p2);
getch( );
}
void add_complex(complex * a, complex * b)
{
complex  * c;
c->x=a->x+b->x;
c->y=a->y+b->y;
cout<<"\n\nSum of Numbers is  "<<c->x<<" + "<<c->y<<"i";
}

