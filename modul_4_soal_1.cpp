#include <iostream>

using namespace std;
int main();
string toRoman(int num) {
  if (num <= 0 || num > 3999) {
    return "Nilai tidak valid";
  }

  string result = "";
  string roman[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                    "XL", "X",  "IX", "V",  "IV", "I"};
  int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

  for (int i = 0; i < 13; ++i) {
    while (num >= values[i]) {
      result += roman[i];
      num -= values[i];
    }
  }

  return result;
}

int main() {
  int angkaArab;
  cout << "Masukkan angka untuk di konversikan: ";
  cin >> angkaArab;

  cout << "Angka Romawi: " << toRoman(angkaArab) << endl;

  return 0;
}
