// Program to sort an array using Insertion Sort
#include<iostream.h>
#include<conio.h>
#include<limits.h>

void isort(int  a[],int n)
{
     int i,k; a[0]=INT_MIN;
     for(i=1;i<=n;i++)
     {
	     int t=a[i];
	     int j;
	     for(j=i-1;j>=0&&t<a[j];j--)
	     {
			   a[j+1]=a[j];
	     }
	     a[j+1]=t;

cout<<"Iteration "<<i<<"is:-  ";
for(k=1;k<=n;k++)
cout<<a[k]<<"      ";
cout<<"\n"; }

}


void main( )
{  clrscr( );
    int a[20],i,n;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter elements (Use Spacebar as Separator)\n";
    for(i=1;i<=n;i++)
    {
                    cin>>a[i];
    }
    isort(a,n);
    cout<<"After sorting the Array elements are\n";
    for(i=1;i<=n;i++)
    {
                    cout<<a[i]<<"\n";
    }
    getch( );
}