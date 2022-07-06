#include <iostream>
using namespace std;

int main(){

    int first , last , sum;
    sum = 0;

    scanf("%d",&first);
    scanf("%d",&last);

    if(first > last){
        int c;
        c = first;
        first = last;
        last = c;

        for(int i = first; i<=last; i++)
            if((i%13) != 0)
                sum += i;
    
         printf("%d\n",sum);

    }
    else{
        for(int i = first; i<=last; i++)
            if((i%13) != 0)
                sum += i;
    
        printf("%d\n",sum);
    }
   
    return 0;
}