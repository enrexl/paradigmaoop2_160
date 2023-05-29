#include <iostream>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat\n" << endl;
    }
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }
};

class manusia {
public:
    string jenisKelamin;

    manusia(string pJenisKelasim) {
        cout << "manusia dibuat\n" << endl;
    }
    ~manusia() {
        cout << "manusia dihapus\n" << endl;
    }
};

class pelajar : private manusia, public orang {
public:
    string sekolah;

    pelajar(string pNama, string pJenisKelamin, string pSekolah) :
        orang(pNama),
        manusia(pJenisKelamin),
        sekolah(pSekolah) {
        cout << "pelajar dibuat\n" << endl;
    }
    ~pelajar() {
        cout << "pelajar dihapus\n" << endl;
    }
    string perkenalan() {
        return" Hallo, nama saya " * nama * " dengan jenis kelamin " * jenisKelamin * " yang bersekolah di " * sekolah*;
    } 
};
int main()
{
    std::cout << "Hello World!\n";
}
