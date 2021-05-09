#include "std_lib_facilities.h"

vector<int> gv;  //q1
void gv_init()
{
  for(int i = 0;i<10; ++i)
       gv.push_back(pow(2,i));
  }
  
  void print_vector(vector<int> v)
  {
     for(int i = 0; i<v.size(); ++i)
         cout << v[i] << ' ';
         cout << endl;
   }
   
   int f(vector<int> arg_vec)  //q2
   {
   vector<int> lv(arg_vec.size());   //q3(a)
   lv = gv;    //q3(b)
   print_vector(lv);   //q3(c)
   
   vector<int> lv2;   //q3(d)
   lv2 = arg_vec;   //q3(e)
   print_vector(lv2);
   }
   
 int main()    //q4
 {
   gv_init();
   f(gv);    //q4(a)
   vector<int> vv;  //q4(b)
   vv.push_back(1);
   for(int i = 1; i<10; ++i)
       vv.push_back(vv[i-1] * (i+1));
   f(vv);   //a4(c)
   
   return 0;
   }
