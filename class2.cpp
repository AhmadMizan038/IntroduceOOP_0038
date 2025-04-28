#include <iostream>
using namespace std;

class persegi_panjang
{
    private:
    int panjang;
    int lebar;
    int luas;

    public:
    void input_data(){
        cout << "masukkan panjang: ";
        cin >> panjang;
        cout << "masukkan lebar: ";
        cin >> lebar;
    }
    void output_data(){
        cout << "tampilkan luas = " << luas << endl;
    }
    void hitung_luas(){
        luas = panjang * lebar;
    }
    