#include <iostream>

using namespace std;

int main() {
    int so;

    cout << "Nhap vao mot so: ";
    cin >> so;

    cout << "Uoc so cua " << so << " la: ";
    for (int i = 1; i <= so; ++i) {
        if (so % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}