/*Ejercicio #1: Realice un algoritmo para determinar cuánto pagará una persona en una tienda por un
artículo, considerando que tiene un descuento del 20% cuando se compran dos o más ejemplares
del artículo. Recuerde calcular el 15% de I.V.A (Impuesto al Valor Agregado), el subtotal y el total a
pagar.
*/
#include <iostream>


using namespace std;


void eje1()
{
    float total, descuento, subtotal, precioiva, producto, preciodesc, precio;
    cout << "ingrese la cantidad de productos: " << endl;
    cin >> producto;
    cout << "ingrese el precio del producto: " << endl;
    cin >> precio;
    if (producto >= 2)
    {
        precioiva = precio * 0.15;
        subtotal = precioiva + precio;
        cout << "sumando el iva es: " << subtotal << endl;
        preciodesc = subtotal * 0.20;
        total = subtotal - preciodesc;
        cout << "el total aplicando el descuento es: " << total << endl;
    }
    else
    {
        cout << "no se le aplica descuento" << endl;
    }
}