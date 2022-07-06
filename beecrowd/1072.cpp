#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x,y, in=0, out=0;
    scanf("%lld",&x);
    for(int i=0; i<x; i++){
        scanf("%lld",&y);
        if(y >= 10 && y <= 20)
            in++;
        else
            out++;
    }        
    printf("%lld in\n",in);
    printf("%lld out\n",out);            
            
}