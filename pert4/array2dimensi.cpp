#include <iostream>
#include <vector>

using namespace std;
void sequential_search_2d(const vector<vector<int>>& array_2d, int target) {
    bool found = false; 
    for (int i = 0; i < array_2d.size(); ++i) {
        for (int j = 0; j < array_2d[i].size(); ++j) {
            if (array_2d[i][j] == target) {
                cout << "Elemen " << target << " ditemukan pada indeks: (" << i << ", " << j << ")" << endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "Elemen " << target << " tidak ditemukan dalam array." << endl;
    }
}

int main() {
    char ulangi;

    do {
        vector<vector<int>> array_2d = {
            {1, 3, 2},
            {10, 5, 8},
            {15, 24, 10}
        };
        int target;
        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> target;
        sequential_search_2d(array_2d, target);
        cout << "Apakah Anda ingin mengulangi pencarian? (y/n): ";
        cin >> ulangi;
    } while (ulangi == 'y' || ulangi == 'Y');

    return 0;
}