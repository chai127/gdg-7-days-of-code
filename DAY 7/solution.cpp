#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
int main() {

    int r, c;
    cout << "enter order of matrix:\n";
    cin >> r >> c;


    vector<vector<int>> matrix(r, vector<int>(c));


    cout << "enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<bool> zeroRows(r, false);
    vector<bool> zeroCols(c, false);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == 0) {
                zeroRows[i] = true;
                zeroCols[j] = true;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (zeroRows[i] || zeroCols[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    cout << "modified matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
