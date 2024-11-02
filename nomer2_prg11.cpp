#include <iostream>
#include <cmath>
using namespace std;

struct koordinat{
    float latitude;
    float longitude;
};

int main(){
  koordinat point[10];
  for(int i=0; i<10; i++){
    system("cls");
    cout << "Masukkan latitude: ";
    cin >> point[i].latitude;
    cout << "Masukkan longitude: ";
    cin >> point[i].longitude;
  }

  // menampilkan koordinat
  for(int i=0; i<10; i++){
    cout << "Koordinat " << i+1 << " : " << point[i].latitude << ", " << point[i].longitude << endl;
  }
  return 0;
}