#include <iostream>
#include<math.h>
 
using namespace std;
 
int main() {
    double a,b;
    scanf("%lf",&a);
    b = (4/3.0) * (3.14159) * (pow(a,3));   
    printf("VOLUME = %.3lf\n",b);

    return 0;
}