 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     int n;
     double x,y,z;
     scanf("%d",&n);

     for(int i=0; i<n; i++){
        scanf("%lf %lf %lf",&x,&y,&z);
        printf("%.1lf\n",((x*2)+(y*3)+(z*5))/10);
     }
 }