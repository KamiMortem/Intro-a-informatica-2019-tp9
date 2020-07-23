#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

main()
{
    int uno[9999];
    int i,n,val,mini,pos;
    bool band, desen;

    cout<<"Escribe la cantidad de numeros enteros a ingresar"<<endl;
    cin>>n;
    for (i=1;i<=n;i++){
        cout<<"Ingrese pocicion "<<i<<endl;
        cin>>uno[i];
    }
    cout<<"Los numeros ingresados son: "<<endl;
    for (i=1;i<=n;i++){
        cout<<"Posicion "<<i<<" :"<<uno[i]<<endl;
    }
    desen=true;
    band=true;
    for (i=1;i<=n;i++){
        if (band==true){
            val=uno[i];
            band=false;
        }
        else{
            val=uno[i-1];
        }
        if (val<uno[i]){
            desen=false;
        }
    }
    if(desen==true){
        cout<<"Es desendente los valores"<<endl;
    }
    else{
        cout<<"No es desendente"<<endl;
    }

    mini=99999;
    for (i=1;i<=n;i++){
        if(uno[i]<mini){
            mini=uno[i];
            pos=i;
        }
    }
    //system("pause");
    cout<<"El Valor minimo ingresado es "<<mini<<" que esta en la pocision "<<pos<<endl;
}
