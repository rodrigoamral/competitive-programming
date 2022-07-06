#include <iostream>
 
using namespace std;
 
int main() {
    int a , b;
    scanf("%d",&a);
    int c[a];
    c[0] = 0;
    c[1] = 1;

    for(int i = 1; i<=a; i++){
        if(i == 1)
            printf("%d",c[i-1]);
        else if(i == 2){
            printf(" %d", c[i-1]);
        }
        else{
            c[i-1] = c[i-2] + c[i-3];
            printf(" %d", c[i-1]);
        }
    }
    printf("\n");

    return 0;
}