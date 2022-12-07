#include<iostream.h>
#include<conio.h>
#include<process.h>
void enter(int a[10][10], int , int);
void display(int a[10][10], int , int);
void add(int a[10][10], int b[10][10] , int , int);
int m,n,r,c;
int a[10][10],b[10][10];
int p,q;
void main()
{
	clrscr();
	cout<<"\n\nEnter the value of row and col for the first array "<<endl;
	cin>>m>>n;
	cout<<"\n\nEnter the value of row and col for the second array"<<endl;
	cin>>r>>c;
	if((m==r) && (n==c))
	{cout<<"\n\nEnter the elements of the first array"<<endl;
	enter(a,m,n);
	cout<<"\n\nEnter the elements of the second array"<<endl;
	enter(b,m,n);
	cout<<"\n\n The matrices are"<<endl;
	display(a,m,n);
	cout<<"\n";
	display(b,m,n);
	cout<<"\n\nAfter adding the matrices"<<endl;
	add(a,b,m,n);   }
	else {
	cout<<"\n\nAddition is not possible";
	exit(0);
	}
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
void add (int a[10][10], int b[10][10], int m , int n)
{
	int c[10][10];
	for(p=0;p<m;p++)
	{
		for(q=0;q<n;q++)
		{
			c[p][q]=a[p][q]+b[p][q];
		}
	}
	display(c,p,q);
}




