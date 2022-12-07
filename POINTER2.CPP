#include<iostream.h>
#include<conio.h>
int main()
{clrscr();
int *val;
int *rsum,*csum;
int maxr,maxc;
int i,j;
cout<<"enter the dimensions for row and column"<<endl;
cin>>maxr>>maxc;
val= new int[maxr*maxc];
rsum= new int[maxr];
csum= new int[maxc];
for(i=0;i<maxr;i++)
 { cout<<"enter elements for row number "<<i+1<<endl;
   rsum[i]=0;
   for(j=0;j<maxc;j++)
   { cin>>val[i*maxc+j];
     rsum[i]+=val[i*maxc+j];
   }
  }
  for(j=0;j<maxc;j++);
  {
    csum[j]=0;
    for(i=0;i<maxr;i++)
    {
     csum[j]+=val[i *maxc+j];
     cout<<"val= csum[j]= "<<csum[j];
     getch();
    }
  }
 cout<<"for the given array along with rowsum and  columnsum is"<<endl;
 for(i=0;i<maxr;i++)
 {for(j=0;j<maxc;j++)
  {cout<<val[i *maxc+j]<<"\t";
  }
  cout<<rsum[i];
  cout<<endl;
  }

  cout<<endl;
  for(j=0;j<maxc;j++)
  {cout<<csum[j]<<"\t";
  }
  getch();
  return 0;
  }


