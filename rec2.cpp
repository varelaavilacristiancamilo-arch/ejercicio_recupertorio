#include <iostream>
using namespace std;
int main () {
    float a,b,s,d;
    cout<<"a cuantos kilometros esta ubicado el destino"<<endl;
    cin>>a;
    cout<<"cual sera la velocidad promedio del camion km/h   "<<endl;
    cin>>b;
    if (b<=0&&a<=0){
        cout<<"la distancia y la velocidad no pueden ser 0 o negativas"<<endl;

    }else{
        
         s=a/b;
        cout<<"---------------tiempo despues------------------"<<endl;
        cout<<"cuanto tiempo lleva conduciendo el camion(horas)"<<endl;
         cin>>d;
         if (d>=s){
            cout<<"el camion ya ha llegado a su destino"<<endl;
            return 0;
            
         }
         cout<<"el camion llegara en "<<s-d<<" horas"<<endl;
         cout<<"le faltan "<<(a-(b*d))  <<" kilometros por recorrer"<<endl;
        return 0;

    }



}