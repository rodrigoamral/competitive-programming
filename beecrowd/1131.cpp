#include<bits/stdc++.h>
using namespace std;

void resultado(int g, int i, int e){
    printf("%d grenais\n",g+i+e);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",g);
    printf("Empates:%d\n",e);
    if(i > g)
        printf("Inter venceu mais\n");
    else if(g > i)
        printf("Gremio venceu mais\n"); 
    else
        printf("Nao houve vencedor\n");       
}

void grenal(int *g, int *i, int *e){
    int a, b;
    scanf("%d %d",&a,&b);
    if(a > b)
        *i += 1;
    else if(a < b)
        *g += 1;
    else
        *e += 1;         
}

int main(){
    int g = 0, i = 0,e = 0 ,n;
    grenal(&g,&i,&e);
    while(n != 2){
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n == 1)
            grenal(&g,&i,&e);
    }
    resultado(g,i,e);
}