#include<bits/stdc++.h>
using namespace std;

int main(){
    int pares[100] = {};
    for(int i=0, k=1; i<100; i++, k++)
        pares[i] = k;

    for(int i=0; i<100; i++)
        if(pares[i]%2 == 0)
            printf("%d\n",pares[i]);
}