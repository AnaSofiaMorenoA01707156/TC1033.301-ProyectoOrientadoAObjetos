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
public:
  ahorro(float, float, float);
  float get_porUnidad_lig();
  float get_porUnidad_esp();
  float get_porUnidad_pes();
  void ahorroTotal_lig();
  void ahorroTotal_esp();
  void ahorroTotal_pes();
};

ahorro::ahorro(float l, float e, float p){
  porUnidad_lig=l;
  porUnidad_esp=e;
  porUnidad_pes=p;
}


ahorro::float get_porUnidad_lig(){
  return porUnidad_lig;
}


ahorro::float get_porUnidad_esp(){
  return porUnidad_esp;
}


ahorro::float get_porUnidad_pes(){
  return porUnidad_pes;
}

ahorro:: float ahorroTotal_lig(){
  canti=ligero cantidad
  total=canti*porUnidad_lig;
  return total;
}


ahorro:: float ahorroTotal_esp(){
  canti=especial cantidad
  total=canti*porUnidad_esp;
  return total;
}


ahorro:: float ahorroTotal_pes(){
  canti=pesado cantidad
  total=canti*porUnidad_pes;
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
