/*
Proyecto de Pensamiento computacional orientado a objetos: "smart Paper-recylcing :))"
Ana Sofía Moreno Hernández
A01707156
29/11/2024
*/

//Clase papel

#ifndef PAPEL_H_
#define PAPEL_H_

#include<string>
#include<iostream> //Bibliotecas
//La clase recibe como componentes (composición) los objetos de las clases hijas de ahorro: Agua, Energía y Co2, por lo que necesita incluir el archivo donde están definidas
#include "ahorro.h"

using namespace std;

class papel {
protected:
  //Declara las variables de instancia de la clase "papel"
  int estadoLimpieza;
  int tipo;
  //Recibe objetos de las clases componentes Agua, Energia y Co2
  Agua ahorroAgua;
  Energia ahorroEnergia;
  Co2 ahorroCo2;
public:
  //constructores
  papel(){}; //default
  papel(int, int); //con parámetros
  //Métodos miembros de la clase
  int get_tipo();
  int get_estadoLimpieza();//getters
  //Devuelve un string correspondiente del estado del papel
  string estadoString();
  string tipoString();
  void set_tipo(int);
  void set_estadoLimpieza(int); //setters
  void recomendaciones();
  //Métodos que utilizan (llaman y crean indirectamente) objetos de las clases componentes
  void agrega_Ahorros(float);
  void imprime_Ahorros();
};

//Cosntructor definido
papel::papel(int tip, int estado){
  tipo=tip;
  estadoLimpieza=estado;
}

//Abstrae el atributo gramos del objeto
int papel::get_tipo(){
  return tipo;
}

int papel::get_estadoLimpieza(){
  return estadoLimpieza;
}

string papel::tipoString(){
  if(tipo==1){
    return " papel de oficina o de uso cotidiano ";
  }
  else if(tipo==2){
    return " carton ";
  }
  else{
    return "no valido (no esta dentro de las opciones)";
  }
}

//Regresa el atributo estadoLimpieza del objeto, pero en forma de un string que pueda ser leído por el usuario
string papel::estadoString(){
  if(estadoLimpieza==1){
    return "bueno";
  }
  else if(estadoLimpieza==2){
    return "decente";
  }
  else if(estadoLimpieza==3){
    return "dudoso";
  }
  else{
    return "no valido (no esta dentro de las opciones)";
  }
}

void papel::set_tipo(int t){
  tipo=t;
}

void papel::set_estadoLimpieza(int e){
  estadoLimpieza=e;
}

//Agrega a la composición de la clase contenedora objetos de las clases componentes al llamar a su contructor con el float de los gramos de papel que este necesita
void papel::agrega_Ahorros(float gramos){
  ahorroAgua=Agua(gramos);
  ahorroEnergia=Energia(gramos);
  ahorroCo2=Co2(gramos);
}

void papel::recomendaciones(){
  switch(estadoLimpieza){
    case 1:{
      cout<<"\n\nLas recomendaciones para el reciclaje o reutilizacion de papel que se encuentra limpio (sin manchas), sin arrugar y con pocos usos son..."<<endl;
      break;
    }
    case 2:{
      cout<<"\n\nLas recomendaciones para el reciclaje o reutilizacion de papel que se encuentra limpio, pero arrugado, con muchos dobleces o con +1 uso son..."<<endl;
      break;
    }
    case 3:{
      cout<<"\n\nLas recomendaciones para el reciclaje o reutilizacion de papel que se encuentra sucio o con pocas manchas, arrugado, con muchos dobleces o con varios usos son..."<<endl;
      break;
    }
    default:
      cout<<"\n\nEl estado de tu papel no es valido. Recuerda que las posibles opciones del estado del papel que quieres reciclar o reutilizar son: 'Bueno', 'Decente' o 'Dudoso'."<<endl<<"Recuerda tambien que si tu papel esta demasiado deteriorado o manchado no es posible reciclarlo o reutilizarlo :((";
  }
}

//Imprime en el programa la información de ecología sobre el reciclaje del papel haciendo uso de los objetos recibidos de las clases componentes y sus métodos
void papel::imprime_Ahorros(){
  cout<<"\n\nPor gramo de papel reciclado, se ahorran aproximadamente "<<ahorroAgua.get_porGramo()<<ahorroAgua.get_unidad()<<"."<<endl;
  cout<<"Entonces, al reciclar este papel de "<<ahorroAgua.get_gramos()<<" gramos, hay un ahorro de "<<ahorroAgua.ahorroTotal()<<ahorroAgua.get_unidad()<<"."<<endl;
  cout<<"Por gramo de papel reciclado, se ahorran aproximadamente "<<ahorroEnergia.get_porGramo()<<ahorroEnergia.get_unidad()<<"."<<endl;
  cout<<"Entonces, al reciclar este papel de "<<ahorroEnergia.get_gramos()<<" gramos, hay un ahorro de "<<ahorroEnergia.ahorroTotal()<<ahorroEnergia.get_unidad()<<"."<<endl;
  cout<<"Por gramo de papel reciclado, se ahorran aproximadamente "<<ahorroCo2.get_porGramo()<<ahorroCo2.get_unidad()<<"."<<endl;
  cout<<"Entonces, al reciclar este papel de "<<ahorroCo2.get_gramos()<<" gramos, hay un ahorro de "<<ahorroCo2.ahorroTotal()<<ahorroCo2.get_unidad()<<"."<<endl;
}

#endif
