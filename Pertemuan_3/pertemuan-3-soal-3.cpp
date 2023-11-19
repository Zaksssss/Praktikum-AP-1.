#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double op1, op2;
  char opr;

  cout << "Masukkan bilangan: ";
  cin >> op1 >> opr >> op2;

  double hasil;

  if (opr == '+') {
    hasil = op1 + op2;
  } else if (opr == '-') {
    hasil = op1 - op2;
  } else if (opr == '*') {
    hasil = op1 * op2;
  } else if (opr == '/') {
    if (op2 != 0) {
      hasil = op1 / op2;
    } else {
      cout << "Error: Pembagian dengan nol tidak diizinkan." << endl;
      return 1;
    }
  } else {
    cout << "Error: Operator tidak valid." << endl;
    return 1;
  }
  cout << "Hasil: " << hasil << endl;

  return 0;
}