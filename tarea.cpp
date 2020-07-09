#include<iostream>
using namespace std;
int main()
{
    int tipodecliente;
    double cantidad, precio, subtotal=0, descuento=0, totalpagar=0;


    
    cout<<" ingrese el tipo de cliene  ";
    cin >> tipodecliente;
    cout<<"ingrese la cantidad:   ";
    cin>> cantidad;
    cout<< "ingrese el precio   ";
    cin >>precio;
    subtotal=cantidad*precio;
    //si el subtotal=>1000 y tipo de cliente==1 entonces el descuento = subtotal*0.1
    //si el subtotal=>10000 y tipo de cliente==1 entonces el descuento = subtotal*0.15
    if ((subtotal>1000)&&(tipodecliente==1))
    {
        descuento=subtotal*0.1;
        totalpagar=subtotal-descuento;
 
    }
    else if ((subtotal>10000)&&(tipodecliente==2))
    {
        descuento=subtotal*0.15;
        totalpagar=subtotal-descuento;
        
    }
    else
    {
        descuento=subtotal*0;
        totalpagar=subtotal-descuento;
    
    }
      cout <<"subtotal es de  "<< subtotal << endl;
        cout<<"su descuento es de  "<< descuento << endl;
        cout <<" su total a pagar es de  "<< totalpagar;
    
    return 0;
}
