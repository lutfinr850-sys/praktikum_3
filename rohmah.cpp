#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "masukkan jumlah baris segitiga pascal: ";
    cin >> n;

    int pascal[50][50] = { 0 };

    for (int i = 0; i < n; i++) {
        pascal[i][0] = 1;
        pascal[i][i] = 1;

        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {

        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
