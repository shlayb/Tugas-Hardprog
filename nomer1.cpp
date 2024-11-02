#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Masukan Jumlah Baris: ";cin >> n;
  cout << "Panah Kanan :" << endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i < n/2){
        if(j-i == n/2){
          cout << "*";
        }else{
          cout << " ";
        }
    } else if(i == n/2){
      cout << "*";
    } else {
      if(j+i == n-1+n/2){
        cout << "*";
      }else{
        cout << " ";
      }
    }}
    cout << endl;
  }
  cout << "Panah Kiri :" << endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i < n/2){
        if(j+i == n/2){
          cout << "*";
        }else{
          cout << " ";
        }
    } else if(i == n/2){
      cout << "*";
    } else {
      if(i-j == n/2){
        cout << "*";
      }else{
        cout << " ";
      }
    }}
    cout << endl;
  }
  return 0;
}