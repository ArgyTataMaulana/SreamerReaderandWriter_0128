#include <iostream>
#include <exception>
// untuk obyek exception yang akan digunakan 
#include <array>
//untuk obyrk arrayyang akan kita gunakan
using namespace std;

int main() {
    cout << "Awal Program" << endl; // penanda i....
    try
    {
        array<int, 3> data = {10, 20, 30 };
        // pesan array integer 3 element
        cout << data.at(5)<< endl;
    }
    catch(exception& e)
    {
        // penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki tiga elemen*/
    }
}