#include <iostream>
 
using namespace std;
 
int main() {
 
    double b;
    long long int a;
    scanf("%lf",&b);
    a = b * 100;
    printf("NOTAS:\n");
    printf("%lld nota(s) de R$ 100.00\n",a/10000);
    a %= 10000; 
    printf("%lld nota(s) de R$ 50.00\n",a/5000);
    a %= 5000;
    printf("%lld nota(s) de R$ 20.00\n",a/2000);
    a %= 2000;
    printf("%lld nota(s) de R$ 10.00\n",a/1000);
    a %= 1000;
    printf("%lld nota(s) de R$ 5.00\n",a/500);
    a %= 500;
    printf("%lld nota(s) de R$ 2.00\n",a/200);
    a %= 200;
    printf("MOEDAS:\n");
    printf("%lld moeda(s) de R$ 1.00\n",a/100);
    a %= 100;
    printf("%lld moeda(s) de R$ 0.50\n",a/50);
    a %= 50;
    printf("%lld moeda(s) de R$ 0.25\n",a/25);
    a %= 25;
    printf("%lld moeda(s) de R$ 0.10\n",a/10);
    a %= 10;
    printf("%lld moeda(s) de R$ 0.05\n",a/5);
    a %= 5;
    printf("%lld moeda(s) de R$ 0.01\n",a/1);
    return 0;
}