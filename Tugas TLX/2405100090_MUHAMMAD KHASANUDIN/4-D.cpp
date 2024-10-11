#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98; // Total jumlah bebek

    // Kondisi if-else untuk mencari kapasitas kandang terbesar yang bisa digunakan
    if (total_bebek % 13 == 0) {
        cout << 13 << endl;
    } else if (total_bebek % 11 == 0) { //dicari yang angkanya paling besar dan hasilnya tidak berkoma
        cout << 11 << endl;
    } else if (total_bebek % 5 == 0) {
        cout << 5 << endl;
    } else if (total_bebek % 3 == 0) {
        cout << 3 << endl;
    } else {
        cout << 1 <<endl;
        
    }

}
