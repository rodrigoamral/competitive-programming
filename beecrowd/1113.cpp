#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 1,b = 0;
    scanf("%d %d",&a,&b);
    while(a != b){       
        if(a > b)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
        scanf("%d %d",&a,&b);         
    }
}
