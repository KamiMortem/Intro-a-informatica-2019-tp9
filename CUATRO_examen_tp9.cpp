#include<iostream>
#include<stdio.h>
#include<math.h>


typedef int tvector[100];
using namespace std;


void menu(int &op);
void cargar(tvector &vec,int &n);
void mostrar(tvector vec,int n);
void promedio(tvector vec,int n,float &prom);
void superan(tvector vec,int n,float prom);
void maxima(tvector vec,int n);
void solicitar(tvector vec,int n);

main(){
    int op,n;
    float prom;
    tvector vec;

    n=0;

    do{
        menu(op);
        switch (op){
            case 1:cargar(vec,n);
                break;
            case 2:mostrar(vec,n);
                break;
            case 3:promedio(vec,n,prom);
                break;
            case 4:superan(vec,n,prom);
                break;
            case 5:maxima(vec,n);
                break;
            case 6:solicitar(vec,n);
                break;
            case 7:cout<<"Gracias por usarnos"<<endl;
                break;
            default:
                cout<<"Error, ingrese un numero correcto"<<endl<<endl;
        }
    }while(op!=7);

}

void menu(int &op){
    cout<<"------MENU------"<<endl;
    cout<<"1- cargar notas"<<endl;
    cout<<"2- mostrar notas"<<endl;
    cout<<"3- mostrar promedio de notas"<<endl;
    cout<<"4- mostrar notas que superen el promedio y cuantas fueron"<<endl;
    cout<<"5- mostrar nota maxima"<<endl;
    cout<<"6- Solicitar nota y buscar cuantos alumnos la tienen"<<endl;
    cout<<"7- Salir"<<endl;
    cin>>op;
}

void cargar(tvector &vec,int &n){
    char op;
    do{
        n=n+1;
        do{
            cout<<"Ingrese la nota en la posicion :"<<n<<endl;
            cin>>vec[n];
        }while(!(vec[n]>0 && vec[n]<10));
        cout<<"Desea salir? s/n"<<endl;
        cin>>op;
    }while(op!='s');
}

void mostrar(tvector vec,int n){
    int i;
    if(n!=0){
        for(i=1;i<=n-1;i++){
            cout<<"Posicion: "<<i<<" es: "<<vec[i]<<endl;
        }
    }else{
        cout<<"Las notas de los exámenes aún no fueron ingresadas"<<endl;
    }
}

void promedio(tvector vec,int n,float &prom){
    int i,sum;

    sum=0;
    if (n!=0){
        for(i=1;i<=n;i++){
            sum=sum+vec[i];
        }
        prom=sum/(n);
        cout<<"El promedio de las notas es de :"<<prom<<endl<<endl;
    }else{
         cout<<"Las notas de los exámenes aún no fueron ingresadas"<<endl;
    }
}

void superan(tvector vec,int n,float prom){
    int sup=0,i;
    if (n!=0){
        cout<<"Las notas que superan al promedio son:"<<endl;
        for(i=1;i<=n;i++){
            if(vec[i]>prom){
                sup=sup+1;
                cout<<"posicion: "<<i<<" la nota: "<<vec[i]<<endl;
            }
        }
        cout<<"Superan el promedio "<<sup<<" notas"<<endl;
    }else{
        cout<<"Las notas de los exámenes aún no fueron ingresadas"<<endl;
    }
}

void maxima(tvector vec,int n){
    int maxi=0,i;
    if (n!=0){
        for (i=1;i<=n;i++){
            if(maxi<vec[i]){
                maxi=vec[i];
            }
        }
        cout<<"La nota maxima es de: "<<maxi<<endl;
    }else{
        cout<<"Las notas de los exámenes aún no fueron ingresadas"<<endl;
    }
}

void solicitar(tvector vec,int n){
    int i,busc,cont=0;
    if (n!=0){
        cout<<"Escriba la nota a buscar"<<endl;
        cin>>busc;
        for(i=1;i<=n;i++){
            if(vec[i]==busc){
                cont=cont+1;
            }
        }
        cout<<"Obtuvieron "<<cont<<" alumnos, la nota: "<<busc<<endl;
    }else{
        cout<<"Las notas de los exámenes aún no fueron ingresadas"<<endl;
    }
}

