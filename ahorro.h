/*
Proyecto de Pensamiento computacional orientado a objetos: "smart-Recylcing :))"
Ana Sofía Moreno Hernández
A01707156
8/11/2024
*/

//Clase padre de los 3 tipos de ahorro ecológico

#ifndef AHORRO_H_
#define AHORRO_H_

#include<string>
#include<iostream>
#include "ligero.h" //Bibliotecas
#include "especial.h"
#include "pesado.h"

using namespace std;

class ahorro{
protected:
  float porUnidad_lig;
  float porUnidad_esp;
  float porUnidad_pes;
  float cantidad;
  float total;
public:
  ahorro(float, float, float, float);
  float get_porUnidad_lig();
  float get_porUnidad_esp();
  float get_porUnidad_pes();
  float ahorroTotal_lig();
  float ahorroTotal_esp();
  float ahorroTotal_pes();
};

ahorro::ahorro(float c, float l, float e, float p){
  cantidad=c;
  porUnidad_lig=l;
  porUnidad_esp=e;
  porUnidad_pes=p;
}


float ahorro::get_porUnidad_lig(){
  return porUnidad_lig;
}


float ahorro::get_porUnidad_esp(){
  return porUnidad_esp;
}


float ahorro::get_porUnidad_pes(){
  return porUnidad_pes;
}

float ahorro::ahorroTotal_lig(){
  total=cantidad*porUnidad_lig;
  return total;
}


float ahorro::ahorroTotal_esp(){
  total=cantidad*porUnidad_esp;
  return total;
}


float ahorro::ahorroTotal_pes(){
  total=cantidad*porUnidad_pes;
  return total;
}

class agua: public ahorro{
public:
  agua(float);
};

agua::agua(float c):ahorro(c, 0.051, 1.2, 128){};

class Energia: public ahorro{
public:
  Energia(float);
};

Energia::Energia(float c):ahorro(c, 0.017, 3.1, 43.5){};

class Co2: public ahorro{
public:
  Co2(float);
};

Co2::Co2(float c):ahorro(c, 0.003, 2.81, 7.0){};

#endif
