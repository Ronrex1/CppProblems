// program to implement  This pointer 
#include<iostream.h>
#include<conio.h>
class Rectangle
{ float area,len,bre;
public:
void input(  )
{ cout<<"\nEnter the length and breadth: ";
cin>>this->len>>this->bre;
}
void calculate(  )
{ area=len*bre;
//Here Implicit 'this' pointer will be worked.
}
void output(  )
{
cout<<"\nThe Area of the Rectangle: "<<this->area;
}
};
void main(  )
{
Rectangle R;
clrscr( );
R.input( );
R.calculate( );
R.output( );
getch( );
}


