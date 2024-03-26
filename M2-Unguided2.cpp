#include <iostream>
using namespace std;

int main() {
    int size_x, size_y, size_z;

    // Meminta pengguna untuk memasukkan ukuran elemen array
    cout << "Masukkan ukuran elemen array tiga dimensi:\n";
    cout << "Ukuran x: ";
    cin >> size_x;
    cout << "Ukuran y: ";
    cin >> size_y;
    cout << "Ukuran z: ";
    cin >> size_z;

    // Deklarasi array
    int arr[size_x][size_y][size_z];

    // Input elemen
    for (int x = 0; x < size_x; x++) {
        for (int y = 0; y < size_y; y++) {
            for (int z = 0; z < size_z; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output Array
    for (int x = 0; x < size_x; x++) {
        for (int y = 0; y < size_y; y++) {
            for (int z = 0; z < size_z; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;

    // Tampilan array
    for (int x = 0; x < size_x; x++) {
        for (int y = 0; y < size_y; y++) {
            for (int z = 0; z < size_z; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
