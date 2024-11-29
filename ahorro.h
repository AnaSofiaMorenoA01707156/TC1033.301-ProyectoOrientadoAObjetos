/*
Proyecto de Pensamiento computacional orientado a objetos: "smart Paper-recylcing :))"
Ana Sofía Moreno Hernández
A01707156
29/11/2024
*/

//Clase padre de los 3 tipos de ahorro ecológico

#ifndef AHORRO_H_
#define AHORRO_H_

#include<string>
#include<iostream> //Bibliotecas

using namespace std;

class ahorro{
protected:
  //Atributos de la clase, heredados a las clases hijas
  float porGramo;
  float gramos;
  float total;
  string unidad;
public:
  //Constructores de la clase
  ahorro(){}; //default
  ahorro(float, string, float); //con parámetros
  //Métodos de la clase, heredados a las clases hijas
  float get_gramos();
  float get_porGramo();
  string get_unidad();//Getters. No necesita get de gramos porque ya existe uno dentro del objeto de papel.
  void set_gramos(float); //setter
  //No es necesario tener los otros setters puesto que son atributos de las clases hijas que el usuario no puede elegir, son constantes.
  float ahorroTotal();
};

//Constructor definido
ahorro::ahorro(float pG, string uni, float g){
  porGramo=pG;
  unidad=uni;
  gramos=g;
}

//Abstrae el atributo de porGramo que establece cuánto recurso se ahorra por gramo (de cada clase hija)
float ahorro::get_porGramo(){
  return porGramo;
}

float ahorro::get_gramos(){
  return gramos;
}

//Abstrae el atributo de unidad
string ahorro::get_unidad(){
  return unidad;
}

//Calcula y regresa el ahorro total de cada clase hija
float ahorro::ahorroTotal(){
  total=gramos*porGramo;
  return total;
}

void ahorro::set_gramos(float g){
  gramos=g;
}

//Calse hija de "ahorro" (hereda de ahorro): Agua
class Agua: public ahorro{
public:
  //Constructor default. Los constructores utilizan el constructor de ahorro al ser clase hija de esta
  Agua():ahorro(0.0, "", 0.0){};
  //Constructor con parámetros
  Agua(float g):ahorro(26.5, " mililitros de agua ", g){};
};

//Calse hija de "ahorro" (hereda de ahorro): Energia
class Energia: public ahorro{
public:
  //Constructor default. Los constructores utilizan el constructor de ahorro al ser clase hija de esta
  Energia():ahorro(0.0, "", 0.0){};
  //Constructor con parámetros
  Energia(float g):ahorro(4, " watt-horas de energia ", g){};
};

class Co2: public ahorro{
public:
  //Constructor default. Los constructores utilizan el constructor de ahorro al ser clase hija de esta
  Co2():ahorro(0.0, "", 0.0){};
  //Constructor con parámetros
  Co2(float g):ahorro(1.4, " gramos de emisiones de CO2 ", g){};
};

#endif
