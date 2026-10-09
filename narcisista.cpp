#include <iostream>
#include <cmath>
using namespace std;

int main(){

    /*
      Algunos numeros de Armstrong
       -153
       -370
       -371
       -407                    
    */

    int n;
    cout << "Veremos si ese numero es narcisita" << endl;
    cin >> n;

    if(n<100 || n>999){

        cout << "Tiene que se de tres digitos";
        return 1;
    }

    int origen = n;
    int sum = 0;

    while (n>0)
    {
        int digito = n%10;
        int tercero = pow(digito, 3);
        n/=10;
        
        sum = sum + tercero;
        
    }
    
    if (sum==origen)
    {
        cout << "Es narcisista";
    
    }else
    {
        cout << "No es narcisita";
    }
    
    
    

    





}
