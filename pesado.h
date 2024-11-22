/*
Proyecto de Pensamiento computacional orientado a objetos: "smart-Recylcing :))"
Ana Sofía Moreno Hernández
A01707156
8/11/2024
*/

/*
Clase pesado, maneja los atributos y métodos de este tipo de papel y da las recomendaciones para su manejo
*/

#ifndef PESADO_H_
#define PESADO_H_

#include "papel.h"
#include<string>
#include<iostream> //Bibliotecas

using namespace std;

class pesado: public papel {
public:
  //Constructor
  pesado(float, int);
  void recomendaciones(int);
};

//Regresa el objeto de pesado
pesado::pesado(float cant, int estado):papel(cant, estado, "alrededor de 5 años."){}

//Imprime las recomendaciones para reciclar o reutilizar el objeto de acuerdo a su atributo estadoLimpieza
void pesado::recomendaciones(int est){
  switch(est){
    case 1:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo pesado que se encuentra limpio (sin manchas), sin arrugar y con pocos usos son..."<<endl;
      break;
    }
    case 2:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo pesado que se encuentra limpio, pero arrugado, con muchos dobleces o con +1 uso son.."<<endl;
      break;
    }
    case 3:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo pesado que se encuentra un poco sucio o con pocas manchas, arrugado, con muchos dobleces o con varios usos son.."<<endl;
      break;
    }
    default:
      cout<<"Estado de tu papel no válido. Recuerda que las posibles opciones del estado del papel que quieres reciclar o reutilizar son: 'Bueno', 'Decente' o 'Dudoso'."<<endl<<"Recuerda también que si tu papel está demasiado deteriorado o manchado no es posible reciclarlo o reutilizarlo :((";
  }
}

#endif
