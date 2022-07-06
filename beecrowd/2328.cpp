#include <iostream>
 
using namespace std;
 
int main() {

    int a ,b, c;
    c = 0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        c += b-1;
        a--; 
    }

    printf("%d\n",c);

    return 0;
}