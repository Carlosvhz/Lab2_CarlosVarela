#include <iostream>

using namespace std;

//Prototipo
int sumaprimos(int);
int sumaabn(int, int, int);
void conjetura(int);

int main(){

    string respuesta;
    int opcion = 0;
    cout<<"______Menu______"<<endl;
    
    do{
        cout<<"1. Ejercicio #1 Primos"<<endl
        <<"2. Ejercicio #2 Suma de multiplos"<<endl
        <<"3. Ejercicio #3 Conjetura de Goldbach"<<endl
        <<"Ingrese opcion: ";
       
       	cin>>opcion;
	cout<<endl;
       
       	switch(opcion){
	    case 1:{
		int numero;	   
	        cout<<" - Ejercicio#1 - "<<endl
                <<"Ingrese numero: ";
                cin>>numero;
		cout<<"EL resultado es: "<<sumaprimos(numero)<<endl;
	    }	

	    case 2:{
	        int a;
		int b;
		int n;
		cout<<" - Ejercicio#2 - "<<endl
		<<"Ingrese numero a: ";
	        cin>>a;
	        cout<<"Ingrese numero b: ";
	        cin>>b;
	        cout<<"Ingrese numero n: ";
	        cin>>n;
	        cout<<"EL resultado es: "<<sumaabn(a,b,n)<<endl;	
	    }      

	    break;	  
	    case 3:{
		int numero;	   
	        cout<<" - Ejercicio#3 - "<<endl
		<<"Ingrese numero: ";
                cin>>numero;
		while(numero>150||!numero%2==0){
		    cout<<"Ingrese numero de nuevo: ";
		    cin>>numero;
		}
                conjetura(numero);
    	    }
     	    break;		   
	}	
        cout<<"______________________"<<endl
	<<"¿Desea continuar?[s/n]: ";
        cin>>respuesta;	
	cout<<endl;
    }while(respuesta =="s");

    return 0;
}

void  conjetura(int numero){
    
}


int sumaabn(int a, int b, int n){
    int suma = 0;
    for(int i=n; i>=0; i--){
       if(i%b==0){
           suma+=i;
       }
       if(i%a==0){
           suma+=i;
       }       
    }
    return suma;
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
