#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string baris;
    // membaca file dalam mode menulis.
    ofstream outfile;
    // menunjuk kesebuah nama file
    outfile.open("contohfile.txt");
    cout << " Menulis file. \'q\' untuk keluar." << endl;
    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // menulis dan memasukkan nilai dari baris ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
    // memnunjuk ke sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">- Membuka dan membaca file " << endl;
}