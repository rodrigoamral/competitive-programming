#include <iostream>
#include <math.h>
 
using namespace std;

void swap(double *a, double *b){
    double c;
    c = *a;
    *a = *b;
    *b = c;
}

void sort(double a[]){
    for(int j=0; j<2; j++)    
        for(int i=0; i<2; i++)
            if(a[i] < a[i+1])
                swap(&a[i],&a[i+1]);    
}

int main() {
 
    double a[3];
    scanf("%lf %lf %lf",&a[0],&a[1],&a[2]);
    sort(a);

    if(a[0] >= (a[1] + a[2]))
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(pow(a[0],2) == (pow(a[1],2))+(pow(a[2],2)))
            printf("TRIANGULO RETANGULO\n");
        if(pow(a[0],2) > (pow(a[1],2))+(pow(a[2],2)))  
            printf("TRIANGULO OBTUSANGULO\n"); 
        if(pow(a[0],2) < (pow(a[1],2))+(pow(a[2],2)))  
            printf("TRIANGULO ACUTANGULO\n");         
        if(a[0] == a[1] && a[0] == a[2])
            printf("TRIANGULO EQUILATERO\n");
        if((a[0]==a[1] && a[0]!=a[2] ) || (a[0]==a[2] && a[0]!=a[1]) || (a[1]==a[2] && a[1]!=a[0] ) )
            printf("TRIANGULO ISOSCELES\n");    
    }    
 
    return 0;
}