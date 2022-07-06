#include <iostream>
 
using namespace std;
 
int main() {
 
    int a[2];
    scanf("%d %d",&a[0],&a[1]);

    if(a[1] > a[0]){
        int c = a[0];
        a[0] = a[1];
        a[1] = c;
    }

    if(a[0]%a[1] == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");        

    return 0;
}