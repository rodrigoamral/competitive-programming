 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int atual = 0, maior = 0 , posicao = 0;
    for(int i=1; i<=100; i++){
        scanf("%d",&atual);
        if(atual > maior){
            maior = atual;
            posicao = i;
        }
    }
    printf("%d\n%d\n",maior,posicao);
 }