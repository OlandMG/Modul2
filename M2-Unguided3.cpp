#include <iostream>
using namespace std;

int main() {
    int size;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> size;

    // Membuat array dengan ukuran yang dimasukkan oleh pengguna
    int arr[size];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int choice;
    do {
        // Menampilkan menu
        cout << "\nMenu:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Cari nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        // Memproses pilihan pengguna
        switch(choice) {
            case 1: {
                // Cari nilai maksimum
                int max = arr[0];
                for (int i = 1; i < size; ++i) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Nilai maksimum: " << max << endl;
                break;
            }
            case 2: {
                // Cari nilai minimum
                int min = arr[0];
                for (int i = 1; i < size; ++i) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai minimum: " << min << endl;
                break;
            }
            case 3: {
                // Cari nilai rata-rata
                int sum = 0;
                for (int i = 0; i < size; ++i) {
                    sum += arr[i];
                }
                double average = static_cast<double>(sum) / size;
                cout << "Nilai rata-rata: " << average << endl;
                break;
            }
            case 4:
                cout << "Terima kasih telah menggunakan program ini.\n";
                break;
            default:
                cout << "Opsi tidak valid. Silakan pilih opsi yang benar.\n";
        }
    } while (choice != 4);

    return 0;
}

