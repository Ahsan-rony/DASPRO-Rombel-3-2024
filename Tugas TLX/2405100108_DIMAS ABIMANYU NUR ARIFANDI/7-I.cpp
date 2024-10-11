/*isi soalnya disini
Soal
Apakah keluaran dari program berikut?
Lalu, tekan tombol Submit di sebelah bawah untuk menjalankan program tersebut. Setelah dijalankan, keluarannya akan tercetak di bawah.
*/

//kodenya dibawah sini
#include <iostream>
using namespace std;

// Fungsi kali_dua() menerima argumen n dan melakukan operasi perkalian dengan 2
void kali_dua(int n) {
    // Operasi perkalian dengan 2
    n *= 2;
    // Perlu diingat bahwa fungsi ini tidak mengembalikan nilai apapun (void) 
    // dan tidak memodifikasi variabel asli a di program utama
}

int main() {
    int a = 10; // Deklarasi variabel a dengan nilai awal 10
    
    // Memanggil fungsi kali_dua() dan melewatkan variabel a sebagai argumen
    kali_dua(a);
    
    // Mencetak nilai variabel a
    cout << a << endl;
    
    // Karena fungsi kali_dua() tidak memodifikasi variabel asli a, 
    // maka nilai a yang dicetak masih sama dengan nilai awal, yaitu 10
    
    return 0;
}
