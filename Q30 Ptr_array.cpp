// program to implement  an array of  pointers 
#include <iostream.h>
 #include <conio.h>

const int MAX = 3;
 
int main ( )
{
clrscr( );
   int  var[MAX] = {10, 100, 200};
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++)
   {
      ptr[i] = &var[i]; // assign the address of integer.
   }
   for (int i = 0; i < MAX; i++)
   {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }
getch( );
   return 0;
}