/*
Proyecto de Pensamiento computacional orientado a objetos: "smart-Recylcing :))"
Ana Sofía Moreno Hernández
A01707156
8/11/2024
*/

/*
Clase ligero, maneja los atributos y métodos de este tipo de papel y da las recomendaciones para su manejo
*/

#ifndef LIGERO_H_
#define LIGERO_H_

#include "papel.h"
#include<string>
#include<iostream> //Bibliotecas

using namespace std;

class ligero: public papel {
public:
  //Constructores
  ligero(): papel(0.0, 0, ""){};
  ligero(float, int);
  void recomendaciones(int);
};

//Regresa el objeto de ligero
ligero::ligero(float cant, int estado):papel(cant, estado, "de medio año a 5 años."){};

//Imprime las recomendaciones para reciclar o reutilizar el objeto de acuerdo a su atributo estadoLimpieza
void ligero::recomendaciones(int est){
  switch(est){
    case 1:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo ligero que se encuentra limpio (sin manchas), sin arrugar y con pocos usos son..."<<endl;
      break;
    }
    case 2:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo ligero que se encuentra limpio, pero arrugado, con muchos dobleces o con +1 uso son.."<<endl;
      break;
    }
    case 3:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo ligero que se encuentra un poco sucio o con pocas manchas, arrugado, con muchos dobleces o con varios usos son.."<<endl;
      break;
    }
    default:
      cout<<"El estado de tu papel no es válido. Recuerda que las posibles opciones del estado del papel que quieres reciclar o reutilizar son: 'Bueno', 'Decente' o 'Dudoso'."<<endl<<"Recuerda también que si tu papel está demasiado deteriorado o manchado no es posible reciclarlo o reutilizarlo :((";
  }
}

#endif
