#include <cmath>
#include <cassert>
#include <iostream>



int main ()
{
     using std::cin;
     using std::cout;

int k;
cout << "input k" << std::endl;
cin >> k;
double x;
cout << "input x(rad)" << std::endl;
cin >>x;
double eps = std::pow(10, -k);
double res = 0.0;
double step = 1.0;
int i = 0;

while (std::fabs(step)>eps) {
res +=step;
step *= -1;
step *= x;
step *= x;
step /= (2*i+1);
step /= (2*i+2);
++i;
}
cout << "cos(" << x << ") = " << res << std::endl;

return 0;
}