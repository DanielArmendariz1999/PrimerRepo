#include <iostream>
using namespace std;

class Operaciones{//Clase 1
public:
    void resultado(int a, int b) {//metodo
        cout<<"Suma: "<<suma(a,b)<<"Resta: "<<resta(a,b)<<"Multiplicacion: "<<multiplicacion(a,b);
    }
    int suma(int a,int b){//metodo
        return a+b;
    }
    int resta(int a,int b){//metodo
        return a-b;
    }
    int multiplicacion(int a,int b){//metodo
        return a*b;
    }
};

class Recibir{//Clase 2
private:
    int a;
    int b;
public:
    int numA(){
        cout<<"Ingrese numero 1"<<endl;
        cin>>a;
        return a;
    }
    int numB(){
        cout<<"Ingrese numero 2"<<endl;
        cin>>b;
        return b;
    }
};
int main(){//PRINCIPAL
    int a,b;
    Recibir num;//obj 1
    a=num.numA();//ingresa metodo de la clase Recibir y guarda valor en 'a'
    b=num.numB();//ingresa metodo de la clase Recibir y guarda valor en 'b'
    Operaciones op;//obj 2
    op.resultado(a,b);//ingresa metodo de la clase Operacionescon argumentos, sin retonar nada
}
