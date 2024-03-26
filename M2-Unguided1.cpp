#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string input;
    vector<int> data_array;

    // Meminta input data array dari pengguna
    cout << "Masukkan data array : ";
    getline(cin, input);

    // Memisahkan input menjadi angka-angka dan menyimpannya dalam vektor
    stringstream ss(input);
    int num;
    while (ss >> num) {
        data_array.push_back(num);
    }

    // Inisialisasi vektor untuk nomor genap dan ganjil
    vector<int> even_numbers;
    vector<int> odd_numbers;

    // Memisahkan nomor genap dan ganjil
    for (int i = 0; i < data_array.size(); ++i) {
        if (data_array[i] % 2 == 0) {
            even_numbers.push_back(data_array[i]);
        } else {
            odd_numbers.push_back(data_array[i]);
        }
    }

    // Menampilkan output
    cout << "Data Array: ";
    for (int i = 0; i < data_array.size(); ++i) {
        cout << data_array[i];
        if (i != data_array.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int i = 0; i < even_numbers.size(); ++i) {
        cout << even_numbers[i];
        if (i != even_numbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < odd_numbers.size(); ++i) {
        cout << odd_numbers[i];
        if (i != odd_numbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
