#include<bits/stdc++.h>
using namespace std;

int main(){      
    for(float i=0.0; i<2.1; i+= 0.2 ){
        for(float j=1; j<4; j++){
            if((i > 0.0 && i <1.0) || (i > 1.0 && i < 2.0))
                printf("I=%.1lf J=%.1lf\n",i,j+i);
            else{
                int a = i, b = j+i;       
                printf("I=%d J=%d\n",a,b);
            }    
        }
    }     
}