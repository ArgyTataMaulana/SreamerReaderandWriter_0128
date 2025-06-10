#include <iostream>
#include <fstream>
#include <string>
using namespace std;;

int main() {
    string baris;
    string NamaFile;
    cout << "Masukkan Nama File : ";
    cin >> NamaFile;
    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">- Menulis file, \'q\' untuk Keluar" << endl;
    // unlimited loop untuk menulis
    while (true)
    {
        /* code */
        cout << "- ";
        // mendapatkan sekian karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhentijika user memasukkan karakter q
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // membuka file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file
    infile.open(NamaFile, ios::in);
    cout << endl << ">- Membuka dan membaca file " << endl;
    // jika file ada maka 
    if(infile.is_open())
    {
        // Melakukkan perulangan setiap baris
        while (getline(infile, baris))
        {
            /* code */
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();        
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}