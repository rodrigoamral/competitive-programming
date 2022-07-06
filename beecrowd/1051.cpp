#include<bits/stdc++.h>
using namespace std;

double imposto(double salario){
    double valorImposto = 0;
    double dif = 0;
    if(salario <= 2000)
        return 0;
    else{
        if(salario > 4500){
            dif = salario - 4500;
            valorImposto = (dif/100)*28;
            salario -= dif;
        }
        if(salario > 3000){
            dif = salario - 3000;
            valorImposto += (dif/100)*18;
            salario -= dif; 
        }
        if(salario > 2000){
            dif = salario - 2000;
            valorImposto += (dif/100)*8;
        }

        return valorImposto;
    }    
    return 0;
}

void print(double imposto){
    if(imposto == 0)
        printf("Isento\n");
    else
        printf("R$ %.2lf\n",imposto);    
}

int main(){
    double salario;
    scanf("%lf",&salario);
    print(imposto(salario));
    return 0;
}