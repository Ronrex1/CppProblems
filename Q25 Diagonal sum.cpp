#include<iostream.h>
#include<conio.h>
void enter(int a[10][10], int , int);
void display(int a[10][10], int , int);
int diag(int a[10][10], int , int);
int m,n;
int a[10][10];
int p,q;
void main()
{
	clrscr();
	cout<<"\n\n Enter the value of row and col "<<endl;
	cin>>m>>n;
	cout<<"\n\n Enter the elements of the array"<<endl;
	enter(a,m,n);
	cout<<"\n\nThe matrix is"<<endl;
	display(a,m,n);
	cout<<"\n\nSum of diagonal elements is "<<endl;
	int sum;
	sum=diag(a,m,n);
	cout<<sum;
	getch();
}
void enter (int a[10][10], int m , int n)
{
	for(p=0;p<m;p++)
	{
		for(q=0;q<n;q++)
		{
			cin>>a[p][q];
		}
	}
}
void display (int a[10][10], int m , int n)
{
	for(p=0;p<m;p++)
	{
		for(q=0;q<n;q++)
		{
			cout<<a[p][q]<<"\t";
		}
		cout<<"\n";
	}
}
int diag (int a[10][10], int m , int n)
{
	int x=0;
	for(p=0;p<m;p++)
	{
		for(q=0;q<n;q++)
		{
			if(p==q)
			{
				x+=a[p][q];
			}
		}
	}
	return x;
}

