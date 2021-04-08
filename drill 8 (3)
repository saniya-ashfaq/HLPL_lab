//question 3
#include "std_lib_facilities"

namespace X {
int var = 0;
void print()
{cout << var << endl;}
}

namespace Y {
int var = 0;
void print()
{cout << var << endl;}
}

namespace Z {
int var = 0;
void print()
{cout << var << endl;}
}

int main()
{
x::var = 7;
X::print();

using namespace Y;
var = 9;
print();
{
using z::var;
using Z::print;
var = 11;
print(); // this prints Z's variable
}
print(); // this prints Y's variable
X::print(); // this prints X's variable
}
