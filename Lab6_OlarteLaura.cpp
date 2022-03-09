#include <iostream>
using namespace std;
void suma(double x, double y, double &p){ //Se crea una función de suma
    //cout<<q<<endl;
    //cout<<*q<<endl;
  p=x+y;
}
int main(){
  double a=2;
  double*p; //* brinda el valor guardado en la posición de memoria
  p=&a; //& brinda la posición de memoria
  cout<<*p<<endl;
  cout<<*(&a)<<endl;
  cout<<&a<<endl;
  double b[2][3]={{1,2,3},{4,5,6}};//Se ingresan los valores
  cout<<a<<endl;
  cout<<b[0][0]<<endl;
  cout<<&b[0][0]<<endl;
  double *q;
  q=&b[0][0]; //Se crea una variable para poder operarla
  cout<<"Posición de memoria de b"<<endl;
  for(int i=0;i<6;i++){//Recorrido entre todo el elemento
    //for(j=0;j<3;j++){
    cout<<q<<endl;
    cout<<*q<<endl;
      q++; //Se sube al siguiente puesto
  }
  cout<<"Tamaño de 0x7ffe69fb72a0:"<<sizeof(0x7ffe69fb72a0)<<endl; //Con esta se calcula el tamaño del número que se da
  //Ejemplo con una función
  double x=1, y=3,z;//Se asignan las variables para la suma
  suma(x,y,z); // Se suma
  cout<<"z="<<z<<endl;
  return 0;
}