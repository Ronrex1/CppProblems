#include<iostream.h>
#include<conio.h>
#include<process.h>
float volume(float a , float b , float c)
{
	return a*b*c;
}
float volume(float a)
{
	return a*a;
}
float volume(float a,float b)
{
	float d;
	d=(0.33*3.14*a*a*b);
	return d;
}
void main()
{
	clrscr();
	int choice,s1,s2,s3;
	float v;
	char c;
	do
	{
		cout<<"\n-------Volume Menu-------\n"
			 <<"1.Cube\n"
			 <<"2.Cuboid\n"
			 <<"3.cone\n"
			 <<"4.Exit\n"
			 <<"Enter Your Choice(1-4)\n";
		cin>>choice;
		switch(choice)
		{
			case 1 : cout<<"Enter side of the Cube"<<endl;
						cin>>s1;
						v=volume(s1);
						break;
			case 2 : cout<<"Enter the sides of the cuboid"<<endl;
						cin>>s1>>s2>>s3;
						v=volume(s1,s2,s3);
						break;
			case 3 : cout<<"Enter the Radius and height of the cone "<<endl;
						cin>>s1>>s2;
						v=volume(s1,s2);
						break;
			case 4 : exit(0);
			default: cout<<"Wrong Choice";
		};
		cout<<"\nvolume : "<<v;
		cout<<"\nDo you wish to continue?(y/n)\n";
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}

