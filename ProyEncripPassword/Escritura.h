#pragma once
#include <ctype.h>
class Escritura
{
public:
	void Recorrido(System::Char , int , System::Char [][50], System::Char []);

public:

	int tamaño_matriz(int largocontra){
		if (largocontra<=4)
			return 2;
		else if (largocontra<=9)
			return 3;
		else if (largocontra<=16)
			return 4;
		else if (largocontra<=25)
			return 5;
	}

	void A(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		int xpos=0;
		for (int f = 0; f < largo; f++){
			for (int c = 0; c < largo; c++){
				if (contraseña[xpos]){
					Matriz[f][c]=contraseña[xpos]; xpos++;
				}
				else
					Matriz[f][c]='$';
			}
		}
	}
	void B(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
	int xpos=0;
		for (int f = 0; f <largo ; f++)
		{
			for (int c = largo-1; c >=0 ; c--)
			{
				contraseña[xpos]=Matriz[f][c]; xpos++;
			}
		}
	}
	void C(System::Char matriz[50][50], int largo, System::Char contraseña[]){
		


	}
	void D(System::Char matriz[50][50], int largo, System::Char contraseña[]){
			int aux,xpos=0;
		for (int i = 0; i <largo-1 ; i++){
			for (int j = largo-1 ;j >=1; j--){
				if(contraseña[xpos]){
				matriz[i][j]=contraseña[xpos];
				xpos++;
				}
				else
					matriz[i][j]='$';
			}
		}
		for (int i = largo-1; i >=0; i--){
			aux=largo-1;
			if(contraseña[xpos]){
			matriz[aux][i]=contraseña[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
		}
		for (int i = largo-2; i >= 0; i--){
			aux=0;
			if(contraseña[xpos]){
			matriz[i][aux]=contraseña[xpos];
			xpos++;
			}
				else
					matriz[i][aux]='$';
	}
	}
	void E(System::Char matriz[50][50], int largo, System::Char contraseña[]){
		int aux,xpos=0;
		for (int i = 0; i <largo-1 ; i++){
			for (int j = largo-1 ;j >=1; j--){
				if(contraseña[xpos]){
				matriz[j][i]=contraseña[xpos];
				xpos++;
				}
				else
					matriz[j][i]='$';
			}
		}
	for (int i =largo-1; i >=0; i--){
			aux=largo-1;
			if(contraseña[xpos]){
			matriz[i][aux]=contraseña[xpos];
			xpos++;
			}
			else
					matriz[i][aux]='$';
		}
	for (int i = largo-2; i >= 0; i--){
			aux=0;
			if(contraseña[xpos]){
			matriz[aux][i]=contraseña[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
	}

	}
	void F(System::Char matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void G(System::Char matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void H(System::Char matriz[50][50], int largo, System::Char contraseña[]){
		int aux,xpos=0;
		for (int i = 0; i < largo-1; i++){
			for (int j = 0; j <largo-1; j++){
				if(contraseña[xpos]){
				matriz[j][i]=contraseña[xpos];
				xpos++;
				} 
				else 
					matriz[j][i]='$';
			}
		}

	for (int i = 0; i < largo; i++){
			aux=largo-1;
			if(contraseña[xpos]){
			matriz[i][aux]=contraseña[xpos];
			xpos++;
			} 
				else 
					matriz[i][aux]='$';
		}
	for (int i = largo-2; i >= 0; i--){
			aux=largo-1;
			if(contraseña[xpos]){
			matriz[aux][i]=contraseña[xpos];
			xpos++;
			} 
				else 
					matriz[aux][i]='$';
	}
	}
	void I(System::Char matriz[50][50], int largo, System::Char contraseña[]){
		int aux,xpos=0;
		for (int i = 0; i < largo-1; i++){
			for (int j = 0; j < largo-1; j++){
				if (contraseña[xpos]){
				matriz[i][j]=contraseña[xpos];
				xpos++;
				}
				else
					matriz[i][j]='$';
			}
		}
		for (int i = 0; i < largo; i++){
			aux=largo-1;
			if (contraseña[xpos]){
			matriz[aux][i]=contraseña[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
		}

		for (int i = largo-2; i >= 0; i--){
			aux=largo-1;
			if (contraseña[xpos]){
			matriz[i][aux]=contraseña[xpos];
			xpos++;
			}
				else
					matriz[i][aux]='$';
		}
	}
	void J(System::Char matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void K(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		int xpos=0;
		int i=largo-1;
	for (int j =largo-1; j >= 0; j--)	{
		if(j%2==0){
			i=0;
			do{
				if(contraseña[xpos]){
				Matriz[i][j]=contraseña[xpos];
					xpos++; i++;
				}
				else{
					Matriz[i][j]='$';
				}
			} while (i<largo); 
			xpos=xpos-1;
		}
		else		{
			do{
				if(contraseña[xpos]){
				Matriz[i][j]=contraseña[xpos];
					xpos++; i--;
				}
				else{
				Matriz[i][j]='$';
				}
			} while (i>=0);
			
		}
				
	}
	
	}
	void L(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void M(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = 0; j < largo; j++)		{
			if(contraseña[xpos]){
			Matriz[i][j]=contraseña[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = largo-1; k >=0; k--)	{
			if(contraseña[xpos]){
			Matriz[i][k]=contraseña[xpos];
			xpos++;}
			else{
				Matriz[i][k]='$';
			}
		}
	}
	}
	void N(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = largo-1; j >=0; j--)		{
			if(contraseña[xpos]){
			Matriz[i][j]=contraseña[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = 0; k < largo; k++)	{
			if(contraseña[xpos]){
			Matriz[i][k]=contraseña[xpos];
			xpos++;}
			else{
				Matriz[i][k]='$';
			}
		}
	}
	}
	void O(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = 0; j < largo; j++)		{
			if(contraseña[xpos]){
			Matriz[j][i]=contraseña[xpos];
			xpos++;}
			else{
			Matriz[j][i]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = largo-1; k >=0; k--)	{
			if(contraseña[xpos]){
			Matriz[k][i]=contraseña[xpos];
			xpos++;}
			else{
				Matriz[k][i]='$';
			}
		}
	}
	}
	void P(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
	int xpos=0;
		for (int j = 0; j <(largo/2); j++)		{
			for (int i = largo-1; i >=0; i--)	{
		
			if(contraseña[xpos]){
			Matriz[i][j]=contraseña[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = 0; k < largo; k++)	{
			if(contraseña[xpos]){
			Matriz[k][i]=contraseña[xpos];
			xpos++;}
			else{
				Matriz[k][i]='$';
			}
		}
	}
		
	
	}
	void Q(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		int xpos=0;
		int j=0;
	 for (int i = 0; i < (largo/2); i++)	{
		 if(i%2==0){
				do {
					if(contraseña[xpos]){
						Matriz[i][j]=contraseña[xpos];
						xpos++; j++;}
					else{
						Matriz[i][j]='$';
					}

			 } while (j<=largo-1);
				xpos=xpos-1;
		 }
		 else {
			 do {
				 if(contraseña[xpos]){
					 Matriz[i][j]=contraseña[xpos];
					xpos++; j--;
					}
					else{
						Matriz[i][j]='$';
					}
				}while (j>=0);	
			 xpos=xpos-1;
		 }
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		
		  if(i%2==0){
				do {
					if(contraseña[xpos]){
					Matriz[i][j]=contraseña[xpos];
					xpos++; j++;
					}
					else{
						Matriz[i][j]='$';
					}

			 } while (j<=largo-1);
				xpos=xpos-1;
		 }
		 else {
			 do {
				  if(contraseña[xpos]){
				 Matriz[i][j]=contraseña[xpos];
					xpos++; j--;
					}
					else{
						Matriz[i][j]='$';
					}
				}while (j>=0);	
			 xpos=xpos-1;
		 }
	}
	}
	void R(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void S(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void T(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void U(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void V(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void W(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void X(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void Y(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		
	}
	void Z(System::Char Matriz[50][50], int largo, System::Char contraseña[]){
		int a=0;
		for(int j=0;j<largo;j++)
		{
			if(j%2==0){
				for(int i=0;i<largo;i++)
				{
					if(a<largo)
					{
						Matriz[i][j]=contraseña[a];
					a++;
					}else
						Matriz[i][j]='x';
				}
			}
			else{
				for(int i=largo-1;i>=0;i--)
				{
					if(a<largo)
					{
						Matriz[i][j]=contraseña[a];
					a++;
					}else
						Matriz[i][j]='x';

			}
		}
	}

	}

	Escritura(void)
	{
	}
};

void Escritura::Recorrido(System::Char Letra, int largo, System::Char Matriz[50][50], System::Char contraseña[50]){
	switch(tolower(Letra)){
	case 'a': A(Matriz, largo, contraseña); break;
	case 'b': B(Matriz, largo, contraseña); break;
	case 'c': C(Matriz, largo, contraseña); break;
	case 'd': D(Matriz, largo, contraseña); break;
	case 'e': E(Matriz, largo, contraseña); break;
	case 'f': F(Matriz, largo, contraseña); break;
	case 'g': G(Matriz, largo, contraseña); break;
	case 'h': H(Matriz, largo, contraseña); break;
	case 'i': I(Matriz, largo, contraseña); break;
	case 'j': J(Matriz, largo, contraseña); break;
	case 'k': K(Matriz, largo, contraseña); break;
	case 'l': L(Matriz, largo, contraseña); break;
	case 'M': M(Matriz, largo, contraseña); break;
	case 'n': N(Matriz, largo, contraseña); break;
	case 'o': O(Matriz, largo, contraseña); break;
	case 'p': P(Matriz, largo, contraseña); break;
	case 'q': Q(Matriz, largo, contraseña); break;
	case 'r': R(Matriz, largo, contraseña); break;
	case 's': S(Matriz, largo, contraseña); break;
	case 't': T(Matriz, largo, contraseña); break;
	case 'u': U(Matriz, largo, contraseña); break;
	case 'v': V(Matriz, largo, contraseña); break;
	case 'w': W(Matriz, largo, contraseña); break;
	case 'x': X(Matriz, largo, contraseña); break;
	case 'y': Y(Matriz, largo, contraseña); break;
	case 'z': Z(Matriz, largo, contraseña); break;


	
	}
}