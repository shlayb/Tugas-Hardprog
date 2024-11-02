#include <iostream>
using namespace std;

class Pesawat{
  public:
    string Nama_Pesawat;
    double Thrust_Mesin, Berat_Pesawat;
    void ThrustToWeight(){
        cout << "Thrust to Weight Ratio Pesawat: " << Nama_Pesawat << " adalah " << Thrust_Mesin/Berat_Pesawat << endl;
        cout << endl;
    }
};

int main(){
    // Pesawat 1
    Pesawat Pesawat1;
    Pesawat1.Nama_Pesawat = "F-16";
    Pesawat1.Thrust_Mesin = 15000;
    Pesawat1.Berat_Pesawat = 8000;

    // Pesawat 2
    Pesawat Pesawat2;
    Pesawat2.Nama_Pesawat = "F-22";
    Pesawat2.Thrust_Mesin = 35000;
    Pesawat2.Berat_Pesawat = 15000;

    // Pesawat 3
    Pesawat Pesawat3;
    Pesawat3.Nama_Pesawat = "F-35";
    Pesawat3.Thrust_Mesin = 43000;
    Pesawat3.Berat_Pesawat = 20000;

    // Print the plane

    // pesawat 1
    cout << "Pesawat 1: " << Pesawat1.Nama_Pesawat << endl;
    cout << "Thrust: " << Pesawat1.Thrust_Mesin << " N" << endl;
    cout << "Berat: " << Pesawat1.Berat_Pesawat << " kg" << endl;
    Pesawat1.ThrustToWeight();

    // pesawat 2
    cout << "Pesawat 2: " << Pesawat2.Nama_Pesawat << endl;
    cout << "Thrust: " << Pesawat2.Thrust_Mesin << " N" << endl;
    cout << "Berat: " << Pesawat2.Berat_Pesawat << " kg" << endl;
    Pesawat2.ThrustToWeight();

    // pesawat 3
    cout << "Pesawat 3: " << Pesawat3.Nama_Pesawat << endl;
    cout << "Thrust: " << Pesawat3.Thrust_Mesin << " N" << endl;
    cout << "Berat: " << Pesawat3.Berat_Pesawat << " kg" << endl;
    Pesawat3.ThrustToWeight();


    return 0;
}