#include <iostream>

using namespace std;

int main()
{
    int  var1;
   char *var2[10];

   cout << "Address of var1 variable: ";
   cout << &var1 << endl;

   cout << "Address of var2 variable: ";
   cout << &var2 << endl;

   for(int i=0;i<10;i++){
       cout << "Address:  ";
       cout << (var2+i) << endl;

   }
    return 0;
}
