#include <iostream>
using namespace std;

int main() {
    int n = 3; 
    int A[3][3] = {
        {0, 2, 3},
        {1, 1, 5},
        {2, 0, 6}
    };

    cout << "Original Triplet Form:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i][0] << " " << A[i][1] << " " << A[i][2] << endl;
    }
    int T[3][3];
    for (int i = 0; i < n; i++) {
        T[i][0] = A[i][1];  
        T[i][1] = A[i][0];  
        T[i][2] = A[i][2];  
    }

    cout << "\nTransposed Triplet Form:\n";
    for (int i = 0; i < n; i++) {
        cout << T[i][0] << " " << T[i][1] << " " << T[i][2] << endl;
    }

    return 0;
}
