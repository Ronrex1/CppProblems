#include<iostream.h>
#include<conio.h>
void enter(int,int);
void disp(int,int,int [10][10]);
void transpose(int,int);
int i,j,m,n,a[10][10],b[10][10];
int rowsum,colsum;

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
void disp(int m,int n,int array[][10])
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<array[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void transpose(int m,int n)
{

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
}


void main()
{
	clrscr();
	cout<<"\n Enter the value of ROW and COL \n";
	cin>>m>>n;
	cout<<"\n\nEnter the elements\n\n";
	enter(m,n);
	clrscr();
	cout<<"The Array elements are:-\n";
	disp(m,n,a);
	cout<<"\n";
	cout<<"\n\nThe Tranpsose of the Array is:-\n";
	transpose(m,n);
	disp(n,m,b);
	getch();
}