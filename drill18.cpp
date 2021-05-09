#include "std_lib_facilities.h"

const int sz_ga = 10;  //q1
int ga[sz_ga];

void g()
{
  for(int i = 0; i<10; ++i)
  ga[i] = pow(2,i);
}


void print_array(int a[], int sz)
{
    for(int i = 0; i<sz; ++i)
        cout << a[i] << ' ';
       cout << endl;
}


int f(int arg_arr[], int size)  //q2
{
  int la[10];   //q3(a)
  for(int i = 0; i<10; ++i)    //q3(b)
   la[i] = ga[i];
  print_array(la, 10);    //q3(c)
  
  int* p = new int[size];    //q3(d)
  for(int i = 0; i<10; ++i)    //q3(e)
    p[i] = arg_arr[i];
  print_array(p,10);  //q3(f)
  
  delete[] p;   //q3(g)
}
  
  int main()  //q4
  {
  g();
  f(ga,sz_ga);   //q4(a)
  
  int aa[10];  //q4(b)
  aa[0] = 1;
  for(int i = 1; i<10; ++i)
  {
    aa[i] = aa[i-1] * (i+1);
  }
  
  f(aa,10);  //q4(c)
  
  return 0;
  }
