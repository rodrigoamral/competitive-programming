#include <iostream>
 
using namespace std;

int triangulo(double a[]){
    int x = 0;
    if((a[0] + a[1]) > a[2])
        x++;
    if((a[0] + a[2]) > a[1])
        x++;
    if((a[2] + a[1]) > a[0])
        x++; 

    if(x == 3)
        return 1;
    else
        return 0;        
}

int main() {
 
    double x[3] = {};

    scanf("%lf %lf %lf",&x[0],&x[1],&x[2]);

    if(triangulo(x) == 1){
        printf("Perimetro = %.1lf\n", x[0] + x[1] + x[2]);
    }
    else{
        printf("Area = %.1lf\n", ((x[0] + x[1]) * x[2])/2);
    }
 
    return 0;
}