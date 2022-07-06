#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 0 ; 
    int qntd = 0;
    for(int i=0; i<5; i++){
        scanf("%d",&x);
        if(x%2 == 0)
            qntd++;
    }
    printf("%d valores pares\n",qntd);
}