#include <iostream>
using namespace std;

int main(){
  int len;
  cout << "Masukkan panjang array: ";
  cin >> len;
  float arr[len];
  for(int i=0; i<len; i++){
    cout << "Masukkan nilai array ke-" << i+1 << ": ";
    cin >> arr[i];
  }

  float highest = arr[0];
  for(int i=1; i<len; i++){
    highest = (arr[i] > highest ? arr[i] : highest);
  }

  cout << "Nilai tertinggi: " << highest;
  return 0;
}