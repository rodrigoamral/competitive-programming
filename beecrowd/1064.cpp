#include<bits/stdc++.h>
using namespace std;

int main(){
    double x , media = 0 ; 
    int qntd = 0;
    for(int i=0; i<6; i++){
        scanf("%lf",&x); 
        if(x > 0){
            media += x;
            qntd++;
        }    
    }
    printf("%d valores positivos\n",qntd);
    printf("%.1lf\n",media/qntd);
}