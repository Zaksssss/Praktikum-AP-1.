#include <iostream>

//note: script ini kalau di eksekusi di replit ngga bisa tapi sudah saya coba di gpt dengan mengetikkan "tampilkan hasil dari script ini "

using namespace std;
int main() {
  int z, m;
  int n = 7; // n = jumlah baris yang di inginkan
  for (z = 0; z < n; z++) {
    for (m = 0; m < (2 * n); m++) {
      if (z + m <= n - 1)
        cout << "*";
      else
        cout << " ";
      if ((z + n) <= m)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
    for (z = 0; z < n; z++) {
      for (m = 0; m < (2 * n); m++)

        if (z >= m)
          cout << "*";
        else
          cout << " ";
      if (z >= (2 * n - 1) - m)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
  return 0;
}