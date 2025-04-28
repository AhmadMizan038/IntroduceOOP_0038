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
    void output_data(){
        cout << "luas persegi panjang: " << luas << endl;
    }
};
int main(){
    persegi_panjang pp;
    pp.input_data();
    pp.hitung_luas();
    pp.output_data();
}
