#include <iostream>
#include <cmath>
using namespace std;

struct koordinat{
    float latitude;
    float longitude;
    float altitude;
};

double converRadians(double degree){
  return degree * M_PI / 180;
}

double haversineDistance(double lat1, double lon1, double alt1, double lat2, double lon2, double alt2){
  double R = 6371000; 
  double dLat = converRadians(lat2 - lat1);
  double dLon = converRadians(lon2 - lon1);
  double dAlt = alt2 - alt1;
  double a = sin(dLat/2) * sin(dLat/2) + cos(converRadians(lat1)) * cos(converRadians(lat2)) * sin(dLon/2) * sin(dLon/2);
  double c = 2 * atan2(sqrt(a), sqrt(1-a));
  double d = R * c;
  return sqrt(pow(d,2) + pow(dAlt,2));
}

int main(){
  koordinat point[2];
  double jarak;
  // for(int i=0; i<2; i++){
  //   system("cls");
  //   cout << "Masukkan latitude " << i+1 << ": ";
  //   cin >> point[i].latitude;
  //   cout << "Masukkan longitude " << i+1 << ": ";
  //   cin >> point[i].longitude;
  //   cout << "Masukkan altitude " << i+1 << ": ";
  //   cin >> point[i].altitude;
  // }

  // menghitung jarak
  jarak = haversineDistance(point[0].latitude, point[0].longitude, point[0].altitude, point[1].latitude, point[1].longitude, point[1].altitude);

  
  cout << "Jarak 2 titik :" << jarak << " meter";
  return 0;
}
