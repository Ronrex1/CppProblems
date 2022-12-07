// Program to sort an array using Selection Sort
#include <conio.h>
#include <iostream.h>

void selectsort(int A[],int n)
{
  int i,j,k,min;
  for(i=0;i<n;i++)
{
     min=i; 
     for(j=i+1;j<n;j++)
        if(A[j]<A[min]) 
      min=j; //find min value
    //swapping
    int temp=A[i];
    A[i]=A[min];
    A[min]=temp;
    cout<<"Iteration   "<<i+1<<"      ";
    for(k=0;k<n;k++)
    {
    cout<<A[k]<< "   "; }
    cout<<"\n";
      }
    }

void main( )
{ clrscr( );
   int A[10],num,i;
   cout<<"Enter the number of elements\n";
   cin>>num;
   cout<<"Enter the elements\n";
   for(i=0;i<num;i++)
   cin>>A[i];
   selectsort(A,num);
   cout<<"\n\nSORTED ARRAY IS:-\n\n";
   for(i=0;i<num;i++)
   cout<<A[i]<<endl;
getch( );
}