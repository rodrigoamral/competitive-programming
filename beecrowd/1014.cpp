#include <iostream>
using namespace std;

int main(){

    int distancia;
    double litros;

    scanf("%d",&distancia);
    scanf("%lf",&litros);

    printf("%.3lf km/l\n",distancia/litros);
    
    return 0;
}