#include <iostream>
using namespace std;
int main(){
    float temperatura=0.0;

    cout<<"ingrese la temperatura en grados";//MENSAJE PARA EL USUARIO
    cin>>temperatura;// Guardar valor en la variable temperatura
    if(temperatura>25){
       cout<<"temperatura calurosa"<<endl; 
    }else if(temperatura>=10 && temperatura<=25){
        cout<<"temperatura templada"<<endl;
    }else if(temperatura<10){
        cout<<"temperatura fria"<<endl;
    }
        
return 0;
}