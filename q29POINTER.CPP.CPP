#include<iostream.h>
#include<conio.h>

void swap(int  * x,int  *y)
{ int temp;
temp=* x;
*x=*y;
*y=temp;      
cout<<"\n Swapped values are:(In swap( ) )\n";
cout<<"a= "<<*x<<" \tb="<<*y<<"\n";
}

void main()
{
clrscr();
void swap(int *,int *);        
int a,b;
cout<<"Enter two numbers\n";
cin>>a>>b;
cout<<"\n Original values are: \n";
cout<<"a= "<<a<<"\t b="<<b<<"\n";
swap(&a,&b); 
cout<<"\nValues after swap() are: \n";
cout<<"a= "<<a<<" \tb="<<b<<"\n";
getch();
}
