#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    if(a == "vertebrado"){
        if(b == "ave"){
            if(c == "carnivoro")
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else{
            if(c == "onivoro")
                printf("homem\n");
            else
                printf("vaca\n");    
        }
    }
    else{
        if(b == "inseto"){
            if(c == "hematofago")
                printf("pulga\n");
            else
                printf("lagarta\n");    
        }
        else{
            if(c == "hematofago")
                printf("sanguessuga\n");
            else
                printf("minhoca\n");    
        }
    }

    return 0;
}