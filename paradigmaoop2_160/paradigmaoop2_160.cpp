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


};
int main()
{
    std::cout << "Hello World!\n";
}
