/*
Proyecto de Pensamiento computacional orientado a objetos: "smart Paper-recylcing :))"
Ana Sofia Moreno Hernandez
A01707156
29/11/2024
*/

//Bibliotecas
#include<iostream>
#include<string>
//Archivos de las clases que uiliza el programa principal
#include "papel.h"
#include "ahorro.h"

using namespace std;

//Menu que despliega los posibles estados del papel o carton a reciclar o reutilizar que puede elegir el usuario
void estadosMenu(){
  cout<<"\nLos estados y la limpieza del papel/carton que se puede reciclar son los siguientes: "<<endl;
  cout<<"1 Bueno: se encuentra limpio (sin manchas), sin arrugar y con pocos usos"<<endl;
  cout<<"2 Decente: se encuentra limpio, pero arrugado, con muchos dobleces o con +1 uso"<<endl;
  cout<<"3 Dudoso: se encuentra un poco sucio o con pocas manchas, arrugado, con muchos dobleces o con varios usos"<<endl;
  cout<<"Revisa bien el papel/carton. Si esta en muy mal estado, no puede ser reciclado o reutilizado :(."<<endl;
  cout<<"\nPor favor ingresa unicamente el numero del estado del papel/carton mencionadas arriba ('1 Bueno', '2 Decente' o '3 Dudoso'): ";
}

int main(){
  float gramos;
  int estado;
  bool cambioG, cambioE;
  cout<<"\nBienvenido a smart-Paper Recycling! :))"<<endl;
  cout<<"\n\nAproximadamente cuantos gramos de papel o carton (puede ser con decimal) tienes para reciclar o reutilizar?"<<endl;
  cin>>gramos;
  cout<<"\nMe seria util conocer el estado del papel..."<<endl;
  estadosMenu();
  //El usuario ingresa una de las opciones dadas para describir el estado de su papel
  cin>>estado;
  //Creación de objeto papel
  papel papel1 = papel(gramos, estado);
  //Imprime la información sobre el papel en cuestión usando los atributos de papel
  cout<<"\n\n\nTienes aproximadamente "<<papel1.get_gramos()<<" gramos de papel, en un estado "<<papel1.get_estadoLimpieza()<<" "<<papel1.estadoString()<<"."<<endl;
  cout<<"Ahora te recomendare como reciclar tu papel con base en su estado. \nDeseas cambiar el estado del papel para evaluar las recomendaciones para su reciclaje?"<<endl<<"Escribe 1 para si o 0 para no: ";
  cin>>cambioE;
  if(cambioE){
    estadosMenu();
    cin>>estado;
    papel1.set_estadoLimpieza(estado);
  }
  papel1.recomendaciones();

  cout<<"\nAhora te mostrare el impacto ecologico positivo de reciclar este papel. Es decir, el ahorro aproximado de agua y de energia al reciclarlo, asi como el aproximado de CO2 no emitido."<<endl;
  cout<<"Deseas cambiar los gramos de papel para la evaluacion?"<<endl<<"Escribe 1 para si o 0 para no: ";
  cin>>cambioG;
  if(cambioG){
    //El usuario ingresa los gramos aproximados de su papel para poder proporcionar la información
    cout<<"\nGramos de papel: ";
    cin>>gramos;
    papel1.set_gramos(gramos);
  }
  //Se utilizan los métodos del papel que usan (composición) un objeto de las clases hijas de ahorro
  papel1.agrega_Ahorros();
  papel1.imprime_Ahorros();
  //Método de que utiliza los objetos de composición para poder imprimir la información de ahorros ecológicos.
  cout<<"(Informacion de acuerdo a la compania de ecologia Steinbeis papier)."<<endl;
  cout<<"\n\nGracias por usar smart-Paper Recycling. Hasta luego!\n";
  return 0;
}
