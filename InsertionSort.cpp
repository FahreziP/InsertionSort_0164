#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Prosedur Input
    while (true)
    {
        cout << "Masukkan Jumlah data pada Array : "; // Membuat Inputan Jumlah element Array
        cin >> n; // Memanggil Variable inputan n

        if (n <= 20)
        {
        break;
        }
        else
        {
        cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl; // Membuat jarak per baris program
    cout << "======================" << endl; // Tampilan untuk susunan data element Array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) // Menggunakan perulangan atau menginputkan nilai data n
    {
    cout << "Data ke-" << (i + 1) << ": "; // Memasukkan atau Meninputkan nilai data n
    cin >> arr[i]; // Menyimpan nilai data n kedalam Array arr
    }
}