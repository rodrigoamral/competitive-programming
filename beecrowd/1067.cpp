#include<bits/stdc++.h>
using namespace std;

int main(){
    int v[1001],a;
    for(int i=0; i<1001; i++)
        v[i] = i;

    scanf("%d",&a);

    for(int i = 0; i<=a; i++)    
        if(i%2 == 1)
            printf("%d\n",v[i]);

}