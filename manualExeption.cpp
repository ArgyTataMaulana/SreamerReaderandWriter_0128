#include <iostream>
using namespace std;

int main() {
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // menampilkan sebuah integer maka
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }
    catch(int a)
    {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch(...) {
        /* Jika selain integer maka block ini akan dieksekusi*/
        cout << "default Pengecualian dieeksekusi" << endl;
    }
    return 0;
}