/*
Proyecto de Pensamiento computacional orientado a objetos: "smart-Recylcing :))"
Ana Sofía Moreno Hernández
A01707156
8/11/2024
*/

/*
Clase especial, maneja los atributos y métodos de este tipo de papel y da las recomendaciones para su manejo
*/

#ifndef ESPECIAL_H_
#define ESPECIAL_H_

#include "papel.h"
#include<string>
#include<iostream> //Bibliotecas

using namespace std;

class especial: public papel {
public:
  //Constructores
  especial():papel(0.0, 0, ""){};
  especial(float, int);
  void recomendaciones(int);
};

//Regresa el objeto de especial
especial::especial(float cant, int estado):papel(cant, estado, "de 5 hasta 20 años (depende mucho del tipo de ambiente en el que se encuentre)."){
};

//Imprime las recomendaciones para reciclar o reutilizar el objeto de acuerdo a su atributo estadoLimpieza
void especial::recomendaciones(int est){
  switch(est){
    case 1:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo especial que se encuentra limpio (sin manchas), sin arrugar y con pocos usos son..."<<endl;
      break;
    }
    case 2:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo especial que se encuentra limpio, pero arrugado, con muchos dobleces o con +1 uso son.."<<endl;
      break;
    }
    case 3:{
      cout<<"Las recomendaciones para el reciclaje o reutilización de papel de tipo especial que se encuentra un poco sucio o con pocas manchas, arrugado, con muchos dobleces o con varios usos son.."<<endl;
      break;
    }
    default:
      cout<<"El estado de tu papel no es válido. Recuerda que las posibles opciones del estado del papel que quieres reciclar o reutilizar son: 'Bueno', 'Decente' o 'Dudoso'."<<endl<<"Recuerda también que si tu papel está demasiado deteriorado o manchado no es posible reciclarlo o reutilizarlo :((";
  }
}

#endif
