#include <climits>
#include <iostream>
using namespace std;

int main() {
  const int Totaldata = 10;
  int data[Totaldata];

  cout << "Masukkan sepuluh data:" << endl;
  for (int i = 0; i < Totaldata; ++i) {
    cout << "Angka Masukkan ke-" << i + 1 << ": ";
    cin >> data[i];
  }

  int total = 0;
  for (int i = 0; i < Totaldata; ++i) {
    total += data[i];
  }
  double nilairatarata = static_cast<double>(total) / Totaldata;

  int yangTerkecil = INT_MAX;
  int yangTerbesar = INT_MIN;
  for (int i = 0; i < Totaldata; ++i) {
    if (data[i] < yangTerkecil) {
      yangTerkecil = data[i];
    }
    if (data[i] > yangTerbesar) {
      yangTerbesar = data[i];
    }
  }

  cout << "Nilai rata-rata: " << nilairatarata << endl;
  cout << "Nilai terkecil: " << yangTerkecil << endl;
  cout << "Nilai terbesar: " << yangTerbesar << endl;

  return 0;
}
