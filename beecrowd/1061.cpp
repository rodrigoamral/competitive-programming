#include<bits/stdc++.h>
using namespace std;

int main(){
    int d1,h1,m1,s1,d2,h2,m2,s2,total1,total2,evento;
    string resto;

    cin >> resto >> d1 >> h1 >> resto >> m1 >> resto >> s1;
    cin >> resto >> d2 >> h2 >> resto >> m2 >> resto >> s2;

    total1 = d1*86400 + h1*3600 + m1*60 + s1;
    total2 = d2*86400 + h2*3600 + m2*60 + s2;

    evento = total2 - total1;

    printf("%d dia(s)\n",evento/86400);
    evento %= 86400;
    printf("%d hora(s)\n",evento/3600);
    evento %= 3600;
    printf("%d minuto(s)\n",evento/60);
    evento %= 60;
    printf("%d segundo(s)\n",evento);
}