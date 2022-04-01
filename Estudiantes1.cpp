#include <iostream>
#include <iostream>
#include <stdio.h>  
#include <string.h>

using namespace std;
const char *nombre_archivo="archivo.dat";

struct Estudiante{
	int *codigo;
	string *nombree;
	string *apellido;
	string *direccion;
	int *telefono;
};

void crear();
void leer();

void leer(){
	system("cls");
	FILE* archivo=fopen(nombre_archivo,"rb");
	if(!archivo){
		archivo=fopen(nombre_archivo,"w+b");
	}
	Estudiante estudiante;
	int id;
	do{
		cout<<"______________________________________"<<endl;
		cout<<id<<" | "<<estudiante.codigo<<" | "<<estudiante.nombre<<" | "<<estudiante.apellido<<" | "<<estudiante.direccion<<"|"<<estudiante.telefono<<endl;
		fread(&estudiante,sizeof(Estudiante),1,archivo);	
	}while(feof(archivo)==0);
	fclose(archivo);
}


main(){
		crear();
		leer();
		int fila=0;
		Estudiante estudiante;
	  	cout<<"Cuantos Estudiantes desea agregar:";
	  	cin>>fila;

estudiante.codigo = new int[fila];
	  estudiante.nombree= new string[fila];
	  estudiante.apellido= new string[fila];
	  estudiante.direccion= new string[fila];
	  estudiante.telefono= new int[fila];
	  for (int i=0;i<fila;i++){ 
	  }
for(int i=0;i<fila;i++){
			cout<<"Codigo:";
			cin>>estudiante.codigo[i];
			cin.ignore();
			cout<<"Nombre: ";
			getline(cin,estudiante.nombree[i]);
			cout<<"Apellido: ";
			getline(cin,estudiante.apellido[i]);
			cout<<"Direccion";
			getline(cin,estudiante.direccion[i]);
			cout<<"Telefono:";
			cin>>estudiante.telefono[i];
			cin.ignore();
		}
		 cout<<" -------- Mostrar de Datos --------------"<<endl;
		for(int i=0;i<fila;i++){
			
			cout<<"Codigo:"<<estudiante.codigo[i]<<endl;	
			cout<<"Nombre Completo:"<<estudiante.nombree[i]<<endl;
			cout<<"Apellido Completo:" <<estudiante.apellido[i]<<endl;
			cout<<"Direccion: "<<estudiante.apellido[i]<<endl;
			cout<<"Telefono: "<<estudiante.telefono[i]<<endl;

		}
		cout<<"__________________________"<<endl;
	}
		for (int i=0;i<fila;i++){}
	  	delete [] estudiante.codigo[i];
	  	delete [] estudiante.nombree[i];
	  	delete [] estudiante.apellido[i];
	  	delete [] estudiante.telefono[i];;
	  
	system("PAUSE");
}