#include <bits/stdc++.h>
using namespace std;

int main()

{
   char choice;
   int num, pos = 0, neg = 0, zero = 0;
   for (int i = 1; i >= 0; i++)
   {
      cout << "enumter numumber";
      cin >> num;
      if (num > 0)
      {
         pos++;
      }
      else if (num < 0)
      {
         neg++;
      }
      else
      {
         zero++;
      }
      cout << "if you wnumat to prinumt more numumber (y/n)";
      cin >> choice;
      if (choice == 'N' || choice == 'n')

      {

         break;
      }
   }
   cout << "positive number" << pos << '\n'
        << "negattive number=" << neg << '\n'
        << "number zero number" << zero;
   return 0;
}