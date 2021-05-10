#include "std_lib_facilities.h"


  template<typename Iter1, typename Iter2>    //q6
  Iter2 my_copy(Iter1 f1, Iter1 e1, Iter2 f2)
  {
    while(f1!=e1)
    {
      *f2 = *f1;
      ++f1;
      ++f2;
    }
     return f2;
   }
   
   
   template<typename C> void printout(const C& c)
   {
     for(const auto& x : c)
         cout << x << ' ';
         cout << endl;
      }
      
   int main()
   {
      const int size = 10;        
      
      array<int, size> a;         //q1
      for(int i = 0; i < size; ++i)
       a[i] = i;
      cout << "Array:" << endl;
      printout(a);
      
     
     vector<int> v;     //q2
     for(int i = 0; i < size; ++i)
     v.push_back(i);
    cout << "Vector:" << endl;
    printout(v);
    
    list<int> l;      //q3
    for(int i = 0; i < size; ++i)
    l.push_back(i);
   cout << "List:" << endl;
   printout(1);
   
   cout << "\nquestion4" << endl;    //q4
   
   array<int, size> a2 = a;
   cout << "array copy:" << endl;
   printout(a2);
   
   vector<int> v2 = v;
   cout << "vector copy:" << endl;
   printout(v2);
   
   list<int> l2 = l;
   cout << "list copy:" << endl;
   printout(l2);
   
   cout << "\nquestion5" << endl;    //q5
   
   for(array<int, size>::iterator p = a.begin(); p!=a.end(); ++p)
      *p += 2;
   cout << "array(+2):" << endl;
   printout(a);
   
   for(vector<int>::iterator p = v.begin(); p!=v.end(); ++p)
      *p += 3;
      cout << "vector(+3):" << endl;
      printout(v);
      
   for(list<int>::iterator p = l.begin(); p!=l.end(); ++p)
      *p +=5;
     cout << "list(+5):" << endl;
     printout(l);
     
      
     cout << "\nquestion7" << endl;     //q7
     
     vector<int>::iterator v_it = my_copy(a.begin(), a.end(), v.begin());
     cout << "vector is copied from array:" << endl;
     printout(v);
     
     array<int, size>::iterator a_it = copy(l.begin(),l.end(),a.begin());
     cout << "array copied from list:" << endl;
     printout(a);
     
   cout << "\nquestion8" << endl;   //q8
   
   v_it = find(v.begin(), v.end(), 3);
   if(v_it !=v.end())
     cout << " the vector contains value 3 and the index is " << v_it-v.begin() << endl;
     else
     cout << "the value 3 was not found in the vector" << endl;
     
    list<int>::iterator l_it = find(l.begin(), l.end(), 27);
    if(l_it != l.end())
    {
     int index = 0;
     for(list<int>::iterator p = l.begin(); p!= l_it; ++p)
     ++index;
    cout << "list contains the value 27 and the position is" << index << endl;
   }
   else
     cout << "27 was not found in the list" << endl;
     
     return 0;
     }
    
