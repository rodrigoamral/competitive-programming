#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    scanf("%d",&n);
    for(int i=1, cont = 1 , k = 0; k<n; i++, cont++){
        printf("%d ",i);
        if(cont == 3){
            printf("PUM\n");
            cont = 0;
            k++;
            i+=1;
        }    
    }
}