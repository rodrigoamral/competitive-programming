#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c;
    scanf("%d",&a);
    b = a / 3600;
    a %= 3600;
    c = a / 60;
    a %= 60; 
    printf("%d:%d:%d\n",b,c,a);
 
    return 0;
}