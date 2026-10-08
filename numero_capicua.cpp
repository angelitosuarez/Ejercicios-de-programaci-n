#include <iostream>
using namespace std;

int main(){

    //12321

    long long num, inv=0;
    cout << "Introduce un numero para saber si es capicua o no" << endl;
    cin >> num;

    long long oricha=num;

    int signo=1;

    if(num<0){

        signo=-1;
        num*=signo;

    }

    while (num>0)
    {
        int digito = num%10;
        inv = inv *10 + digito;
        num/=10;
    } 
    
    if(inv==oricha){

        cout << "es capicua";
        
    }else{

        cout << "no es capicua";
    }







    

}