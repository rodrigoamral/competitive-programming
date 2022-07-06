#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 0 ,qntd1 = 0 , qntd2 = 0 , qntd3 = 0, qntd4 =0;
    for(int i=0; i<5; i++){
        scanf("%d",&x);
        if(x > 0)
            qntd1++;
        else if(x < 0)
            qntd2++;

        if(x%2 == 0)
            qntd3++;
        else
            qntd4++;        
    }
    printf("%d valor(es) par(es)\n",qntd3);
    printf("%d valor(es) impar(es)\n",qntd4);
    printf("%d valor(es) positivo(s)\n",qntd1);
    printf("%d valor(es) negativo(s)\n",qntd2);
}