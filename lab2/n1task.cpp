#include <iostream>

int main() {
using namespace std;

int nat;
int min = 9;
int sr;
int num = 0;

cout << "naturalnoe chislo: \n";
cin >> nat;
if (nat <= 0) {
    cout << "neprav chislo" << endl;
    return 1; 
}
int k = nat;
while (nat>0) {
sr = nat % 10;
if (sr < min) {
min = sr;
}
nat = nat / 10;
++num;
}
cout << "cifr "<< num << " minimal "<<min << endl;
int res = 0;
    int p = 1;

    while (k > 0) {
        sr = k % 10;
        if (sr != min) {
            res += sr * p;
            p *= 10;
        }
        k /= 10;
    }


    cout << "rezultat: " << res << endl;
     return 0;
}