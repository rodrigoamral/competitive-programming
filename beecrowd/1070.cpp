#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, qntd=0;
    scanf("%d",&x);
    for(int i=x; qntd < 6; i++)
        if(i%2 == 1){
            printf("%d\n",i);
            qntd++;
        }
            
}