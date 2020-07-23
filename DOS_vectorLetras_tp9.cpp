#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;
main(){
    char vec[99999], busc;
    int i,pos,voc;
    bool band;
    pos=0;

    do{
        pos=pos+1;
        cout<<"Ingrese el caracter en la posicion "<<pos<<" hasta que ingrese N"<<endl;
        cin>>vec[pos];
    }while(vec[pos]!='N');

    for (i=pos-1;i>=1;i--){
        cout<<"Posicion "<<i<<": "<<vec[i]<<endl;
    }

    cout<<"Ingrese el caracter a buscar"<<endl;
    cin>>busc;
    band=false;
    for(i=1;i<=pos-1;i++){
        if(vec[i]==busc){
            cout<<"Encontrado en posicion "<<i<<endl;
            band=true;
        }
    }
    if(band==false){
        cout<<"No se encontro el caracter "<<endl;
    }

    voc=0;
    for(i=1;i<=pos-1;i++){
        if(vec[i]=='a' || vec[i]=='e' || vec[i]=='i' || vec[i]=='o' || vec[i]=='u'){
            voc=voc+1;
        }
        else{
            if(vec[i]=='A' || vec[i]=='E' || vec[i]=='I' || vec[i]=='O' || vec[i]=='U'){
                voc=voc+1;
            }
        }
    }
    cout<<"La cantidad de vocales ingresadas es de :"<<voc<<endl;
}
