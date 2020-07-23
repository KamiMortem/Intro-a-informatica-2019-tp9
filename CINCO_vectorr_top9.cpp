#include <iostream>
#include <math.h>
#include <stdio.h>
typedef int tvector[100];

using namespace std;

void menu(int &op);
void CreacionVector(tvector &vec,int &n);
void Muestra(tvector &vec, int &n);
void MuestraM(tvector &vec, int &n);
void sumaPares(tvector vec,int &n);
void BusquedaNum(tvector vec,int n);
void OrdenVector(tvector vec,int n);

main(){
    int n,op;
    tvector vec;

    do{

        menu(op);
        switch(op){
            case 1:CreacionVector(vec,n);
                break;
            case 2:Muestra(vec,n);
                break;
            case 3:MuestraM(vec,n);
                break;
            case 4:sumaPares(vec,n);
                break;
            case 5:BusquedaNum(vec,n);
                break;
            case 6:OrdenVector(vec,n);
                break;
        }
}while(op!=7);
}

void menu(int &op){

        cout<< ".------------------MENU--------------------------." <<endl;
        cout<< "|1 - cantidad de valores en vector               |" <<endl;
        cout<< "|2 - mostrar vector                              |" <<endl;
        cout<< "|3 - mostrar los primeros M valores del vector   |" <<endl;
        cout<< "|4 - valores pares y su suma                     |" <<endl;
        cout<< "|5 - buscar un valor existente                   |" <<endl;
        cout<< "|6 - mostrar orden del vector                    |" <<endl;
        cout<< "|7 - salir                                       |" <<endl;
        cout<< "°------------------------------------------------°" <<endl;
        cin>>op;
}


void CreacionVector(tvector &vec,int &n){
    int i;
    cout<<"cantidad de numeros en el vector"<<endl;
    cin>>n;
    for (i=1;i<=n;i++){
        vec[i] = i+(n-1);
    }
}

void Muestra(tvector &vec, int &n){
    int i;
    for (i=1;i<=n;i++){
    cout<< vec[1];
    }
}

void MuestraM(tvector &vec, int &n){
    int i, m;
    cout<<"ingrese M"<<endl;
    if(m<=100){
        for (i=1;i<=n;i++){
        cout<< vec[1];
        }
    }
    else
    {
           cout<<"valor de M no valido"<<endl;
        }

}
void sumaPares(tvector vec,int &n){
    int i;
    int suma;
        for(i=1;i<=n;i++){
            if(vec[i]%2==0){
            suma = vec[i] + suma;

            cout<<"la suma del valor "<<vec[i]<<" en posicion "<<i<<" es de "<<suma<<endl;
            }
        }
    }


void BusquedaNum(tvector vec,int n){
    int num,i;

    cout<< "ingrese valor a buscar en el vector"<<endl;
    cin>> num;
    for(i=1;i<=n;i++){
        if(vec[i]==num){
            cout<<"el numero "<<vec[i]<< "esta en la pocicion"<< i <<endl;
        }else{
             cout<<"el numero ingresado no existe"<<endl;
            }

    }

}


void OrdenVector(tvector vec,int n){
 int i,x;
 bool band=true,des=false;
 for(i=2;i<=n-1;i++){
    if(band==true){
        x=vec[1];
        band=false;
    }else{
        x=vec[i+1];
    }
    if(x<vec[i]){
        des=true;
    }

    }
        if (des==false){
        cout<<"Es desendente"<<endl;
    }    else{
        cout<<"No es desendente"<<endl;
        }
}

