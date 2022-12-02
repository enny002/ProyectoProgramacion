#include <iostream>
#include<cstring>
#include <ctime> 
using namespace std;

//creamos una función o método el cual le llamaremos espaciar que será el que nos permitirá crear espacios para que todo quede correcto, le daremos 2 parámetros de tipo entero el cual le pondremos tamaño y valor ,  la que se llamara "tamaño" llevara el tamaño o longitud del dato que vamos a imprimir en pantalla y  valor será el numero de espacios que le integraremos desde un valor a otro para nuestra columnas .

string espaciar (int tamaño, int valor){

  int espacio = 0;
  string texto = "";
espacio = valor - tamaño;
  for(int i=0; i < espacio; i++){
    texto = texto + " ";

  }
  return texto;
  
}
#include <iostream>
#include<cstring>
using namespace std;






int main() {

float a,b,c;
  
cout << "en este juego te daremos una letra al azar y con esta letra tendras que hallar palabras que inicien con ella, claro que estas palabras no seran cualquier tipo de palabras, ya que tambien te daremos que tipo de palabras debes buscar que inicien con esta letra" << endl; 

  
cout << "si estas listo para jugar presiona 1, si no estas listo presiona 2?";
  cin >> a;
  
  if (a==1){
    
  time_t instanteInicial, instanteFinal;
  instanteInicial = time(0);
  char letraQueIngresan[5];
  int puntaje = 0;
  string objetos[5] = {"ciudad", "Objeto", "animal", "color", "comida"};
  char letra[10];
  
  for (int j = 0; j < 2; j++){
  
  srand(time(NULL));
  for(int i=0; i <= 0; i++){
    letra[i] = 97 + rand() % (97 - 122);
    cout << "jugaras con esta letra: " << letra[i]  << endl;
  }

  cout << "" << endl;
  
  for (int j = 0; j <= 4; j++){
    
    time_t instanteInicial, instanteFinal;
    
    instanteInicial = time(0);
    cout << objetos[j] << endl;
    cout << "Cual es tu palabra?" << endl;
    cin >> letraQueIngresan; 
    cout << "" << endl;
    instanteFinal = time(0);

    cout << "Segundos empleados: " << instanteFinal - instanteInicial << endl;
 
    if (letraQueIngresan[0] == letra[0]){
      puntaje = puntaje + 50;
    }
  
    if (letraQueIngresan[0] != letra[0]){
      puntaje = puntaje - 50; 
    }

  }
    
  cout << "tu puntaje fue de: " << puntaje << endl;
  cout << "" << endl;

    instanteFinal = time(0);
     cout << "Segundos empleados: " << instanteFinal - instanteInicial << endl;
    }

    if (a!=1){
    return 0;
      }


  }
}