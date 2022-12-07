#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{ int rollno;
 char name[20];
 public:
  void getdata()
  {cout<<"enter your rollno"<<endl;
  cin>>rollno;
  cout<<"enter your name"<<endl;
  gets(name);
  }
  void putdata()
  {cout<<" rollno  "<<rollno;
  cout<<" name is  "<<name;
  }
  };
 class admission:public student
 {int admno;
 public:
 void getadmissionno()
 {cout<<"enter admission no"<<endl;;
 cin>>admno;
 getdata();
 }
 void putadmissionno()
 {cout<<"admissionno= "<<admno;
 putdata();
 }
 };
 void main()
 {clrscr();
 admission adm;
 adm.getadmissionno();
 adm.putadmissionno();
 getch();
 }
