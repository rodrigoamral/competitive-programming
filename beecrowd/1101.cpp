#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int m = 10 , n = 10 , soma;
    while(true){
        scanf("%d %d",&m,&n);
        if(m <= 0 || n <= 0)
            return 0;
        if(m < n)
            swap(m,n);

        soma = 0;
        for(; m>=n; n++){
           soma += n;
           printf("%d ",n);  
        }    
        printf("Sum=%d\n",soma);
    }
}