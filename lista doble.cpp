#include <iostream>
#include <conio.h>
using namespace std;


struct Nodo{
	int valor;
	Nodo *anterior, *siguiente;
};
void agregar( int);
void mostrar();
void mostar_atras();
struct Nodo *lista=NULL;

int main(int argc, char** argv) {
	int opc, dt,n;
	while(opc!=3){
	
	cout<<"   MENU "<<endl;
	cout<<"1.- Ingresar nodos"<<endl;
	cout<<"2.- Mostrar los datos ingresados"<<endl;
	cout<<"3.- Salir"<<endl;
	cin>>opc;
	switch (opc){
        case 1:
        	cout<<"inserte el numero de nodos: ";
        	cin>>n;
        	for (int i=1;i<=n;i++){
			
        	cout<<"ingrese el valor de los datos "<<endl;
        	cin>>dt;
        	cout<<endl;
        	agregar(dt);
        }
			break;
        case 2:
            cout<<"Mostrar datos";
            cout<<endl;
            mostrar();
            cout<<endl;
            mostar_atras();
            cout<<endl;
            break;
        case 3:
        	cout<<"Salir";
            break;
    }
}
	
	 return 0;
}
void agregar(int dt)
{
	Nodo *nuevo= new Nodo;
	nuevo->siguiente=NULL;
	nuevo->anterior=NULL;
	nuevo->valor=dt;
	if(lista==NULL)lista=nuevo;
	else{
		Nodo *aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
		nuevo->anterior=aux;
		
	}
	
}
void mostrar(){
	Nodo *aux=lista;
	while(aux!=NULL){
		cout<<aux->valor<<" -> ";
		aux=aux->siguiente;
	}
	cout<<endl;
}
void mostar_atras()
{
		Nodo *aux=lista;
	while(aux->siguiente!=NULL){
		aux=aux->siguiente;	
	}
	while(aux!=NULL){
		cout<<aux->valor<<" -> ";
		aux=aux->anterior;	
	}
	cout<<endl;
}
