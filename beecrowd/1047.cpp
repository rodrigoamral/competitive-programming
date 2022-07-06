#include <iostream>

using namespace std;
 
int main() {
 
    int hi,mi,hf,mf,i,f,t;
    scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
    hi *= 60;
    hf *= 60;
    i = hi + mi;
    f = hf + mf;
    t = f - i;

    if(i >= f){
        t += (24*60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t/60,t%60);
    }    
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t/60,t%60);
    
    return 0;
}