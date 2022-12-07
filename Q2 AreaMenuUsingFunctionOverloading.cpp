#include<iostream.h>
#include<conio.h>
#include<math.h>
float area(float a , float b , float c)
{
	float s,ar;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}
float area(float a , float b)
{
	return a*b;
}
float area(float a)
{
	return a*a;
}
void main()
{
	clrscr();
	int choice,s1,s2,s3;
	float ar;
	char c;
	do
	{
		cout<<"\n-------Area Menu-------\n"
			 <<"1.Triangle\n"
			 <<"2.Square\n"
			 <<"3.Rectangle\n"
			 <<"4.Exit\n"
			 <<"Enter Your Choice(1-4)\n";
		cin>>choice;
		switch(choice)
		{
			case 1 : cout<<"Enter 3 sides of a Triangle"<<endl;
						cin>>s1>>s2>>s3;
						ar=area(s1,s2,s3);
						break;
			case 2 : cout<<"Enter a side of a Square"<<endl;
						cin>>s1;
						ar=area(s1);
						break;
			case 3 : cout<<"Enter Length and Breadth of a Rectangle"<<endl;
						cin>>s1>>s2;
						ar=area(s1,s2);
						break;
			case 4 : break;
			default: cout<<"Wrong Choice";
		};
		cout<<"\narea : "<<ar;
		cout<<"\nDo you wish to continue?(y/n)\n";
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}


