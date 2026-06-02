#include <iostream>
using namespace std;

int main()
{

   try
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        // throw 0.5; //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan ditampilkan" << endl;
    }
    // kondisi jika throw yang bertipe data integer
    catch (int a)
    {
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    // kondisi jika throw bertipe data selain integer
    catch (...)
            cout
        << "default pengecualian diekseskusi" << endl;
return 0;
}