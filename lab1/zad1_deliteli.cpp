#include <iostream>

int main() {

using std::cin;
using std::cout;

int a,b;     
cout << "Vvedi pervoe chislo\n";
if(!(cin >> a) || a <= 0) {
    cout << "Vvedeno ne to chislo\n";
    return 1;
}
cout << "Vvedi vtoroe chislo\n";
if(!(cin >> b) || b <= 0) {
    cout << "Vvedeno ne to chislo\n";
    return 1;
}

cout << "Deliteli chisel:\n";
int ogr = std::min(a,b);
for (int i = 1; i <= ogr; i++) {
    if(a % i == 0 && b % i == 0) {
        cout << i << " ";
    }



}

}