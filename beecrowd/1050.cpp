#include <iostream>
#include <string>
 
using namespace std;

void tipo(int *a){
    if(*a == 61)
        *a = 0;
    else if(*a == 71)
        *a = 1;
    else if(*a == 11)
        *a = 2;
    else if(*a == 21)
        *a = 3;
    else if(*a == 32)
        *a = 4;
    else if(*a == 19)
        *a = 5;
    else if(*a == 27)
        *a = 6;
    else
        *a = 7;                            
}

int main() {
 
    string ddd[8] = {"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
    int a;
    scanf("%d",&a);
    if(a != 61 && a != 71 && a != 11 && a != 21 && a != 32 && a != 19 && a != 27 && a != 31){
        printf("DDD nao cadastrado\n");
        return 0;
    }
    tipo(&a);
    cout << ddd[a] << endl;

    return 0;
}