#include <iostream>

int main() {
using std::cout;
using std::cin;
int n;
cout << "Pishi fibonachi\n";
cin >> n;
int m = 0, k = 1;
int l = m+k;
for(int i = 0 ; i < n; i++) {
cout << m << " ";
l = m+k;
m=k;
k=l;
}
return 0;
}
