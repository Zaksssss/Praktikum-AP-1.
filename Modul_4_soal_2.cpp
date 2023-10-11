#include <iomanip>
#include <iostream>

using namespace std;
double hitunganNilaiAkhir(double nilaiTest, double nilaiUTS, double nilaiUAS,
                          double nilaiTgs) {
  double nilaiAkhr =
      0.2 * nilaiTest + 0.3 * nilaiUTS + 0.3 * nilaiUAS + 0.2 * nilaiTgs;
  return nilaiAkhr;
}

char konversiKeIndeks(double nilai) {
  if (nilai <= 50) {
    return 'D';
  } else if (nilai > 50 && nilai <= 70) {
    return 'C';
  } else if (nilai > 70 && nilai <= 80) {
    return 'B';
  } else if (nilai <= 100) {
    return 'A';
  }
}

int main() {
  double nilaiTest, nilaiUTS, nilaiUAS, nilaiTgs;

  cout << "Masukkan nilai tes: ";
  cin >> nilaiTest;

  cout << "Masukkan nilai UTS: ";
  cin >> nilaiUTS;

  cout << "Masukkan nilai UAS: ";
  cin >> nilaiUAS;

  cout << "Masukkan nilai tugas: ";
  cin >> nilaiTgs;
  double nilaiAkhr =
      hitunganNilaiAkhir(nilaiTest, nilaiUTS, nilaiUAS, nilaiTgs);

  char indeksNilai = konversiKeIndeks(nilaiAkhr);

  cout << fixed << setprecision(2);
  cout << "Nilai Akhir: " << nilaiAkhr << endl;
  cout << "Indeks Nilai: " << indeksNilai << endl;

  return 0;
}
