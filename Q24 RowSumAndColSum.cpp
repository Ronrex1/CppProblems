#include<iostream.h>
#include<conio.h>
void enter(int,int);
void display(int,int);
void csum(int,int);
void rsum(int,int);
int i,j,m,n,a[10][10];
int rowsum,colsum;
void main()
{
	clrscr( );
	cout<<"\n Enter the value of row and col of the array\n";
	cin>>m>>n;
	enter(m,n);
	clrscr();
	display(m,n);
	cout<<"\nRow sum\n";
	rsum(m,n);
	cout<<"\nColumn sum\n";
	csum(m,n);
	getch();
}
void enter(int m,int n)
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}
void display(int m,int n)
{       cout<<"\n\nARRAY ELEMENTS ARE:-\n\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void rsum(int m,int n)
{
	int rowsum[10];

	for(i=0;i<m;i++)
	{       rowsum[i]=0;
		for (int j=0;j<n ;j++)
		rowsum[i]+=a[i][j];
		cout<<"\nThe row sum for the row "<<(i+1)<<" = "<<rowsum[i]<<endl;
	}
}
void csum(int m,int n)
{
	int colsum[10];
	for(j=0;j<n;j++)
	{
		colsum[j]=0;
		for (int i=0;i<m ;i++)
		colsum[j]+=a[i][j];
		cout<<"\nThe col sum for the col "<<(j+1)<<" = "<<colsum[j]<<endl;
	}
}


