#include <iostream>
 
using namespace std;
 
int main() {
 
    int f , n;
    scanf("%d",&n);
    f = 1;

   while(n!=0){
       f = f*n;
       n--;
   }

    printf("%d\n",f);
 
    return 0;
}