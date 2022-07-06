#include <iostream>
 
using namespace std;
 
int main() {
    int a,b;
    scanf("%d",&a);
    b = 1;

    while(b < 10000){
        if(b%a == 2)
            printf("%d\n",b);
        b++;    
    }

    return 0;
}