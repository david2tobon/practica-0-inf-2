#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int numFilas=8;
    int numBlancos = (numFilas * 2) - 2;
    int numFilas1=8;
    int numBlancos1 = (numFilas1 * 2) - 2;
    int k=0;
    int n;
    int sum=0;
    int pot=0;
    int cifras[1000];
    int opcion;
    do {
    cout<<"***practica 0 de informatica 2***"<<endl;
    cout<<"1 para ver el ejercicio 1"<<endl;
    cout<<"2 para ver el ejercicio 2"<<endl;
    cout<<"3 para ver el ejercicio 3"<<endl;
    cout<<"0 salir "<<endl;
    cout<<"ingrese la opcion que desea:"<<endl;
    cin>>opcion;

    switch (opcion) {
    case 0:
        break;

    case 1:

        for(char i= 65 ; i<=72 ; i++){

                    // Asteriscos
                    for(char j=65;j<i;j++){
                        cout<<j;
                    }


                    // espacios
                    for(int j=1;j<=numBlancos1; j++){
                        cout<<" ";
                    }


                    // Asteriscos
                    for(char j=i-1;j>=65;j--){
                        cout<<j;
                    }
                    cout<<endl;
                    numBlancos1 -= 2;

                }

        cout<<endl;

        break;

   case 2:
        for(char i= 65 ; i<=72 ; i++){

                    // Asteriscos
                    for(char j=65;j<i;j++){
                        cout<<j;
                    }


                    // espacios
                    for(int j=1;j<=numBlancos; j++){
                        cout<<" ";
                    }


                    // Asteriscos
                    for(char j=i-1;j>=65;j--){
                        cout<<j;
                    }
                    cout<<endl;

                    numBlancos -= 2;

                }

        for(char i= 72 ; i>=65 ; i--){
             numBlancos += 2;

                    // Asteriscos
                    for(char j=65;j<i;j++){
                        cout<<j;
                    }

                    // espacios
                    for(int j=1;j<=numBlancos; j++){
                        cout<<" ";
                    }

                    // Asteriscos
                    for(char j=i-1;j>=65;j--){
                        cout<<j;
                    }
                    cout<<endl;

                }

        cout<<endl;

        break;

    case 3:

        cout<<"ingrese un numero entero:"<<endl;
        cin>>n;
        while(n>0){
            cifras[k]=n%10;
            n=n/10;
            k++;

        }
        for(int s=k-1;s>=0;s--){

            cout<<cifras[s]<<endl;
            pot=pow(cifras[s],cifras[s]);
            sum=sum+pot;
            cout<<endl;
        }

        cout<<"resultado es:"<<endl;
        cout<<sum<<endl<<endl;

        break;

    }
    } while (opcion<=3);

    return 0;
}
