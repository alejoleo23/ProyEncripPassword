#pragma once
#include <ctype.h>
class Escritura
{
public:
	void Recorrido(System::Char , int , System::Char [][50], System::Char []);

public:

	int tamaņo_matriz(int largocontra){
		if (largocontra<=4)
			return 2;
		else if (largocontra<=9)
			return 3;
		else if (largocontra<=16)
			return 4;
		else if (largocontra<=25)
			return 5;
	}

	void A(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		int xpos=0;
		for (int f = 0; f < largo; f++){
			for (int c = 0; c < largo; c++){
				if (contraseņa[xpos]){
					Matriz[f][c]=contraseņa[xpos]; xpos++;
				}
				else
					Matriz[f][c]='$';
			}
		}
	}
	void B(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
	int xpos=0;
		for (int f = 0; f <largo ; f++)
		{
			for (int c = largo-1; c >=0 ; c--)
			{
				contraseņa[xpos]=Matriz[f][c]; xpos++;
			}
		}
	}
	void C(System::Char matriz[50][50], int largo, System::Char contraseņa[]){
		


	}
	void D(System::Char matriz[50][50], int largo, System::Char contraseņa[]){
			int aux,xpos=0;
		for (int i = 0; i <largo-1 ; i++){
			for (int j = largo-1 ;j >=1; j--){
				if(contraseņa[xpos]){
				matriz[i][j]=contraseņa[xpos];
				xpos++;
				}
				else
					matriz[i][j]='$';
			}
		}
		for (int i = largo-1; i >=0; i--){
			aux=largo-1;
			if(contraseņa[xpos]){
			matriz[aux][i]=contraseņa[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
		}
		for (int i = largo-2; i >= 0; i--){
			aux=0;
			if(contraseņa[xpos]){
			matriz[i][aux]=contraseņa[xpos];
			xpos++;
			}
				else
					matriz[i][aux]='$';
	}
	}
	void E(System::Char matriz[50][50], int largo, System::Char contraseņa[]){
		int aux,xpos=0;
		for (int i = 0; i <largo-1 ; i++){
			for (int j = largo-1 ;j >=1; j--){
				if(contraseņa[xpos]){
				matriz[j][i]=contraseņa[xpos];
				xpos++;
				}
				else
					matriz[j][i]='$';
			}
		}
	for (int i =largo-1; i >=0; i--){
			aux=largo-1;
			if(contraseņa[xpos]){
			matriz[i][aux]=contraseņa[xpos];
			xpos++;
			}
			else
					matriz[i][aux]='$';
		}
	for (int i = largo-2; i >= 0; i--){
			aux=0;
			if(contraseņa[xpos]){
			matriz[aux][i]=contraseņa[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
	}

	}
	void F(System::Char matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void G(System::Char matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void H(System::Char matriz[50][50], int largo, System::Char contraseņa[]){
		int aux,xpos=0;
		for (int i = 0; i < largo-1; i++){
			for (int j = 0; j <largo-1; j++){
				if(contraseņa[xpos]){
				matriz[j][i]=contraseņa[xpos];
				xpos++;
				} 
				else 
					matriz[j][i]='$';
			}
		}

	for (int i = 0; i < largo; i++){
			aux=largo-1;
			if(contraseņa[xpos]){
			matriz[i][aux]=contraseņa[xpos];
			xpos++;
			} 
				else 
					matriz[i][aux]='$';
		}
	for (int i = largo-2; i >= 0; i--){
			aux=largo-1;
			if(contraseņa[xpos]){
			matriz[aux][i]=contraseņa[xpos];
			xpos++;
			} 
				else 
					matriz[aux][i]='$';
	}
	}
	void I(System::Char matriz[50][50], int largo, System::Char contraseņa[]){
		int aux,xpos=0;
		for (int i = 0; i < largo-1; i++){
			for (int j = 0; j < largo-1; j++){
				if (contraseņa[xpos]){
				matriz[i][j]=contraseņa[xpos];
				xpos++;
				}
				else
					matriz[i][j]='$';
			}
		}
		for (int i = 0; i < largo; i++){
			aux=largo-1;
			if (contraseņa[xpos]){
			matriz[aux][i]=contraseņa[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
		}

		for (int i = largo-2; i >= 0; i--){
			aux=largo-1;
			if (contraseņa[xpos]){
			matriz[i][aux]=contraseņa[xpos];
			xpos++;
			}
				else
					matriz[i][aux]='$';
		}
	}
	void J(System::Char matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void K(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		int xpos=0;
		int i=largo-1;
	for (int j =largo-1; j >= 0; j--)	{
		if(j%2==0){
			i=0;
			do{
				if(contraseņa[xpos]){
				Matriz[i][j]=contraseņa[xpos];
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
				if(contraseņa[xpos]){
				Matriz[i][j]=contraseņa[xpos];
					xpos++; i--;
				}
				else{
				Matriz[i][j]='$';
				}
			} while (i>=0);
			
		}
				
	}
	
	}
	void L(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void M(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = 0; j < largo; j++)		{
			if(contraseņa[xpos]){
			Matriz[i][j]=contraseņa[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = largo-1; k >=0; k--)	{
			if(contraseņa[xpos]){
			Matriz[i][k]=contraseņa[xpos];
			xpos++;}
			else{
				Matriz[i][k]='$';
			}
		}
	}
	}
	void N(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = largo-1; j >=0; j--)		{
			if(contraseņa[xpos]){
			Matriz[i][j]=contraseņa[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = 0; k < largo; k++)	{
			if(contraseņa[xpos]){
			Matriz[i][k]=contraseņa[xpos];
			xpos++;}
			else{
				Matriz[i][k]='$';
			}
		}
	}
	}
	void O(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = 0; j < largo; j++)		{
			if(contraseņa[xpos]){
			Matriz[j][i]=contraseņa[xpos];
			xpos++;}
			else{
			Matriz[j][i]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = largo-1; k >=0; k--)	{
			if(contraseņa[xpos]){
			Matriz[k][i]=contraseņa[xpos];
			xpos++;}
			else{
				Matriz[k][i]='$';
			}
		}
	}
	}
	void P(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
	int xpos=0;
		for (int j = 0; j <(largo/2); j++)		{
			for (int i = largo-1; i >=0; i--)	{
		
			if(contraseņa[xpos]){
			Matriz[i][j]=contraseņa[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = 0; k < largo; k++)	{
			if(contraseņa[xpos]){
			Matriz[k][i]=contraseņa[xpos];
			xpos++;}
			else{
				Matriz[k][i]='$';
			}
		}
	}
		
	
	}
	void Q(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		int xpos=0;
		int j=0;
	 for (int i = 0; i < (largo/2); i++)	{
		 if(i%2==0){
				do {
					if(contraseņa[xpos]){
						Matriz[i][j]=contraseņa[xpos];
						xpos++; j++;}
					else{
						Matriz[i][j]='$';
					}

			 } while (j<=largo-1);
				xpos=xpos-1;
		 }
		 else {
			 do {
				 if(contraseņa[xpos]){
					 Matriz[i][j]=contraseņa[xpos];
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
					if(contraseņa[xpos]){
					Matriz[i][j]=contraseņa[xpos];
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
				  if(contraseņa[xpos]){
				 Matriz[i][j]=contraseņa[xpos];
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
	void R(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void S(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void T(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void U(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void V(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void W(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void X(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void Y(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		
	}
	void Z(System::Char Matriz[50][50], int largo, System::Char contraseņa[]){
		int a=0;
		for(int j=0;j<largo;j++)
		{
			if(j%2==0){
				for(int i=0;i<largo;i++)
				{
					if(a<largo)
					{
						Matriz[i][j]=contraseņa[a];
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
						Matriz[i][j]=contraseņa[a];
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

void Escritura::Recorrido(System::Char Letra, int largo, System::Char Matriz[50][50], System::Char contraseņa[50]){
	switch(tolower(Letra)){
	case 'a': A(Matriz, largo, contraseņa); break;
	case 'b': B(Matriz, largo, contraseņa); break;
	case 'c': C(Matriz, largo, contraseņa); break;
	case 'd': D(Matriz, largo, contraseņa); break;
	case 'e': E(Matriz, largo, contraseņa); break;
	case 'f': F(Matriz, largo, contraseņa); break;
	case 'g': G(Matriz, largo, contraseņa); break;
	case 'h': H(Matriz, largo, contraseņa); break;
	case 'i': I(Matriz, largo, contraseņa); break;
	case 'j': J(Matriz, largo, contraseņa); break;
	case 'k': K(Matriz, largo, contraseņa); break;
	case 'l': L(Matriz, largo, contraseņa); break;
	case 'M': M(Matriz, largo, contraseņa); break;
	case 'n': N(Matriz, largo, contraseņa); break;
	case 'o': O(Matriz, largo, contraseņa); break;
	case 'p': P(Matriz, largo, contraseņa); break;
	case 'q': Q(Matriz, largo, contraseņa); break;
	case 'r': R(Matriz, largo, contraseņa); break;
	case 's': S(Matriz, largo, contraseņa); break;
	case 't': T(Matriz, largo, contraseņa); break;
	case 'u': U(Matriz, largo, contraseņa); break;
	case 'v': V(Matriz, largo, contraseņa); break;
	case 'w': W(Matriz, largo, contraseņa); break;
	case 'x': X(Matriz, largo, contraseņa); break;
	case 'y': Y(Matriz, largo, contraseņa); break;
	case 'z': Z(Matriz, largo, contraseņa); break;


	
	}
}