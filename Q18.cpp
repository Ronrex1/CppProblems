//Consider the following class declaration then write c++ function for following file operations viz create_file, read_file, //add new records, modify record, delete a record, search for a record.

#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class student

{
 public:

int rno;
char name[30];
int age;

void input( )
{
cout<<"\n enter roll no";
cin>>rno;
cout<<"\n enter name ";
gets(name);
cout<<"\n enter age";
cin>>age;
}
void output()
{
cout<< "\n roll no:"<<rno;
cout<< "\n name :"<<name;
cout<< "\n age:"<<age;
}
int getrno()
{ return rno;}
};
void create_file( )
{
ofstream fout;
char ch='y';
fout.open("student.dat", ios::app | ios:: binary);

student s;
if(!fout)
{cout<<"File can't be opened";

}
do
{
s.input();
fout. write((char *)&s, sizeof(s));
cout<<"\n more record y/n";
cin>>ch;
}while(ch=='y'||ch=='Y');
fout.close();
}

void read_file( )
{
ifstream fin;
student s;
fin.open("student.dat",ios::in | ios:: binary);
fin.read((char *) &s,sizeof(student));
while(fin)
{
s.output();
cout<< "\n";
fin.read((char *) & s,sizeof(student));
}
fin.close();
}
void modify_record( )
{	student s;
	fstream file;
	file.open("student.dat",ios::in|ios::out|ios::binary);
	int r,pos=-1;
cout<<"\n enter the rollo no of student whom data to be modified";
cin>>r;
cout<<r;
while(file.read((char*)&s,sizeof(s)))
{
cout<<s.getrno();
if(s.getrno()==r)
{
 cout<<"\n record is ";
s.output( );
pos =file.tellg()-sizeof(s);
}
file.read((char *)&s,sizeof(s));
}
if(pos>(-1))
{
cout<< "\n enter new record";
s.input( );
file.seekp(pos,ios::beg);
file.write((char *)&s,sizeof(s));
cout<< "\n record modified successfully";
}

else
cout<< "\n record not exist";
}



void delete_record( )
{
fstream file("student.dat", ios::in|ios::binary);
fstream newfile("newstu.dat",ios::out|ios::binary);
student s; int r;
cout<<"\n enter the rollno no of student whom record to be deleted";
cin>>r;
file.read((char *)&s,sizeof(s));
while(file)
{
if (r!=s.getrno())
{
newfile.write((char *)&s,sizeof(s));
}
file.read((char *)&s,sizeof(s));
} file.close( ); newfile.close( );
remove("student.dat");
rename( "newstu.dat", "student.dat");
}
void search_record( )
{
student s;
fstream file; file.open("student.dat",ios::in|ios::binary);
int r,flag=-1;
cout<<"\n enter the rollo no of student whom record to be searched";
cin>>r;
file.read((char *)&s,sizeof(s));
while(file)
{
if (r==s.getrno())
{
cout<<"\n record is ";
s.output();
flag=1;
break;
}
file.read((char *)&s,sizeof(s));
}
if(flag==1)
cout<< "\n search successfull";
else
cout<< "\n search unsuccessfull";
file.close();
}
 void main( )
 { clrscr( );
 int c;
 char t='y';
 do{
 cout<<"1. ADD \n";
 cout<<"2. Display\n";
 cout<<"3. MODIFY\n";
 cout<<"4. SEARCH\n";
 cout<<"5. DELETE\n";
 cout<<"Enter u r choice\n";
 cin>>c;
 switch (c)
 {
 case 1:create_file(); break;
 case 2:read_file(); break;
 case 3: modify_record(); break;
 case 4: search_record(); break;
 case 5: delete_record();break;
 default: cout<<"Enter Again\n";
  }
 cout<<"Enter YES/NO\n";
 cin>>t;
 }while(t=='y'||t=='Y');
 }










