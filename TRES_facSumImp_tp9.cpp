#include<iostream>
#include<stdio.h>
#include<math.h>
typedef int tvector[100];

using namespace std;

void menu(int &op);
void ingreso(tvector &vec,int &n);
void facPosit(tvector vec,int &n);
int fac(int a);
void sumNeg(tvector vec,int n);
void imp(tvector vec,int n);

main(){
    int n,op;
    tvector vec;

    do{

        menu(op);
         switch(op){
        case 1:ingreso(vec,n);
        break;
        case 2:sumNeg(vec,n);
        break;
        case 3:imp(vec,n);
        break;
    }
}while(op!=4);
}

void menu(int &op){
     cout<<"----MENU----"<<endl;
        cout<<"1 - Ingresar valores"<<endl;
        cout<<"2 - Factorial de numeros positivos"<<endl;
        cout<<"3 - Suma de los numeros negativos"<<endl;
        cout<<"4 - salir"<<endl;
        cin>>op;


}


void ingreso(tvector &vec,int &n){
    int i;
    cout<<"Escribe la cantidad de numeros enteros a ingresar"<<endl;
    cin>>n;
    for (i=1;i<=n;i++){
        cout<<"Ingrese pocicion "<<i<<endl;
        cin>>vec[i];
    }
}


void facPosit(tvector vec,int &n){
    int i;
    for(i=1;i<=n;i++){
        if(vec[i]>0){
            cout<<"El factorial de "<<vec[i]<<" en posicion "<<i<<" es de "<<fac(vec[i])<<endl;
        }
    }
}


int fac(int a){
    int i;
    int f;
    for(i=1;i<=a-1;i++){
        f=i*a;
    }
    return(f);
}


void sumNeg(tvector vec,int n){
    int sum,i;

    sum=0;
    for(i=1;i<=n;i++){
        if(vec[i]<0){
            sum=sum+vec[i];
        }
    }
    cout<<"La suma de los numeros negativos es de :"<<sum<<endl;
}


void imp(tvector vec,int n){
    int i;
    for(i=1;i<=n;i++){
        if(vec[i]%2!=0){
            cout<<"Posicion :"<<i<<" valor: "<<vec[i]<<endl;
        }
    }
}

