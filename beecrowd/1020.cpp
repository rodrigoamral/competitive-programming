#include <iostream>
 
using namespace std;
 
int main() {
 
    int a;
    scanf("%d",&a);
    printf("%d ano(s)\n",a/365);
    a %= 365;
    printf("%d mes(es)\n",a/30);
    printf("%d dia(s)\n", a%30);
 
    return 0;
}