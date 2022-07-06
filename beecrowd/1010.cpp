#include <iostream>
 
using namespace std;
 
int main() {
 
    int a , b ;
    double c , d , e;
    scanf("%d %d %lf",&a,&b,&c);
    d = b*c;
    scanf("%d %d %lf",&a,&b,&c);
    e = b*c;
    printf("VALOR A PAGAR: R$ %.2lf\n",d+e);

    return 0;
}