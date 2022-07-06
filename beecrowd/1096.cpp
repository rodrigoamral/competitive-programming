#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1 , j=7 , cont = 1; i<10 ;cont++ , j--){
        printf("I=%d J=%d\n",i,j);
        if(cont == 3){
            i +=2;
            cont =0;
            j = 8;
        }
    }     
}