/*
Proyecto de Pensamiento computacional orientado a objetos: "smart-Recylcing :))"
Ana Sofía Moreno Hernández
A01707156
8/11/2024
*/

//Bibliotecas
#include<iostream>
#include<string>
//Archivos de las clases que uiliza el programa principal
#include "ligero.h"
#include "especial.h"
#include "pesado.h"

using namespace std;

//Menú que despliega las 3 clases de objetos con las que cuenta el programa (tipos de papel o cartón para reciclar), de las que el usuario puede elegir
void tiposMenu(){
  cout<<"1) Ligero: papel regular de menos de 80g x metro cuadrado, como documentos de oficina, hojas de cuadernos, etc."<<endl;
  cout<<"2) Especial: papel de peso medio (80-150g x metro cuadrado), brillante o para usos más específicos, como revistas, pósters, fotografías, volantes, etc."<<endl;
  cout<<"3) Pesado: principalmente cartón, de más de 200g x metro cuadrado"<<endl;
  cout<<"Por favor ingresa únicamente el número del tipo de papel de los anteriores del que deseas saber: ";
}

//Menú que despliega los posibles estados del papel o cartón a reciclar o reutilizar que puede elegir el usuario
void estadosMenu(){
  cout<<"Los estados y la limpieza del papel/cartón que se puede reciclar son los siguientes: "<<endl;
  cout<<"- Bueno: se encuentra limpio (sin manchas), sin arrugar y con pocos usos"<<endl;
  cout<<"- Decente: se encuentra limpio, pero arrugado, con muchos dobleces o con +1 uso"<<endl;
  cout<<"- Dudoso: se encuentra un poco sucio o con pocas manchas, arrugado, con muchos dobleces o con varios usos"<<endl;
  cout<<"Revisa bien el papel/cartón. Si está en muy mal estado, no puede ser reciclado o reutilizado :(."<<endl;
  cout<<"Copia y escribe una de las opciones del estado del papel/cartón mencionadas arriba ('Bueno', 'Decente' o 'Dudoso')."<<endl;
}

int main(){
  int tipo;
  float cant;
  string estado;
  bool valido;
  cout<<"Bienvenido a smart-Paper Recycling"<<endl;
  cout<<"¿Aproximadamente cuántas unidades de papel o cartón (puede ser con decimal) tienes para reciclar o reutilizar?"<<endl;
  cin>>cant;
  valido=true;
  //Ciclo do-while para que el usuario pueda elegir un tipo de papel o cartón válido dentro de las opciones del programa para que este corra (se repite si el usuario ingresa una opción inválida)
  do{
    cout<<"¿Sobre qué tipo de papel/cartón deseas informarte y recibir consejos para su reciclaje o reutilización? Hay los siguientes..."<<endl;
    //Impresión del menú de opciones de papel o cartón (clases)
    tiposMenu();
    //Ingreso y registro de la selección de tipo de papel o cartón del usuario
    cin>>tipo;
    //Switch para que el código corra utilizando el tipo de clase (objeto) seleccionado por el usuario
    switch(tipo){
      //Caso 1 que crea un objeto de la clase de papel ligero y devuelve sus atributos y ejecuta sus métodos
      case 1:{
          valido=false;
          cout<<"Me sería útil conocer el estado del papel.";
          estadosMenu();
          cin>>estado;
          ligero papel_ligero1 = ligero(cant, estado);
          cout<<"Tienes papel de tipo ligero. Aproximadamente "<<papel_ligero1.get_cantidad()<<" piezas, en un estado "<<papel_ligero1.get_estadoLimpieza()<<"."<<endl;
          cout<<"El tiempo de degradación de este tipo de papel en un vertedero o basurero, junto con muchos residuos, puede ser "<<papel_ligero1.get_tiempoVida()<<endl;
          papel_ligero1.recomendaciones();
        break;
      }
      //Caso 2 que crea un objeto de la clase de papel especial y devuelve sus atributos y ejecuta sus métodos
      case 2:{
          valido=false;
          cout<<"Me sería útil conocer el estado del papel.";
          estadosMenu();
          cin>>estado;
          especial papel_especial1 = especial(cant, estado);
          cout<<"Tienes papel de tipo ligero. Aproximadamente "<<papel_especial1.get_cantidad()<<" piezas, en un estado "<<papel_especial1.get_estadoLimpieza()<<"."<<endl;
          cout<<"El tiempo de degradación de este tipo de papel en un vertedero o basurero, junto con muchos residuos, puede ser "<<papel_especial1.get_tiempoVida()<<endl;
          papel_especial1.recomendaciones();
        break;
      }
      //Caso 3 que crea un objeto de la clase de papel pesado y devuelve sus atributos y ejecuta sus métodos
      case 3:{
          valido=false;
          cout<<"Me sería útil conocer el estado del papel.";
          estadosMenu();
          cin>>estado;
          pesado papel_pesado1 = pesado(cant, estado);
          cout<<"Tienes papel de tipo ligero. Aproximadamente "<<papel_pesado1.get_cantidad()<<" piezas, en un estado "<<papel_pesado1.get_estadoLimpieza()<<"."<<endl;
          cout<<"El tiempo de degradación de este tipo de papel en un vertedero o basurero, junto con muchos residuos, puede ser "<<papel_pesado1.get_tiempoVida()<<endl;
          papel_pesado1.recomendaciones();
        break;
      }
      //Si el usuario ingresa un valor que no está dentro de las opciones del menú se ejecuta el default con el mensaje y se regresa a ejecutar el loop para volver a pedir al usuario una opción válida
      default:
          cout<<"Opción no válida. Inténtalo de nuevo."<<endl;
    }
  }
    //Ciclo do-while para que el usuario pueda elegir un tipo de papel o cartón válido dentro de las opciones del programa para que este corra (se repite si el usuario ingresa una opción inválida)
  while(valido);
}
