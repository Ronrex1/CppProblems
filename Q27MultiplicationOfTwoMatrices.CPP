#include<iostream.h>
#include<conio.h>
void enter(int a[10][10], int , int);
void display(int a[10][10], int , int);
void multiply(int a[10][10], int b[10][10] , int , int, int , int);
 void main()
{       int m,n,p,q;
	int a[10][10],b[10][10];
	clrscr();
	cout<<"\nEnter the value of row and col of first matrix\n"<<endl;
	cin>>m>>n;
	cout<<"\nEnter the elements of the first array"<<endl;
	enter(a,m,n);
	cout<<"\nEnter the value of row and col of second matrix\n"<<endl;
	cin>>p>>q;
	cout<<"\nEnter the elements of the second array"<<endl;
	enter(b,p,q);
	cout<<"\n\nThe matrices are"<<endl;
	cout<<"\n FIRST MATRIX\n";
	display(a,m,n);
	cout<<"\n";
	cout<<"\n SECOND MATRIX\n";
	display(b,p,q);
	cout<<"\n\nAfter multiplying the matrices are:\n\n\n"<<endl;
	multiply(a,b,m,n, p, q);
	getch();
}
void enter (int a[10][10], int m , int n)
{
	for(int p=0;p<m;p++)
	{
		for(int q=0;q<n;q++)
		{
			cin>>a[p][q];
		}
	}
}
void display (int a[10][10], int m , int n)
{
	for(int p=0;p<m;p++)
	{
		for(int q=0;q<n;q++)
		{
			cout<<a[p][q]<<"\t";
		}
		cout<<"\n";
	}
}
void multiply (int a[10][10], int b[10][10], int m , int n, int p , int q)
{
	int c[10][10];
	if(n==p)
	{
		for(int r=0;r<m;r++)
		{
			for(int s=0;s<q;s++)
			{
				c[r][s]=0;
				for(int k=0;k<n;k++)
				{
					c[r][s]=c[r][s]+a[r][k]*b[k][s];
				}
			}
		}
		display(c,m,q);
	}
	else
		cout<<"Multiplaction not possible";
}



