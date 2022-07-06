#include <iostream>
 
using namespace std;
 
int main() {
 
    double a,b,c,d;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    d = ((a*2) + (b*3) + (c*5)) / 10;
    printf("MEDIA = %.1lf\n",d);
 
    return 0;
}