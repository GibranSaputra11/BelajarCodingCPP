#include <iostream>

using namespace std;

double nilai1, Nilai2, Nilai3, Nilai4, Nilai5;

void MeasukanNilai(){
    cout << "Masukan nilai semester 1 : ";
    cin >> nilai1;
    cout << "Masukan nilai semester 2 : ";
    cin >> Nilai2;
    cout << "Masukan nilai semester 3 : ";
    cin >> Nilai3;
    cout << "Masukan nilai semester 4 : ";
    cin >> Nilai4;
    cout << "Masukan nilai semester 5 : ";
    cin >> Nilai5;
}

double mengHitungRerata(double a, double b, double c, double d, double e){
    return (a+b+c+d+e)/5;
}

int main(){
    MeasukanNilai();
}

