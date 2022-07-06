#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
        if(i%2 == 0)
            printf("%d^%d = %d\n",i,2,i*i);
            
}