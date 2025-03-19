#include <iostream>
using namespace std;

int main(){
string Nama,Kelas,Pesan;
  cout << endl;
  cout << "Program ini dibuat oleh Gibran" << endl;
  cout << "Masukan Nama Kalian : ";
  getline(cin,Nama);
  cout << "Masukan Kelas Kalian : ";
  cin >> Kelas;
  cin.ignore();

  cout << "Halo " << Nama << " Kamu Kelas " << Kelas << " Kann???\n";
  getline(cin,Pesan);
  cout << "WKWKKWKW udah pasti bener dong tebakanku heheheh";

  return 0;
}