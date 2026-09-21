#include <cmath>
#include <cassert>
#include <iostream>



int main ()
{
     using std::cin;
     using std::cout;


double a = 0.1; 
double b = 0.2;

double sum = a + b;
assert(std::fabs(sum - 0.3) < 1e-10);   

int k = 6;
double eps = std::pow(10, -k);
double res = 0.0;
double step = 1.0;

int i = 1;
double x=1;

while (std::fabs(step)>eps) {
res +=step;
step*=x;
step /=i; 
++i;
}
cout << "my exp: " << res << std::endl;

 return 0;
}