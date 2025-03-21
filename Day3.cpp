#include <iostream>

using namespace std;

double nilai1, Nilai2, Nilai3, Nilai4, Nilai5;

void MeasukanNilai(){
    cout << "===================================" << endl;
    cout << "Menghitung Rata-Rata Semester 1 - 5" << endl;
    cout << "===================================" << endl;
    cout << endl;
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

double luasSegitiga(double a, double b){
    return (a*b)/2;
}


void prosedurOutput (){
    cout << "======================" << endl;
    cout << "Nilai Rata-Rata : " << mengHitungRerata(nilai1, Nilai2, Nilai3, Nilai4, Nilai5 ) << endl;
    cout << "======================";
}

int main(){
    // MeasukanNilai();
    // cout << endl;
    // prosedurOutput();
    int Pilihan;

    do
    {
        cout << "===================\n";
        cout << "PILIH MENU HITUNGAN\n";
        cout << "===================\n";
        cout << endl;
        cout << "1. Menghitung rata-rata\n";
        cout << "2. Menghitung luas segi tiga\n";
        cout << "3. Menghitung luas persegi\n";
        cout << "4. Kembal\n";
        cout << "Masukan Pilihan menu (1/2/3/4) : ";
        cin >> Pilihan;

        switch (Pilihan)
        {
        case 1:
            MeasukanNilai();
            cout << endl;
            prosedurOutput();
            break;
        
        default:
            break;
        }

    } while (Pilihan !=4 );
    
}

