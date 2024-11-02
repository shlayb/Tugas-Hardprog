#include <iostream>
#include <cmath>
using namespace std;

struct koordinat{
    float latitude;
    float longitude;
};

int main(){
  koordinat point;
  cout << "Masukkan latitude: ";
  cin >> point.latitude;
  cout << "Masukkan longitude: ";
  cin >> point.longitude;

  cout << "Koordinat: " << point.latitude << ", " << point.longitude;
  return 0;
}