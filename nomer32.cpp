#include <iostream>
using namespace std;

struct mahasiswa{
    string nama_depan;
    string nama_belakang;
    string niu;
    int usia;
};

int main(){
  mahasiswa mhs;
  cout << "Masukkan nama depan: ";
  cin >> mhs.nama_depan;
  cout << "Masukkan nama belakang: ";
  cin >> mhs.nama_belakang;
  cout << "Masukkan NIU: ";
  cin >> mhs.niu;
  cout << "Masukkan usia: ";
  cin >> mhs.usia;

  cout <<  mhs.nama_depan << " " << mhs.nama_belakang;
  cout << " " << mhs.niu;
  cout << " " << mhs.usia << endl;
  return 0;
}