#include <iostream>

using namespace std;

int main() {
  char pw[9];

  cout << "Masukkan password (maksimal 8 digit): ";
  cin >> pw;

  int length = 0;
  while (pw[length] != '\0') {
    length++;
  }

  if (length != 8) {
    cout << "Password harus memiliki 8 digit." << endl;
  } else {
    bool valid = true;
    for (int i = 0; i < length; ++i) {
      if (!isalnum(pw[i]) || isspace(pw[i])) {
        valid = false;
        cout << "Password hanya boleh terdiri dari huruf dan angka tanpa spasi."
             << endl;
        break;
      }

      for (int j = i + 1; j < length; ++j) {
        if (pw[i] == pw[j]) {
          valid = false;
          cout
              << "Password tidak boleh memiliki huruf atau angka yang berulang."
              << endl;
          break;
        }
      }
    }

    if (valid) {
      cout << "Password yang anda buat: " << pw << endl;
      cout << "Password ter-enkripsi: ";
      for (int i = 0; i < length; ++i) {
        if (isalpha(pw[i])) {
          pw[i] = (pw[i] + 2 - 'a') % 26 + 'a';
        } else if (isdigit(pw[i])) {
          pw[i] = ((pw[i] - '0') * 2) + '0';
        }
        cout << pw[i];
      }
      cout << endl;
    }
  }

  return 0;
}
