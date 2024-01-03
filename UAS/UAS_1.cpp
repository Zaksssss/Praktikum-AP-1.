#include <iostream>

using namespace std;

int main() {
  char pw[9];

  cout << "Enter password (maximum 8 digits): ";
  cin >> pw;

  int length = 0;
  while (pw[length] != '\0') {
    length++;
  }

  if (length != 8) {
    cout << "Password must have 8 digits." << endl;
  } else {
    bool valid = true;
    for (int i = 0; i < length; ++i) {
      if (!isalnum(pw[i]) || isspace(pw[i])) {
        valid = false;
        cout << "Passwords may only consist of letters and numbers without spaces."
             << endl;
        break;
      }

      for (int j = i + 1; j < length; ++j) {
        if (pw[i] == pw[j]) {
          valid = false;
          cout
              << "The password must not have repeated letters or numbers."
              << endl;
          break;
        }
      }
    }

    if (valid) {
      cout << "password that has been created: " << pw << endl;
      cout << "The password has been encrypted: ";
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