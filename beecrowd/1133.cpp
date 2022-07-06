#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x > y)
        swap(&x,&y);
    for(int i=x+1; i<y; i++){
        if(i%5 == 3 || i%5 == 2)
            printf("%d\n",i);
    }        
}