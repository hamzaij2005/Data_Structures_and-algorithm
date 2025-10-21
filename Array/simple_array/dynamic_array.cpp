#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int *arr = new int[n];   // array created in heap

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // same as *(arr + i)
    }

    cout << "You entered:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;  // free heap memory

    return 0;
}
