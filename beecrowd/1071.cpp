 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     long long k, n;
     scanf("%lld",&n);

     for(long long i=0; i<n; i++){
        scanf("%lld",&k);
        if(k == 0){
            printf("NULL\n");
            continue;
        }    

        if(k%2 == 1 || k%2 == -1)
            printf("ODD ");    
        else
            printf("EVEN ");

        if(k > 0)
            printf("POSITIVE\n");
        else
            printf("NEGATIVE\n");               
     }


 }