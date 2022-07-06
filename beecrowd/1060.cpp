#include<bits/stdc++.h>
using namespace std;

int main(){
    double x ; 
    int qntd = 0;
    for(int i=0; i<6; i++){
        scanf("%lf",&x);
        if(x > 0)
            qntd++;
    }
    printf("%d valores positivos\n",qntd);
}