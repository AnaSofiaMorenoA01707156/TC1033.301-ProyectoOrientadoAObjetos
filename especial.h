/*
Proyecto de Pensamiento computacional orientado a objetos: "smart-Recylcing :))"
Ana Sofía Moreno Hernández
A01707156
8/11/2024
*/

/*
Clase especial, maneja los atributos y métodos de este tipo de papel y da las recomendaciones para su manejo
*/
#include<string>
#include<iostream> //Bibliotecas

using namespace std;

class especial {
private:
  //Declara las variables de instancia
  string estadoLimpieza, tiempoVida;
  float cantidad;
public:
  //Constructor
  especial(float, string);
  //Destructor
  ~especial();
  //Métodos miembros de la clase
  float get_cantidad();
  string get_tiempoVida();
  string get_estadoLimpieza();
  void recomendaciones();
};

//Regresa el objeto de especial
especial::especial(float cant, string estado){
  estadoLimpieza=estado;
  tiempoVida="de 5 hasta 20 años (depende mucho del tipo de ambiente en el que se encuentre).";
  cantidad=cant;
}

//Destruye el objeto de especial
especial::~especial(){
}

//Abstrae el atributo tiempoVida del objeto
string especial::get_tiempoVida(){
  return tiempoVida;
}

//Abstrae el atributo estadoLimpieza del objeto
string especial::get_estadoLimpieza(){
  return estadoLimpieza;
}

//Abstrae el atributo cantidad del objeto
float especial::get_cantidad(){
  return cantidad;
}

//Imprime las recomendaciones para reciclar o reutilizar el objeto de acuerdo a su atributo estadoLimpieza
void especial::recomendaciones(){
  if(estadoLimpieza=="Bueno"){
    cout<<"Las recomendaciones para el reciclaje o reutilización de papel de este tipo que se encuentra limpio (sin manchas), sin arrugar y con pocos usos son..."<<endl;
  }
  else if(estadoLimpieza=="Decente"){
    cout<<"Las recomendaciones para el reciclaje o reutilización de papel de este tipo que se encuentra limpio, pero arrugado, con muchos dobleces o con +1 uso son.."<<endl;
  }
  else if(estadoLimpieza=="Dudoso"){
    cout<<"Las recomendaciones para el reciclaje o reutilización de papel de este tipo que se encuentra un poco sucio o con pocas manchas, arrugado, con muchos dobleces o con varios usos son.."<<endl;
  }
  else{
    cout<<"Estado de tu papel no válido. Recuerda que las posibles opciones del estado del papel que quieres reciclar o reutilizar son: 'Bueno', 'Decente' o 'Dudoso'."<<endl<<"Recuerda también que si tu papel está demasiado deteriorado o manchado no es posible reciclarlo o reutilizarlo :((";
  }
}
