#include <iostream>
 
using namespace std;
 
int main() {
 
    double a[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
    int c , b;
    scanf("%d %d",&c,&b);
    printf("Total: R$ %.2lf\n",a[c]*b); 
 
    return 0;
}