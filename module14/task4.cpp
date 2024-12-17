#include <iostream>
using namespace std;

int main() {
    float a[4][4];  
    float b[4];     
    float c[4] = {0};  

    cout << "Enter the 4x4 matrix A:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the 4-component vector B:" << endl;
    for (int i = 0; i < 4; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            c[i] += a[i][j] * b[j];
        }
    }

    cout << "Resulting vector C:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
