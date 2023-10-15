#include <iostream>

using namespace std;

void nextTime(int &jam, int &menit, int &detik) {
  detik++;

  if (detik == 60) {
    detik = 0;
    menit++;

    if (menit == 60) {
      menit = 0;
      jam++;

      if (jam == 24) {
        jam = 0;
      }
    }
  }
}

int main() {
  int jam, menit, detik;
  cout << "Masukkan jam (0-23): ";
  cin >> jam;
  cout << "Masukkan menit (0-59): ";
  cin >> menit;
  cout << "Masukkan detik (0-59): ";
  cin >> detik;

  nextTime(jam, menit, detik);

  cout << "Nexttime: " << jam << ":" << menit << ":" << detik << endl;

  return 0;
}
