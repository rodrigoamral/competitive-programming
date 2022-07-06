#include <iostream>
 
using namespace std;
 
int main() {
 
    int n , m[15][15], x;
    while(1){    
        scanf("%d",&n);

        if(n == 0)
            break;


        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if((i == 0) && (j == 0)){
                    m[i][j] =  1 ;
                }

                else if((i== 0) && (j != 0)){
                    m[i][j] = m[i][j-1] * 2;
                }

                else{
                    m[i][j] = m[i-1][j] * 2;
                }
            }
        }

        int k = 0;
        x = m[n-1][n-1];
        while(x > 0){
            x = x / 10;
            k++;
        }
            
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++){
                if(j == n-1)
                    printf("%*d\n",k,m[i][j]);
                else 
                    printf("%*d ",k,m[i][j]);
            }

        printf("\n");    
        
    }           
 
    return 0;
}