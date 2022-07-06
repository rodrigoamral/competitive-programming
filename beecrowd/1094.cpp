#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , qntd ; 
    double qntdC = 0, qntdS = 0, qntdR = 0 , total = 0;
    char tipo;

    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %c",&qntd,&tipo);
        total += qntd;
        if(tipo == 'C')
            qntdC += qntd;
        else if(tipo == 'S')
            qntdS += qntd;
        else
            qntdR += qntd;
    }

    printf("Total: %.0lf cobaias\n",total);
    printf("Total de coelhos: %.0lf\n",qntdC);
    printf("Total de ratos: %.0lf\n",qntdR);
    printf("Total de sapos: %.0lf\n",qntdS);
    printf("Percentual de coelhos: %.2lf %\n",(qntdC*100)/total);
    printf("Percentual de ratos: %.2lf %\n",(qntdR*100)/total);
    printf("Percentual de sapos: %.2lf %\n",(qntdS*100)/total);
}