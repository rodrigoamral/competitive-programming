#include<bits/stdc++.h>
using namespace std;

void media(){
    double nota, media;
    int cont = 0;
    while(cont != 2){
        while(1){
            scanf("%lf",&nota);
            if(nota >= 0 && nota <=10){
                cont++;
                media += nota;
                break;
            }
            else
                printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n",media/2);
}

int main(){
    int x = 0;
    media();
    while(!(x == 2)){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&x);
        if(x == 1)
            media();
    }
}