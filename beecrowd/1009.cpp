#include <iostream>
#include <string>
 
using namespace std;
 
int main() {

    double a,b;
    string nome;
    getline(cin,nome);
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("TOTAL = R$ %.2lf\n",a + (b*0.15));
 
    return 0;
}