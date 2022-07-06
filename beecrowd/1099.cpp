#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int n , x , y;
    scanf("%d",&n);

    for(int k , i=0; i<n; i++){
        k = 0;
        scanf("%d %d",&x,&y);
        if(x > y)
            swap(x,y);
        for(x += 1; x<y; x++){
            if(x%2 == 1)
                k += x;
        }
        printf("%d\n",k);        
    }
}