#include<bits/stdc++.h>
using namespace std;

int main(){
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