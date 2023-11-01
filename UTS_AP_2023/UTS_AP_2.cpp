#include <iomanip>
#include <iostream>

using namespace std;
int main() {
  double dollar_anto;
  cout << "Masukkan jumlah dolar yang di miliki : ";
  cin >> dollar_anto;
  double euro_anto;
  cout << "Masukkan jumlah euro yang di miliki : ";
  cin >> euro_anto;
  double kurs_Dollar = 15000.0;
  double kurs_Euro_To_Dollar = 0.997;
  double harga_Mobil = 425000000.0;
  double tabunganDollarToIDR = dollar_anto * kurs_Dollar;
  double tabunganEuroToUSDollar = euro_anto * kurs_Euro_To_Dollar;
  double tabunganEuroToIDR = tabunganEuroToUSDollar * kurs_Dollar;
  double totalTabunganIDR = tabunganDollarToIDR + tabunganEuroToIDR;
  double sisaUangIDR = totalTabunganIDR - harga_Mobil;
  cout << fixed << setprecision(0);
  cout << "Dana Pak Anto setelah konversi ke Rupiah: Rp." << totalTabunganIDR
       << endl;
  cout << "Sisa uang Pak Anto setelah membeli mobil: Rp." << sisaUangIDR
       << endl;
  if (sisaUangIDR < 0)
    cout << "Pak Anto tidak dapat membeli mobil" << endl;

  return 0;
}
