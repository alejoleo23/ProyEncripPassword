#pragma once
#include <ctype.h>

public class OPERACIONES
{
public:

	bool buscar(System::Char Registro[],System::Char Buscado[], int largoBuscado){
		int letras_registro=0;
		int aux=0;
		if(largoBuscado>10 && largoBuscado&2!=0){
			aux=largoBuscado+1;
		}
		else{aux=largoBuscado;}

		for (int j = 0; j < aux; j++){
			if (Registro[j]==Buscado[j])
				letras_registro++;
		}
		if (letras_registro==largoBuscado)

			return (true);
		else
			return (false);
		
	}

	void generar_contraseñaoriginal(System::Char Nombre[],int nNombre,System::Char Contraseña[]){
		int xpos=0, inicio=0,fin=0,nespacios=0;
		
			for (int i = 0; i < nNombre; i++){
					if (i==0){
					Contraseña[xpos]=tolower(Nombre[i]);
					    xpos++;}
					//obteniendo las posiciones de los espacios que estan entre la segunda palabra
					if (Nombre[i]==' '){
						nespacios++;
						switch (nespacios){
						case 1: inicio=i;
						case 2: fin=i;
						}
					}
				}

				for (int i = inicio+1; i < fin; i++){
					Contraseña[xpos]=tolower(Nombre[i]);
						xpos++;
				}
		}

	int contador_letras(System::Char palabra[]){
		int xpos=0;
		int contador=0;
		while (palabra[xpos]){

				contador++;
				xpos++;
			
		}
		return contador;
	}

	void generar_correo(System::Char Nombre[],int nNombre,System::Char Correo[],System::Char nRegistro){
			int pos=0;
			for (int i = 0; i < nNombre; i++){
				if (i==0 ||(i>0 && Nombre[i]!=' ' && Nombre[i-1]==' ')){
					Correo[pos]=toupper(Nombre[i]);
					pos++;
				}	
			}
			Correo[3]='0';
			Correo[4]=nRegistro;

			char restocorreo[30]="@unitru.edu.pe";
			for (int i = 5; i < 19; i++){
					Correo[i]=restocorreo[i-5];
			}
	}

	
	void vaciar(System::Char *A){
		int i;
		for(i=0; i<sizeof(A); i++)
			A[i]='\0';
	}

	OPERACIONES(void)
	{
	}
};

