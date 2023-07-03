#include <iostream>
using namespace std;

class ArregloD{
private:
	int*arreglo;//apuntador
	int tamanio;
public:
	ArregloD(int tam){
	tamanio=tam;
	arreglo=new int[tamanio];
}
void ingresa(){
	cout<<"Ingresa valores del array"<<endl;
	for(int i=0;i<tamanio;i++){
		cout<<"valor "<<i;
		cin>>arreglo[i];
	}
}
void imprimir(){
    cout<<"Valores \n";
    for(int i=0;i<tamanio;i++){
		cout<<arreglo[i]<<endl;
	}
}
void modifica(){
    int op,pos,num;
    cout<<"Desea modificar algun umero?\n1-SI\n2-NO " <<endl;
    cin>>op;
    if(op==1){
        cout<<"Que posicion se modificara? " <<endl;
        cin>>pos;
        cout<<"Numero a cambiar " <<endl;
        cin>>num;
        arreglo[pos]=num;
        cout<<"Modificacion " <<endl;
        imprimir();
    }else if(op==2){
        imprimir();
    }
}

};

int main(){
int tamanio;
cout<<"Ingresa el tamanio del arreglo" <<endl;
cin>>tamanio;
ArregloD* miArreglo = new ArregloD(tamanio);
miArreglo->ingresa();
miArreglo->imprimir();
miArreglo->modifica();//simbolo es operador acceso, modifica
}