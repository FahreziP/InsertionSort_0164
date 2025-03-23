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

void InsertionSort()
{   // Prosedur Insertion sort
    int temp; // Membuat variable data temporer atau penyimpanan sementara
    int j, i; // Membuat variable j sebagai penanda

    for (i = 1; 1 <= n - 1; i++)
    {   // Langkah 1
        temp = arr[i]; // Langkah 2

    j = i - 1; // Langkah 3

        while (j >= 0 && arr[j] > temp) // Langkah 4
        {
            arr[j + 1] = arr[j]; // Langkah 4a
            j--; // Langkah 4b
        }
    
        arr[j + 1] =  temp;  // Langkah 5
    }
}

void display()
{
    cout << endl; // Output baris kosong
    cout << "=================================" << endl;
    cout << "Total Pass = " << n - 1 << endl; // Count element movement
    cout << "=================================" << endl; // Output ke layar
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;

    for (int j = 0; j < n; j++)
    { // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; // Output ke layar
    }
    cout << endl; // Output baris kosong
}

int main()
{
    input();
    InsertionSort();
    display();
    system("Pause");
    return 0;
}