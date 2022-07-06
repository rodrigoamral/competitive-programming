#include<bits/stdc++.h>
using namespace std;

int main(){
    int comb = 0,a = 0,g = 0,d = 0;
    while(comb != 4){
        scanf("%d",&comb);
        if(comb < 1 || comb > 4)
            continue;
        else if( comb == 1)
            a++;
        else if(comb == 2)
            g++;
        else if(comb == 3)
            d++; 
        else
            break;                           
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
}