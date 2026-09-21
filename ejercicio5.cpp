#include <iostream>
using namespace std;
int main(){
    float monto=0.0;
    float desc=0.0;
    float total=0.0;


    cout<<"ingrese monto de la compra";//MENSAJE PARA EL USUARIO
    cin>>monto;// Guardar valor en la variable monto
    if(monto>=100 && monto<200){
        desc=monto*0.10;
        total=monto-desc;
    }else if(monto>200){
        desc=monto*0.20;
        total=monto-desc;
    }else if(monto<100){
        cout<<"Sin descuento"<<endl;
    }

    return 0;
}