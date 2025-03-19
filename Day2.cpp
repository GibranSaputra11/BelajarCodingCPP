#include <iostream>

using namespace std;

int main() {
    int saldo = 500000; // Saldo awal
    int pilihan, jumlah;

    do {
        cout << "\n===== ATM Sederhana =====\n";
        cout << "1. Cek Saldo\n";
        cout << "2. Setor Uang\n";
        cout << "3. Tarik Uang\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Saldo Anda: Rp " << saldo << endl;
                break;
            case 2:
                cout << "Masukkan jumlah setor: Rp ";
                cin >> jumlah;
                if (jumlah > 0) {
                    saldo += jumlah;
                    cout << "Setor berhasil! Saldo sekarang: Rp " << saldo << endl;
                } else {
                    cout << "Jumlah tidak valid!\n";
                }
                break;
            case 3:
                cout << "Masukkan jumlah tarik: Rp ";
                cin >> jumlah;
                if (jumlah > 0 && jumlah <= saldo) {
                    saldo -= jumlah;
                    cout << "Tarik berhasil! Saldo sekarang: Rp " << saldo << endl;
                } else {
                    cout << "Saldo tidak cukup atau jumlah tidak valid!\n";
                }
                break;
            case 4:
                cout << "Terima kasih telah menggunakan ATM ini!\n";
                break;
            default:
                cout << "Pilihan tidak valid! Silakan pilih lagi.\n";
        }
    } while (pilihan != 4);

    return 0;
}
