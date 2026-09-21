#include <iostream>

int main() {
     using std::cin;
     using std::cout;

cout << "Pishi 6 cifr chislo\n";
int ch;
cin >> ch;
if (ch < 100000 || ch > 999999) {
    std::cout << "Pishi nuxhnoe chislo" << std::endl;
}

else {
int a = ch/1000;
int b = ch%1000;
if ((a/100 + (a/10)%10 + a%10) == (b/100 + (b/10)%10 + b%10)) {
    std::cout << "schastlivoe" << std::endl;
}
else {
    std::cout << "Ne chastlivoe" << std::endl;
} 
}
}
