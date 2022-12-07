// Program to search an element in the array using Binary Search
#include<iostream.h>
#include<conio.h>

int bsearch(int AR[], int N, int VAL);

int main()
{	clrscr( );
	int AR[100],n,val,found;
	cout<<"Enter number of elements you want to insert ";
	cin>>n;
	cout<<"Enter element in ascending order\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>AR[i];
	}

	cout<<"\nEnter the number you want to search ";
	cin>>val;

	found=bsearch(AR,n,val);

	if(found==1)
		cout<<"\nItem found";
	else
		cout<<"\nItem not found";

	getch( );
	return 0;
}

int bsearch(int AR[], int N, int VAL)
{
	int Mid,Lbound=0,Ubound=N-1;

	while(Lbound<=Ubound)
	{
		Mid=(Lbound+Ubound)/2;
		if(VAL>AR[Mid])
			Lbound=Mid+1;
		else if(VAL<AR[Mid])
			Ubound=Mid-1;
		else
			return 1;
	}

	return 0;
}