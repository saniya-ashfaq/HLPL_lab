#include "std_lib_facilities.h"

using namespace std;

//q4 ( prints out values of a (10 elements) to os)
 print_array10(ostream& os, int* a){
   for(int i = 10; i<10; ++i)
   os << a[i] << ' ';
   os << endl;
}


//q7(to print out values of a (n elements) to os)
ostream& print_array(ostream& os, int* a, int n) 
{
    for(int i=0; i < n; ++i)
    os << a[i] << '\n';
    return os;
}


//q10 (using vector)
ostream& print_vector(ostream& os, vector<int>& v)
{

     for(int vv : v) 
     os << vv << '\n';
     return os;
}

int main()
try //(q1)
{
  int* a = new int[10];
  for(int i = 0; i<10; ++i)
  a[i]=i;
 cout << "question2" << endl;
 for(int i=0; i<10; ++i)//(q2)
  cout << a[i] << ' ';
  cout << endl;
  delete[] a; //deallocate array (q3)
  
  
 cout << "\nquestion5" << endl; //(q5)
 int* b = new int[10];
 for(int i = 0; i<10; ++i)
     a[i] = 100 + i;
 print_array10(cout, b);
 delete[] b;
 
 
 cout << "\nquestion6" << endl; //(q6)
 int* c = new int[11];
 for(int i = 0;i<11; ++i)
     a[i] =100 + i;
 print_array(cout, c, 11);
 delete[] c;
 
 
 cout << "\nquestion8" << endl; //(q8)
 int* d = new int[20];
 for(int i = 0; i<20; ++i)
    a[i] = 100 + i;
 print_array(cout, d, 20);
 delete[] d;
 
 cout << "\nquestion10" << endl; //q10
 vector<int> v5;
 for(int i = 0; i<10; ++i)
 {
     v5.push_back(100 + i);
 };
 print_vector(cout, v5);
 cout << endl;
 
 vector<int> v8;
 for(int i = 0; i<20; ++i)
 {
    v8.push_back(100 + i);
 };
 print_vector(cout, v8);
 cout << endl;
 
 vector<int> v6;
 for(int i = 0; i<11; ++i)
 {
   v6.push_back(100 + i);
 };
 print_vector(cout, v6);
 cout << endl;
 
 
 //part 2 of drill17
 cout << "\nSecond Part" << endl;
 int s1 = 7; //q1
 int* p1 = &s1;
 
 cout << "\nquestion2" << endl; //q2
 cout << "p1:" << p1 << endl;
 cout << "*p1" << *p1 << endl;
 
 int* p2 = new int[7]; //q3
 for(int i = 0; i<7; ++i)
     p2[i] = pow(2,i);
     
 cout << "\nquestion4" << endl; //q4
 print_array(cout, p2, 7);
 
 int* p3 = p2; //q5
 p2 = p1;  //q6
 p2 = p3;  //q7
 
 cout << "\nquestion8" << endl;  //q8
 cout << "p1:" << p1 << endl;
 cout << "p2:" << p2 << endl;
 cout << "*p1:" << *p1 << endl;
 cout << "*p2:" << *p2 << endl;
 
 delete[] p2;  //q9
 
 p1 = new int[10];     //q10
 for(int i = 0; i<10; ++i)
 {
   p1[i] = pow(2,i);
 };
 
 p2 = new int[10];  //q11
 
 cout << "\nquestion12" << endl;   //q12
 for(int i = 0; i<10; ++i)
    p2[i] = p1[i];
  print_array(cout, p2, 10);
  
 cout << "\nquestion13" << endl;    //q13
 vector<int> vec1;
 for(int i = 0; i<10; ++i)
     vec1.push_back(pow(2,i));
 vector<int> vec2;
 for(int i = 0; i<vec1.size();++i)
     vec2.push_back(vec1[i]);
   print_vector(cout,vec2);
   
       return 0;
   }
   
   catch(exception& e)
   {
     cerr << e.what() << endl;
   } 
     
 

