#include <iostream>

using namespace std;
int faktorial(int n) {
  if (n == 0.0 || n == 1.0) {
    return 1;
  } else {
    return n * faktorial(n - 1);
  }
}

int main() {
  int n;

  cout << "Masukkan nilai n yang di inginkan: ";
  cin >> n;

  if (n < 0) {
    cout << "Faktorial tidak didefinisikan untuk nilai negatif." << endl;
  } else {
    cout << "Faktorial dari " << n << " adalah: " << faktorial(n) << endl;
  }

  return 0;
}
