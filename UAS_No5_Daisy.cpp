#include <iostream>
using namespace std;

int main() {
    string nomorTelepon;
    cout << "Masukkan nomor Hp:";
    cin >> nomorTelepon;

    int minimal, maximal;
    cout << "Masukkan nilai minimal: ";
    cin >> minimal;

    cout << "Masukkan nilai maximal: ";
    cin >> maximal;

    if (minimal >= maximal) {
        cout << "Input tidak valid. Pastikan nilai minimal kurang dari nilai maximal." << endl;
        return 1;
    }

    int jumlah = 0;
    for (int i = minimal + 1; i < maximal; i++) {
        jumlah += i;
    }

    cout << "Jumlah nilai-nilai di antara " << minimal << " dan " << maximal << " adalah: " << jumlah << endl;

    string namaPembuat;
    cout << "Program by: ";
    cin.ignore();
    getline(cin, namaPembuat);

    return 0;
}
