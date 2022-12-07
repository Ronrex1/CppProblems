#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class student
{int stupwd;
 public:
 student(int pwd)
 { stupwd=pwd;}
 void showpwd()
 {cout<<"password=  "<<stupwd<<endl;}

 };
class emp:public student
{int ecode;
public:
emp(int x,int y):student(x)
{ecode=y;
}
void showdata()
{cout<<"ecode "<<ecode;
showpwd();

      }
};
void main() {clrscr();
cout<<"size of class student is: "<<sizeof(student)<<endl;
cout<<"size of class emp is: "<<sizeof(emp)<<endl;
emp obj(123,101);
obj.showdata();
getch();
}