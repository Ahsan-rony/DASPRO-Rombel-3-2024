/*Soal
Pak Dengklek membeli kandang bebek baru, yang dilengkapi dengan fitur kata sandi. Pak Dengklek ingin mengganti kata sandinya setiap bulan, dengan strategi berikut:

Pada bulan pertama, kata sandinya 
174
174.
Untuk bulan kedua dan seterusnya, kata sandinya adalah kata sandi pada bulan sebelumnya, dikali 
23
23.
Buatlah program yang mencetak sandi Pak Dengklek pada bulan pertama, kedua, dan ketiga!
*/

#include <iostream>
using namespace std;

int main() {
    // kata sandi bulan pertama
    int sandi = 174;
    cout << sandi << endl;

    // kata sandi bulan kedua
    sandi = sandi * 23;
    cout << sandi << endl;

    // kata sandi bulan ketiga
    sandi = sandi * 23;
    cout << sandi << endl;
}

=========================
/* Materi 
Kita bisa mulai dengan mendefinisikan sebuah variabel sandi. Mulanya, nilainya adalah kata sandi pada bulan pertama.
Lalu, kita perbarui nilainya untuk bulan-bulan berikutnya.
Untuk memperbarui nilai yang tersimpan pada suatu variabel, kita bisa menggunakan operator assignment (=), dengan sintaks berikut:

variabel = ekspresi;
(Perhatikan bahwa kita tidak perlu lagi menuliskan tipe data variabelnya.)

Sebagai contoh, misalnya nilai variabel sandi sekarang adalah 174. Lalu, kita perbarui nilainya dengan:

sandi = sandi * 23;
Apa yang akan terjadi? Akan lebih mudah memahaminya apabila kita membacanya dari kanan ke kiri:

Hitung hasil dari ekspresi sandi * 23, yakni 
174×23 = 4002.
Simpan nilai 4002 ke dalam variabel sandi.
Maka, variabel sandi sekarang bernilai 4002.
*/
