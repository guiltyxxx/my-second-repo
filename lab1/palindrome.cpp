#include <iostream>

int main() {
    std::cout << "enter a four-digit number" << std::endl;
    int cif;
    std::cin >> cif;
    if (cif < 1000 || cif > 9999) {
        std::cout << "You entered a non-four-digit number" << std::endl;
    } else {
        if (cif % 11 ==0 && cif/1000 == cif %10) {
            std::cout << "The number is a palindrome" << std::endl;
        } else { 
            std::cout << "The number is not a palindrome" << std::endl;
        }   
    }


    return 0;
}