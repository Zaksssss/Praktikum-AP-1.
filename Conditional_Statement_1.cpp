#include <ctime>
#include <iostream>

using namespace std;

bool isKabisat(int thn) {
  return (thn % 4 == 0 && thn % 100 != 0) || (thn % 400 == 0);
}

void tambahHari(int &hari, int &bln, int &thn, int yangDitambahkan) {
  const int jumlahHariPerBulan[] = {
      0, 31, 28 + isKabisat(thn), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  while (yangDitambahkan > 0) {
    int hariDalamBulanIni = jumlahHariPerBulan[bln] - hari + 1;

    if (yangDitambahkan >= hariDalamBulanIni) {
      yangDitambahkan -= hariDalamBulanIni;
      hari = 1;
      bln++;
      if (bln > 12) {
        bln = 1;
        thn++;
      }
    } else {
      hari += yangDitambahkan;
      yangDitambahkan = 0;
    }
  }
}
int main() {
  int hari, bulan, thn, hariDitambahkan;
  char pertanyaan;

  cout << "Masukkan tanggal (1-31): ";
  cin >> hari;

  cout << "Masukkan bulan (1-12): ";
  cin >> bulan;

  cout << "Masukkan tahun (contoh: 2023): ";
  cin >> thn;

  cout << "Apakah ingin menambahkan hari? (y/n): ";
  cin >> pertanyaan;

  if (pertanyaan == 'y') {
    cout << "Masukkan jumlah hari yang ingin ditambahkan: ";
    cin >> hariDitambahkan;
    tambahHari(hari, bulan, thn, hariDitambahkan);
    cout << "Jumlah hari yang anda tambahkan adalah " << hariDitambahkan
         << ", jadi hasilnya adalah " << hari << "/" << bulan << "/" << thn
         << endl;
  } else if (pertanyaan == 'n') {
    cout << "Tanggal yang anda masukkan adalah " << hari << "/" << bulan << "/"
         << thn << endl;
  } else if (hari && bulan && thn < 0 || bulan <= 1 || bulan >= 12) {
    cout << "Tanggal, bulan, atau tahun tidak valid." << endl;
  }
  return 0;
}
