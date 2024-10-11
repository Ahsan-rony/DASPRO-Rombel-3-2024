/*isi soalnya disini
Soal
Di sebelah kanan, terdapat fungsi tukar(), yang seharusnya menukar kedua variabel argumennya. Namun, fungsi tersebut tidak bekerja sebagaimana mestinya. Perbaikilah fungsi tersebut!
Lalu, tekan tombol Submit di sebelah bawah untuk menjalankan program tersebut. Setelah dijalankan, keluarannya akan tercetak di bawah.
*/

//kodenya dibawah sini
#include <iostream>
using namespace std;

// Fungsi tukar() digunakan untuk menukar nilai dua variabel
void tukar(int& a, int& b) {  // Menggunakan referensi
    // Menyimpan nilai a ke variabel sementara untuk menghindari kehilangan nilai
    int temp = a;   
    // Mengubah nilai a menjadi nilai b
    a = b;          
    // Mengubah nilai b menjadi nilai a (yang disimpan di temp)
    b = temp;      
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    // Deklarasi variabel p, q, dan r dengan nilai awal
    int p = 10, q = 20, r = 30;
    // Mencetak nilai awal variabel p, q, dan r
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    // Memanggil fungsi tukar() untuk menukar nilai p dan q
    tukar(p, q);
    // Mencetak nilai variabel p, q, dan r setelah pertukaran pertama
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    // Memanggil fungsi tukar() untuk menukar nilai q dan r
    tukar(q, r);
    // Mencetak nilai variabel p, q, dan r setelah pertukaran kedua
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;
}
