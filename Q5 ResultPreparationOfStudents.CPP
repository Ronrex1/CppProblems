#include<iostream.h>
#include<conio.h>
int i;
class student
{
	int rollno;
	char name[30];
	float mar1,mar2;
	public:
	void input();
	void output();
	void per();
}obj[20];
void student::input()
{
	cout<<"Enter the name of the student"<<endl;
	cin>>name;
	cout<<"Enter the roll no"<<endl;
	cin>>rollno;
	cout<<"Enter marks in 2 subjects"<<endl;
	cin>>mar1>>mar2;
}
void student::output()
{
	cout<<"Name of the student"<<endl;
	cout<<name<<endl;
	cout<<"Roll no"<<endl;
	cout<<rollno<<endl;
	cout<<"Marks in 2 subject";
	cout<<mar1<<" "<<mar2<<endl;
}
void student::per()
{
	cout<<"Percentage is : "<<((obj[i].mar1+obj[i].mar2)/2);
}

void main()
{
	clrscr();
	int n;
	cout<<"Enter the number of students whose records you want to enter";
	cin>>n;
	for(i=0;i<n;i++)
	{
		obj[i].input();
		obj[i].output();
		obj[i].per();
	}
	getch();
}
