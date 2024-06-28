#include <iostream>
using namespace std;

int main() {
    int harga, jumlah_barang, total = 0, pilihan;
    string item;

    cout << "Item Tersedia:" << endl;
    cout << "1. Roti \t: Rp.5000" << endl;
    cout << "2. Susu \t: Rp.4000" << endl;
    cout << "3. Shampoo \t: Rp.500" << endl;
    cout << "4. Selesai" << endl;
    

    do {
    	cout << "Isikan kode: ";
    	cin >> pilihan;
        switch (pilihan) {
            case 1:
                item = "Roti";
                harga = 5000;
                cout << "Jumlah item: ";
                cin >> jumlah_barang;
                total += harga * jumlah_barang;
                cout << jumlah_barang << " " << item << " = Rp." << harga * jumlah_barang << endl;
                break;
            case 2:
                item = "Susu";
                harga = 4000;
                cout << "Jumlah item: ";
                cin >> jumlah_barang;
                total += harga * jumlah_barang;
                cout << jumlah_barang << " " << item << " = Rp." << harga * jumlah_barang << endl;
                break;
            case 3:
                item = "Shampoo";
                harga = 500;
                cout << "Jumlah item: ";
                cin >> jumlah_barang;
                total += harga * jumlah_barang;
                cout << jumlah_barang << " " << item << " = Rp." << harga * jumlah_barang << endl;
                break;
            case 4:
                cout << "Total Belanja: Rp." << total << endl;
                break;
            default:
                cout << "Pilihan salah" << endl;
                break;
        }
        if (pilihan != 4) {
            cout << "Isikan kode: ";
            cin >> pilihan;
        }
    } while (pilihan != 4);

    cout << "Selamat Berbelanja, Sekian Terimakasih!!" << endl;

    return 0;
}

