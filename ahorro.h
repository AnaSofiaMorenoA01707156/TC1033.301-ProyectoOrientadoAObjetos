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
  ligero ligeros[10];
  especial especiales[10];
  pesado pesados[10];
  int limL=0, limE=0, limP=0;
  float total;
public:
  ahorro(float, float, float);
  float get_porUnidad_lig();
  float get_porUnidad_esp();
  float get_porUnidad_pes();
  void agrega_piezaL(float, int);
  void agrega_piezaE(float, int);
  void agrega_piezaP(float, int);
  float ahorroTotal_lig();
  float ahorroTotal_esp();
  float ahorroTotal_pes();
};

ahorro::ahorro(float l, float e, float p){
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

void ahorro::agrega_piezaL(float cant, int estado){
  ligeros[limL]=ligero(cant, estado);
  limL++;
}

void ahorro::agrega_piezaE(float cant, int estado){
  especiales[limE]=especial(cant, estado);
  limE++;
}

void ahorro::agrega_piezaP(float cant, int estado){
  pesados[limP]=pesado(cant, estado);
  limP++;
}

float ahorro::ahorroTotal_lig(){
  total=ligeros[0].get_cantidad()*porUnidad_lig;
  return total;
}


float ahorro::ahorroTotal_esp(){
  total=especiales[0].get_cantidad()*porUnidad_esp;
  return total;
}


float ahorro::ahorroTotal_pes(){
  total=pesados[0].get_cantidad()*porUnidad_pes;
  return total;
}

class agua: public ahorro{
public:
  agua();
};

agua::agua():ahorro(0.051, 1.2, 128){};

class Energia: public ahorro{
public:
  Energia();
};

Energia::Energia():ahorro(0.017, 3.1, 43.5){};

class Co2: public ahorro{
public:
  Co2();
};

Co2::Co2():ahorro(0.003, 2.81, 7.0){};

#endif
