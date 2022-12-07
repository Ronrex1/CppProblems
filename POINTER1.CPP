#include<iostream.h>
#include<conio.h>
int *rollno;
int *marks;
int main()
{int size;
cout<<"how many elements are there in the array"<<endl;
cin>>size;
rollno=new int(size);
marks=new float(size);
if(!rollno||!marks)
{cout<<"out of memory"<<endl;
return(1);
}
for(int i=0;i<size;i++)
 {cout<<"enter rollno and marks for student "<<i+1<<endl;
cin>>rollno[i]>>marks[i];
 }
for(i=0;i<size;i++)
{cout<<rollno[i]<<"\t"<<marks[i]<<endl;
}
delete[] rollno;
delete[] marks;
getch();
return (0);
}




