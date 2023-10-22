#include <iostream>

using namespace std;
int main() {
  const int baris = 26;
  const int kolom = 26;
  char mulaiChar = 'A';

  for (int i = 0; i < baris; ++i) {
    for (int j = i; j < kolom; ++j) {
      cout << static_cast<char>(mulaiChar + j) << " ";
    }
    cout << endl;
  }

  return 0;
}
