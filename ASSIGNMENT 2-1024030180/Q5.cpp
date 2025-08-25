#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // (a) Diagonal Matrix
    int diag[4] = {1, 2, 3, 4};
    cout << "Diagonal Matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout << diag[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // (b) Tri-diagonal Matrix
    int tri[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Tri-diagonal Matrix:\n";
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i==j+1 || i==j-1) cout << tri[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // (c) Lower Triangular Matrix
    int lower[10] = {1,2,3,4,5,6,7,8,9,10}; 
    cout << "Lower Triangular Matrix:\n";
    k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j) cout << lower[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // (d) Upper Triangular Matrix
    int upper[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Upper Triangular Matrix:\n";
    k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j) cout << upper[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // (e) Symmetric Matrix
    int sym[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Symmetric Matrix:\n";
    k=0;
    int full[4][4] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            full[i][j] = sym[k++];
            full[j][i] = full[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << full[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
