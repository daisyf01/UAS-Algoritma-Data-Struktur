#include <iostream>
using namespace std;

int main() {
    // Input nomor telepon
    string nomorTelepon;
    cout << "Masukkan nomor telepon: ";
    cin >> nomorTelepon;

    // Input dua integer
    int nilai1, nilai2;
    cout << "Masukkan dua integer: ";
    cin >> nilai1 >> nilai2;

    // Validasi input
    if (nilai1 >= nilai2) {
        cout << "Input tidak valid. Nilai pertama harus lebih kecil dari nilai kedua." << endl;
        return 1; // Keluar dari program dengan status error
    }

    // Hitung jumlah nilai-nilai di antara dua integer
    int jumlah = 0;
    for (int i = nilai1 + 1; i < nilai2; i++) {
        jumlah += i;
    }

    // Tampilkan hasil
    cout << "Jumlah nilai-nilai di antara " << nilai1 << " dan " << nilai2 << " adalah: " << jumlah << endl;

    // Input nama pembuat program
    string namaPembuat;
    cout << "Program by: ";
    cin.ignore(); // Membersihkan newline dari buffer sebelum getline
    getline(cin, namaPembuat);

    // Tampilkan nama pembuat program
    cout << "Program by: " << namaPembuat << endl;

    return 0;
}
