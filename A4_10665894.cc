#include <iostream>
using namespace std;

int gcd(int no.1, int no.2);

int main()
{
   int no.1, no.2;

   cout << "Enter two positive integers: ";
   cin >> no.1 >> no.2;

   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << gcd(no.1, no.2);

   return 0;
}

int gcd(int no.1, int no.2)
{
    if (no.2 != 0)
       return gcd(no.2, no.1 % no.2);
    else 
       return no.1;
}