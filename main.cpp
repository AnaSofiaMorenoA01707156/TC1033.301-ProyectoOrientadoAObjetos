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
#include "ahorro.h"

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
  cout<<"1 Bueno: se encuentra limpio (sin manchas), sin arrugar y con pocos usos"<<endl;
  cout<<"2 Decente: se encuentra limpio, pero arrugado, con muchos dobleces o con +1 uso"<<endl;
  cout<<"3 Dudoso: se encuentra un poco sucio o con pocas manchas, arrugado, con muchos dobleces o con varios usos"<<endl;
  cout<<"Revisa bien el papel/cartón. Si está en muy mal estado, no puede ser reciclado o reutilizado :(."<<endl;
  cout<<"Por favor ingresa únicamente el número del estado del papel/cartón mencionadas arriba ('1 Bueno', '2 Decente' o '3 Dudoso')."<<endl;
}

int main(){
  int tipo;
  float cant;
  int estado;
  bool valido, conocer;
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
          cout<<"Tienes papel de tipo ligero. Aproximadamente "<<papel_ligero1.get_cantidad()<<" piezas, en un estado "<<papel_ligero1.get_estadoString()<<"."<<endl;
          cout<<"El tiempo de degradación de este tipo de papel en un vertedero o basurero, junto con muchos residuos, puede ser "<<papel_ligero1.get_tiempoVida()<<endl;
          papel_ligero1.recomendaciones(estado);
          cout<<"¿Deseas conocer el impacto ecológico positivo de reciclar este papel? (El ahorro de agua y de energía, así como de emisiones de CO2)"<<endl<<"Escribe 1 para sí o 0 para no.";
          cin>>conocer;
          if(conocer){
            agua agua1=agua(cant); Energia energia1=Energia(cant); Co2 Co2_1=Co2(cant);
            cout<<"De manera general, por 1 hoja de papel ligero, se ahorran aproximadamente "<<agua1.get_porUnidad_lig()<<" litros, "<<energia1.get_porUnidad_lig()<< " kilovatios x hora y "<<Co2_1.get_porUnidad_lig()<<" kg de emisiones de CO2."<<endl;
            cout<<"Entonces, el reciclar "<<papel_ligero1.get_cantidad()<<"de este papel ahorra "<<agua1.ahorroTotal_lig()<<" litros, "<<energia1.ahorroTotal_lig()<<" kilovatios x hora y "<<Co2_1.ahorroTotal_lig()<<" kg de emisiones de CO2."<<endl;
          }
        break;
      }
      //Caso 2 que crea un objeto de la clase de papel especial y devuelve sus atributos y ejecuta sus métodos
      case 2:{
          valido=false;
          cout<<"Me sería útil conocer el estado del papel.";
          estadosMenu();
          cin>>estado;
          especial papel_especial1 = especial(cant, estado);
          cout<<"Tienes papel de tipo ligero. Aproximadamente "<<papel_especial1.get_cantidad()<<" piezas, en un estado "<<papel_especial1.get_estadoString()<<"."<<endl;
          cout<<"El tiempo de degradación de este tipo de papel en un vertedero o basurero, junto con muchos residuos, puede ser "<<papel_especial1.get_tiempoVida()<<endl;
          papel_especial1.recomendaciones(estado);
          cout<<"¿Deseas conocer el impacto ecológico positivo de reciclar este papel? (El ahorro de agua y de energía, así como de emisiones de CO2)"<<endl<<"Escribe 1 para sí o 0 para no.";
          cin>>conocer;
          if(conocer){
            agua agua2=agua(cant); Energia energia2=Energia(cant); Co2 Co2_2=Co2(cant);
            cout<<"De manera general, por 1 hoja de papel especial, se ahorran aproximadamente "<<agua2.get_porUnidad_lig()<<" litros, "<<energia2.get_porUnidad_lig()<< " kilovatios x hora y "<<Co2_2.get_porUnidad_lig()<<" kg de emisiones de CO2."<<endl;
            cout<<"Entonces, el reciclar"<<papel_especial1.get_cantidad()<<"de este papel ahorra "<<agua2.ahorroTotal_lig()<<" litros, "<<energia2.ahorroTotal_lig()<<" kilovatios x hora y "<<Co2_2.ahorroTotal_lig()<<" kg de emisiones de CO2."<<endl;
            cout<<"Información de acuerdo a la compañía de ecología Steinbeis papier."<<endl;
          }
        break;
      }
      //Caso 3 que crea un objeto de la clase de papel pesado y devuelve sus atributos y ejecuta sus métodos
      case 3:{
          valido=false;
          cout<<"Me sería útil conocer el estado del papel.";
          estadosMenu();
          cin>>estado;
          pesado papel_pesado1 = pesado(cant, estado);
          cout<<"Tienes papel de tipo ligero. Aproximadamente "<<papel_pesado1.get_cantidad()<<" piezas, en un estado "<<papel_pesado1.get_estadoString()<<"."<<endl;
          cout<<"El tiempo de degradación de este tipo de papel en un vertedero o basurero, junto con muchos residuos, puede ser "<<papel_pesado1.get_tiempoVida()<<endl;
          papel_pesado1.recomendaciones(estado);
          cout<<"¿Deseas conocer el impacto ecológico positivo de reciclar este papel? (El ahorro de agua y de energía, así como de emisiones de CO2)"<<endl<<"Escribe 1 para sí o 0 para no.";
          cin>>conocer;
          if(conocer){
            agua agua3=agua(cant); Energia energia3=Energia(cant); Co2 Co2_3=Co2(cant);
            cout<<"De manera general, por 1 hoja de papel especial, se ahorran aproximadamente "<<agua3.get_porUnidad_lig()<<" litros, "<<energia3.get_porUnidad_lig()<< " kilovatios x hora y "<<Co2_3.get_porUnidad_lig()<<" kg de emisiones de CO2."<<endl;
            cout<<"Entonces, el reciclar"<<papel_pesado1.get_cantidad()<<"de este papel ahorra "<<agua3.ahorroTotal_lig()<<" litros, "<<energia3.ahorroTotal_lig()<<" kilovatios x hora y "<<Co2_3.ahorroTotal_lig()<<" kg de emisiones de CO2."<<endl;
            cout<<"Información de acuerdo a la compañía de ecología Steinbeis papier."<<endl;
          }
        break;
      }
      //Si el usuario ingresa un valor que no está dentro de las opciones del menú se ejecuta el default con el mensaje y se regresa a ejecutar el loop para volver a pedir al usuario una opción válida
      default:
          cout<<"Opción no válida. Inténtalo de nuevo."<<endl;
    }
  }
    //Ciclo do-while para que el usuario pueda elegir un tipo de papel o cartón válido dentro de las opciones del programa para que este corra (se repite si el usuario ingresa una opción inválida)
  while(valido);
  return 0;
}
