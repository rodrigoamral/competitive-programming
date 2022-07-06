#include <iostream>
#include <math.h>
 
using namespace std;

int main() {
    double a,b,c,delta,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    //divisivel por 0
    if(a == 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    //delta
    delta = (b*b) - (4 * a * c);
    if(delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    //bhaskara +
    r1 = ((-b) + sqrt(delta))/(2*a);
    //bhaskara -
    r2 = ((-b) - sqrt(delta))/(2*a);

    printf("R1 = %.5lf\n",r1);
    printf("R2 = %.5lf\n",r2);

    return 0;
}