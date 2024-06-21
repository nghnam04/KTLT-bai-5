/*
Ho va ten: Nguyen Hoang Nam
MSSV: 20225213
Ma lop: 738920
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A = 0, B = 0, C = 0, D = 0, F = 0;
    while (n--) {
        double a;
        cin >> a;
        if (a < 4) ++F;
        else if (a < 5.5) ++D;
        else if (a < 7) ++C;
        else if (a < 8.5) ++B;
        else ++A;
    }
    cout << A << " " << B << " " << C << " " << D << " " << F;
    return 0;
}
