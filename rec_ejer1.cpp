#include <iostream>
using namespace std;
void productos(){
    int c;
    cout<<"cantidad de productos "<<endl;
    cin>>c;
    if (c<0){
        cout<<"vuelva pronto"<<endl;
    }
    else{
        string pro[c];
        float pre[c],total=0;
        for (int i=0;i<c;i++){
            cout<<"nombre del producto "<<i+1<<endl;
            cin>>pro[i];
            cout<<"precio del producto "<<i+1<<endl;
            cin>>pre[i];
            total+=pre[i];
        }
        cout<<"el total a pagar es "<<total<<endl;
    }
}
int main (){
    bool reg;
    string f;
    cout<<"bienvenido a la calculadora de productos"<<endl;
    cout<<"desea registrar productos s/n "<<endl;
    cin>>f;
    if (f=="n"){
        reg=false;
    }
    if(f=="s"){
        reg=true;
    }
    
    if (reg){
        productos();
    
    }else{
        cout<<"vuelva pronto"<<endl;
    }
}