#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main (){
    int arreglo[10];
    int indice=0;
    int contador=0;
    int cOchos=0;
    bool encontrado=false;
    srand(time(NULL));

    /*a) Implementar un programa que genere 10 (diez) números aleatorios del tipo entero. Cada valor generado 
    será almacenado en cada posición del arreglo.
    La función que permite generar valores aleatorios es: rand() % 10;
    Indicar que valores genera la función rand() % 10.*/

    for (int i=0;i<10;i++){
        arreglo[i]=rand()%10+1;
        cout << arreglo[i]<<", ";
    }
    cout << endl;

    /* b) En el arreglo completo, realizar el algoritmo de búsqueda que permita buscar el número “8” en el 
     arreglo. Si lo encuentra, deberá devolver “encontrado” en consola. Realizarlo utilizando una variable del
     tipo booleana, para que una vez que lo encuentre, no vuelva a entrar al bucle. A su vez, para su 
     resolución pueden utilizar condicionales. Si no encuentra ningún valor, no es necesario hacer código. */
    
     while(indice<10){
        if (arreglo[indice]==8){
           encontrado=true;
           cout << "Se encontro un 8"<<endl;
           indice++;
        }else{
            indice++;
        }
    }

   /* c) En el arreglo completo, realizar el algoritmo de búsqueda, que permita buscar “todos” los números
    de valor iguales a “8” en el arreglo. Si lo encuentra, deberá contar cuántos encontró en el arreglo y 
    deberán mostrar la cantidad total de encontrados en consola. Pueden utilizar condicionales. Si no 
    encuentra ningún valor, no es necesario hacer código. Finalmente, hacer la traza para los 4 primeros 
    valores del arreglo. */

    while(contador<10){
        for (int i=0; i < 10;i++){
            if (arreglo[i]==8){
                encontrado=true;
                cout << "El numero fue encontrado" << endl;
                cOchos++;
            }
            contador++;
        }
    }
    

    if (encontrado==true){
        cout << "Se encontraron "<< cOchos << " ochos";
    }
}