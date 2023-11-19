#include <iostream>
#include <string>

using namespace std;
int main() {
    
    string namaKaryawan;
    cout << "Masukkan nama karyawan: ";
    getline(std::cin, namaKaryawan);

    int tipeRumah;
    cout << "Masukkan tipe rumah (45, 54, atau 70): ";
    cin >> tipeRumah;

    int jumlahTerjual;
    cout << "Masukkan jumlah rumah yang terjual: ";
    cin >> jumlahTerjual;

    double bonus = 0.0;

    if (jumlahTerjual > 5) {
        if (tipeRumah == 45) {
            bonus = 500000.0;
        } else if (tipeRumah == 54) {
            bonus = 1000000.0;
        } else if (tipeRumah == 70) {
            bonus = 1250000.0;
        } else {
            cout << "Tipe rumah tidak valid" << endl;
            return -1; 
        }
    } else if (jumlahTerjual >= 1) {
        if (tipeRumah == 45) {
            bonus = 250000.0;
        } else if (tipeRumah == 54) {
            bonus = 500000.0;
        } else if (tipeRumah == 70) {
            bonus = 1000000.0;
        } else {
            cout << "Tipe rumah tidak valid" << endl;
            return -1;
        }
    }
    cout << "Karyawan " << namaKaryawan << " mendapatkan bonus sebesar Rp." << bonus << endl;

    return 0;
}
