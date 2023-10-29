#include <iostream>

using namespace std;
double mtocm(double m) { return m * 100; }

double cmtom(double cm) { return cm / 100; }

int main() {
  double panjangPita;
  cout << "Masukkan panjang pita (m): ";
  cin >> panjangPita;
  
  double panjangIkatBunga;
  cout << "Masukkan panjang ikat bunga (cm): ";
  cin >> panjangIkatBunga;

  int jumlahIkatBunga = static_cast<int>(mtocm(panjangPita) / panjangIkatBunga);

  double sisaPita = mtocm(panjangPita) - (jumlahIkatBunga * panjangIkatBunga);

  cout << "Jumlah ikatan bunga rangkai yang dapat dibuat: " << jumlahIkatBunga << endl;
  cout << "Sisa pita yang belum dipakai: " << cmtom(sisaPita) << " meter"
       << endl;

  return 0;
}
