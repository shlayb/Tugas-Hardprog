#include <iostream>
using namespace std;

struct Barang{
  string nama_barang;
  int total_barang;
  float harga_barang;
  float total_harga_barang;
};

int main(){
  int total_barang, i = 0;
  string nama_barang;
  bool isRun = true;
  Barang barang[100];
  system("cls");
  cout << "== SELAMAT DATANG DI HANUM MART ==" << endl;
  // menambahkan barang belanjaan
  while(isRun){
    cout << "Masukan Nama Barang :\t"; cin >> barang[i].nama_barang;
    cout << "Masukan Total Barang :\t"; cin >> barang[i].total_barang;
    cout << "Masukan Harga Barang :\t"; cin >> barang[i].harga_barang;
    barang[i].total_harga_barang = barang[i].total_barang * barang[i].harga_barang;
    cout << "Total Harga Barang :\t" << barang[i].total_harga_barang << endl;
    cout << "Apakah lanjut? (y/n) "; char lanjut; cin >> lanjut;
    if(lanjut == 'n'){
      isRun = false;
      break;
    }else{
      i++;
    }
    system("cls");
  }
  system("cls");

  // Menampilkan barang belanjaan degan tabel
  cout << "== BARANG BELANJAAN ==" << endl;
  cout << "Barang\t| Total\t| Satuan| Total" << endl;
  for(int j = 0; j <= i; j++){
    cout << barang[j].nama_barang << "\t| " << barang[j].total_barang << "\t| " << barang[j].harga_barang << "\t| " << barang[j].total_harga_barang << endl;
  }

  // Melakukan pembayaran
  cout << "== PEMBAYARAN ==" << endl;
  float total_pembayaran = 0;
  for(int j = 0; j <= i; j++){
    total_pembayaran += barang[j].total_harga_barang;
  }
  cout << "Total Pembayaran : " << total_pembayaran << endl;
  cout << "Masukan Pembayaran : "; float pembayaran; cin >> pembayaran;
  cout << "Kembalian : " << pembayaran - total_pembayaran << endl;
  return 0;
}