#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double jariJari, tinggi;

    // Input jari-jari dan tinggi silinder
    cout << "Masukkan jari-jari silinder: ";
    cin >> jariJari;

    cout << "Masukkan tinggi silinder: ";
    cin >> tinggi;

    // Menghitung luas permukaan silinder
    double luasPermukaan = 2 * M_PI * jariJari * (jariJari + tinggi);

    // Menampilkan hasil
    cout << "Luas permukaan silinder adalah: " << luasPermukaan << endl;

    return 0;
}
