#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float x,y;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%f %f",&x,&y);
        if(y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n",x/y);
    }
}