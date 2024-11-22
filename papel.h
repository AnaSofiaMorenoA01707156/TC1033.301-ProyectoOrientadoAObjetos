/*
Proyecto de Pensamiento computacional orientado a objetos: "smart-Recylcing :))"
Ana Sofía Moreno Hernández
A01707156
8/11/2024
*/

//Clase padre de los 3 tipos de papel

#ifndef PAPEL_H_
#define PAPEL_H_

#include<string>
#include<iostream> //Bibliotecas

using namespace std;

class papel {
private:
  //Declara las variables de instancia
  string tiempoVida;
  int estadoLimpieza;
  float cantidad;
  string estadoString;
public:
  //Constructor
  papel(float, int, string);
  //Métodos miembros de la clase
  float get_cantidad();
  string get_tiempoVida();
  string get_estadoString();
};

//Regresa el objeto de especial
papel::papel(float cant, int estado, string tiempo){
  estadoLimpieza=estado;
  cantidad=cant;
  tiempoVida=tiempo;
}

//Abstrae el atributo tiempoVida del objeto
string papel::get_tiempoVida(){
  return tiempoVida;
}

//Abstrae el atributo estadoLimpieza del objeto
string papel::get_estadoString(){
  if(estadoLimpieza==1){
    return "bueno";
  }
  else if(estadoLimpieza==2){
    return "decente";
  }
  else if(estadoLimpieza==1){
    return "dudoso";
  }
}

//Abstrae el atributo cantidad del objeto
float papel::get_cantidad(){
  return cantidad;
}

#endif
