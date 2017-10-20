#include <iostream>

using namespace std;

//Prototipo
int sumaprimos(int);


int main(){
    string respuesta;
    int opcion = 0;
    cout<<"______Menu______"<<endl;
    do{
        cout<<"1. Ejercicio #1 Primos"<<endl
        <<"2. Ejercicio #2 Suma de multiplos"<<endl
        <<"3. Ejercicio #3 Conjetura de Goldbach"<<endl
        <<"Ingrese opcion:";
        cin>>opcion;
        switch(opcion){
	    case 1:{
		int numero;	   
	        cout<<" - Ejercicio#1 - "<<endl
                <<"Ingrese numero: ";
                cin>>numero;
		cout<<"EL resultado es: "<<sumaprimos(numero)<<endl;
	    }	
	    case 2:
	        	   
	    break;	  
	}	
        cout<<"______________________"<<endl
	<<"¿Desea continuar?[s/n]: ";
        cin>>respuesta;	
	cout<<endl;
    }while(respuesta =="Si");

    return 0;
}

int sumaprimos(int numero){
    int contador;
    int suma=0;    
    for(int i = numero; i>0; i--){
	contador = 0;
        for (int j = i+10; j>0; j--){
	    if(i%j==0){
	        contador++;
	    }
	}
	if(contador==2){
	    suma+=i;
	}    
    }
    return suma;
}
