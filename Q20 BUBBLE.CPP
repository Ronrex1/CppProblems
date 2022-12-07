#include<iostream.h>
#include<conio.h>

void main()
{ clrscr( );
 int a[50],n,i,j,k,temp;
  cout<<"Enter the size of array: ";
 cin>>n;
 cout<<"Enter the array elements: ";

  for(i=0;i<n;++i)
  cin>>a[i];
  for(i=0;i<n;++i)
  {for(j=0;j<(n-1-i);++j)
if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
   cout<<"Array after iteration: "<<i+1<<" is:-  ";
 for(k=0;k<n;++k)
 cout<<a[k]<<"  ";
 cout<<"\n";}

  cout<<"Array after sorting:\n ";
 for(i=0;i<n;++i)
 cout<<a[i]<<"  ";
 getch( );
}