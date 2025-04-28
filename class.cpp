#include <iostream>
using namespace std;

class Mobil
{
public:
    string nama_mobil;
    string tipe_mobil;

    private:
    int harga_mobil;

public:
    void input_data(){
        cout << "masukkan nama mobil: ";
        cin >> nama_mobil;
        cout << "masukkan tipe mobil: ";
        cin >> tipe_mobil;
        cout << "masukkan harga mobil: ";
        cin >> harga_mobil;
    }
    void output_data(){
        cout << "harga mobil = " << harga_mobil << endl;
    }
};
int main()
{
    Mobil TOYOTA;
    TOYOTA.input_data();
    cout << "nama mobil = " << TOYOTA.nama_mobil << endl;
    cout << "tipe mobil = " << TOYOTA.tipe_mobil << endl;

    TOYOTA.output_data();
}
