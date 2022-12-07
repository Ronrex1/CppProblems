// Program to merge two arrays where A is in ascending order and B is in descending order
// C is in Descending Order
#include<iostream.h>
#include<conio.h>
void main( )
{  int a[10],b[10],c[20],n,m,i;
    void Merge(int A[ ],int M,int B[ ],int N,int C[ ]) ;
   clrscr( );
   cout<<"Enter the size of array A\n";
   cin>>n;
   cout<<"Enter "<<n<<" elements\n";
   for (i= 0; i < n; i++)
   cin>>a[i];
   cout<<"Enter the size of array B\n";
   cin>>m;
 
  cout<<"Enter "<<m<<" elements\n";

   for (i= 0; i < m; i++)
   cin>>b[i];
   Merge(a,n,b,m,c);
   }


void Merge(int A[ ],int M,int B[ ],int N,int C[ ])
{
int a,b,c;
for(a=0,b=N-1,c=M+N-1;a<M&&b>=0;)
{ if(A[a]<=B[b])
C[c--]=A[a++];
else
C[c--]=B[b--];
}
if(a<M)
{ while(a<M)
C[c--]=A[a++];
}
else
{ while(b>=0)
C[c--]=B[b--];
}
   cout<<"\n\n MERGED ARRAY IS:-\n";

   for (int i= 0; i <(M+N); i++)
   cout<<C[i]<<"   ";
}
