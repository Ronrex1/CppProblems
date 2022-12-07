#include<iostream.h>
#include<conio.h>
 
class student
{
    protected:
       int rno,m1,m2;
    public:
                void get()
              {
                            cout<<"Enter the Roll no :";
                            cin>>rno;
									 cout<<"Enter the marks in two  :";
                            cin>>m1>>m2;
              }
};
class english
{
	 protected:
		 int sm;
	 public:
					 void getsm()
				  {
                 cout<<"\nEnter the english mark :";
                 cin>>sm;
 
              }
};
class statement:public student,public english
{
    int tot,avg;
	 public:
    void display()
              {
					  tot=(m1+m2+sm);
                 avg=tot/3;
                 cout<<"\n\n\tRoll No    : "<<rno<<"\n\tTotal      : "<<tot;
               cout<<"\n\tAverage    : "<<avg;
              }
};
void main()
{
   clrscr();
   statement obj;
   obj.get();
	obj.getsm();
   obj.display();
   getch();
}