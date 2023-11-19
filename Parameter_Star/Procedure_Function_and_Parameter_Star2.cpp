#include <iostream>

using namespace std;
int main()
{
  int i, j, s;
  int n = 5; //n = jumlah baris yang di inginkan 
  for (i = n; i >= 1; i--)
    {
      for (s = i; s < n; s++)
        cout << " ";
      for (j = 1; j <= i; j++)
        {
          cout<< "* ";
        }
      cout << "\n";
    }
  return 0;
}