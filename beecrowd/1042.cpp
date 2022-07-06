#include <iostream>
 
using namespace std;

int compare(const void * a,const void * b){
    return (*(int*)a - *(int*)b);      
}

int main() {
 
    int x[3] = {};
    int y[3] = {};

    scanf("%d %d %d",&x[0],&x[1],&x[2]);

    y[0] = x[0];
    y[1] = x[1];
    y[2] = x[2];

    qsort(x,3,sizeof(int),compare);

    for(int i=0; i<3; i++)
        printf("%d\n",x[i]);
    printf("\n");
    for(int i=0; i<3; i++)
        printf("%d\n",y[i]);        
    
    return 0;
}