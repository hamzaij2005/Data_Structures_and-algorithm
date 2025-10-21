#include <iostream>
using namespace std;

int main() {
    int rows, cols,a,b;
    cout << "Enter rows and cols: ";
    cin >> rows >> cols;

    int arr[100][100],trans[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Transpose logic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i]=arr[i][j];
        }
    }

    cout << "\nTranspose matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
