#include <iostream>

using namespace std;
int main()
{
  int i, j;
  int n = 8; //n = jumlah baris yang di inginkan 
  for (i = n; i >= 1; i--)
    {
      for (j = 1; j <= i; j++)
        {
          cout<< "*";
        }
      cout << "\n";
    }
  return 0;
}