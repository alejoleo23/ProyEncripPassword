#pragma once
#include <ctype.h>
class Escritura
{
public:
	void Recorrido(System::Char , int , System::Char [][50], System::Char []);

public:

	int tama�o_matriz(int largocontra){
		if (largocontra<=4)
			return 2;
		else if (largocontra<=9)
			return 3;
		else if (largocontra<=16)
			return 4;
		else if (largocontra<=25)
			return 5;
	}

	void A(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		int xpos=0;
		for (int f = 0; f < largo; f++){
			for (int c = 0; c < largo; c++){
				if (contrase�a[xpos]){
					Matriz[f][c]=contrase�a[xpos]; xpos++;
				}
				else
					Matriz[f][c]='$';
			}
		}
	}
	void B(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
	int xpos=0;
		for (int f = 0; f <largo ; f++)
		{
			for (int c = largo-1; c >=0 ; c--)
			{
				contrase�a[xpos]=Matriz[f][c]; xpos++;
			}
		}
	}
	void C(System::Char matriz[50][50], int largo, System::Char contrase�a[]){
		


	}
	void D(System::Char matriz[50][50], int largo, System::Char contrase�a[]){
			int aux,xpos=0;
		for (int i = 0; i <largo-1 ; i++){
			for (int j = largo-1 ;j >=1; j--){
				if(contrase�a[xpos]){
				matriz[i][j]=contrase�a[xpos];
				xpos++;
				}
				else
					matriz[i][j]='$';
			}
		}
		for (int i = largo-1; i >=0; i--){
			aux=largo-1;
			if(contrase�a[xpos]){
			matriz[aux][i]=contrase�a[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
		}
		for (int i = largo-2; i >= 0; i--){
			aux=0;
			if(contrase�a[xpos]){
			matriz[i][aux]=contrase�a[xpos];
			xpos++;
			}
				else
					matriz[i][aux]='$';
	}
	}
	void E(System::Char matriz[50][50], int largo, System::Char contrase�a[]){
		int aux,xpos=0;
		for (int i = 0; i <largo-1 ; i++){
			for (int j = largo-1 ;j >=1; j--){
				if(contrase�a[xpos]){
				matriz[j][i]=contrase�a[xpos];
				xpos++;
				}
				else
					matriz[j][i]='$';
			}
		}
	for (int i =largo-1; i >=0; i--){
			aux=largo-1;
			if(contrase�a[xpos]){
			matriz[i][aux]=contrase�a[xpos];
			xpos++;
			}
			else
					matriz[i][aux]='$';
		}
	for (int i = largo-2; i >= 0; i--){
			aux=0;
			if(contrase�a[xpos]){
			matriz[aux][i]=contrase�a[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
	}

	}
	void F(System::Char matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void G(System::Char matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void H(System::Char matriz[50][50], int largo, System::Char contrase�a[]){
		int aux,xpos=0;
		for (int i = 0; i < largo-1; i++){
			for (int j = 0; j <largo-1; j++){
				if(contrase�a[xpos]){
				matriz[j][i]=contrase�a[xpos];
				xpos++;
				} 
				else 
					matriz[j][i]='$';
			}
		}

	for (int i = 0; i < largo; i++){
			aux=largo-1;
			if(contrase�a[xpos]){
			matriz[i][aux]=contrase�a[xpos];
			xpos++;
			} 
				else 
					matriz[i][aux]='$';
		}
	for (int i = largo-2; i >= 0; i--){
			aux=largo-1;
			if(contrase�a[xpos]){
			matriz[aux][i]=contrase�a[xpos];
			xpos++;
			} 
				else 
					matriz[aux][i]='$';
	}
	}
	void I(System::Char matriz[50][50], int largo, System::Char contrase�a[]){
		int aux,xpos=0;
		for (int i = 0; i < largo-1; i++){
			for (int j = 0; j < largo-1; j++){
				if (contrase�a[xpos]){
				matriz[i][j]=contrase�a[xpos];
				xpos++;
				}
				else
					matriz[i][j]='$';
			}
		}
		for (int i = 0; i < largo; i++){
			aux=largo-1;
			if (contrase�a[xpos]){
			matriz[aux][i]=contrase�a[xpos];
			xpos++;
			}
				else
					matriz[aux][i]='$';
		}

		for (int i = largo-2; i >= 0; i--){
			aux=largo-1;
			if (contrase�a[xpos]){
			matriz[i][aux]=contrase�a[xpos];
			xpos++;
			}
				else
					matriz[i][aux]='$';
		}
	}
	void J(System::Char matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void K(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		int xpos=0;
		int i=largo-1;
	for (int j =largo-1; j >= 0; j--)	{
		if(j%2==0){
			i=0;
			do{
				if(contrase�a[xpos]){
				Matriz[i][j]=contrase�a[xpos];
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
				if(contrase�a[xpos]){
				Matriz[i][j]=contrase�a[xpos];
					xpos++; i--;
				}
				else{
				Matriz[i][j]='$';
				}
			} while (i>=0);
			
		}
				
	}
	
	}
	void L(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void M(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = 0; j < largo; j++)		{
			if(contrase�a[xpos]){
			Matriz[i][j]=contrase�a[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = largo-1; k >=0; k--)	{
			if(contrase�a[xpos]){
			Matriz[i][k]=contrase�a[xpos];
			xpos++;}
			else{
				Matriz[i][k]='$';
			}
		}
	}
	}
	void N(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = largo-1; j >=0; j--)		{
			if(contrase�a[xpos]){
			Matriz[i][j]=contrase�a[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = 0; k < largo; k++)	{
			if(contrase�a[xpos]){
			Matriz[i][k]=contrase�a[xpos];
			xpos++;}
			else{
				Matriz[i][k]='$';
			}
		}
	}
	}
	void O(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		int xpos=0;
		for (int i = 0; i < (largo/2); i++)	{
		for (int j = 0; j < largo; j++)		{
			if(contrase�a[xpos]){
			Matriz[j][i]=contrase�a[xpos];
			xpos++;}
			else{
			Matriz[j][i]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = largo-1; k >=0; k--)	{
			if(contrase�a[xpos]){
			Matriz[k][i]=contrase�a[xpos];
			xpos++;}
			else{
				Matriz[k][i]='$';
			}
		}
	}
	}
	void P(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
	int xpos=0;
		for (int j = 0; j <(largo/2); j++)		{
			for (int i = largo-1; i >=0; i--)	{
		
			if(contrase�a[xpos]){
			Matriz[i][j]=contrase�a[xpos];
			xpos++;}
			else{
			Matriz[i][j]='$';
			}
		}
		
	}
	
	for (int i = (largo/2); i < largo; i++)	{
		for (int k = 0; k < largo; k++)	{
			if(contrase�a[xpos]){
			Matriz[k][i]=contrase�a[xpos];
			xpos++;}
			else{
				Matriz[k][i]='$';
			}
		}
	}
		
	
	}
	void Q(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		int xpos=0;
		int j=0;
	 for (int i = 0; i < (largo/2); i++)	{
		 if(i%2==0){
				do {
					if(contrase�a[xpos]){
						Matriz[i][j]=contrase�a[xpos];
						xpos++; j++;}
					else{
						Matriz[i][j]='$';
					}

			 } while (j<=largo-1);
				xpos=xpos-1;
		 }
		 else {
			 do {
				 if(contrase�a[xpos]){
					 Matriz[i][j]=contrase�a[xpos];
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
					if(contrase�a[xpos]){
					Matriz[i][j]=contrase�a[xpos];
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
				  if(contrase�a[xpos]){
				 Matriz[i][j]=contrase�a[xpos];
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
	void R(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void S(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void T(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void U(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void V(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void W(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void X(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void Y(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		
	}
	void Z(System::Char Matriz[50][50], int largo, System::Char contrase�a[]){
		int a=0;
		for(int j=0;j<largo;j++)
		{
			if(j%2==0){
				for(int i=0;i<largo;i++)
				{
					if(a<largo)
					{
						Matriz[i][j]=contrase�a[a];
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
						Matriz[i][j]=contrase�a[a];
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

void Escritura::Recorrido(System::Char Letra, int largo, System::Char Matriz[50][50], System::Char contrase�a[50]){
	switch(tolower(Letra)){
	case 'a': A(Matriz, largo, contrase�a); break;
	case 'b': B(Matriz, largo, contrase�a); break;
	case 'c': C(Matriz, largo, contrase�a); break;
	case 'd': D(Matriz, largo, contrase�a); break;
	case 'e': E(Matriz, largo, contrase�a); break;
	case 'f': F(Matriz, largo, contrase�a); break;
	case 'g': G(Matriz, largo, contrase�a); break;
	case 'h': H(Matriz, largo, contrase�a); break;
	case 'i': I(Matriz, largo, contrase�a); break;
	case 'j': J(Matriz, largo, contrase�a); break;
	case 'k': K(Matriz, largo, contrase�a); break;
	case 'l': L(Matriz, largo, contrase�a); break;
	case 'M': M(Matriz, largo, contrase�a); break;
	case 'n': N(Matriz, largo, contrase�a); break;
	case 'o': O(Matriz, largo, contrase�a); break;
	case 'p': P(Matriz, largo, contrase�a); break;
	case 'q': Q(Matriz, largo, contrase�a); break;
	case 'r': R(Matriz, largo, contrase�a); break;
	case 's': S(Matriz, largo, contrase�a); break;
	case 't': T(Matriz, largo, contrase�a); break;
	case 'u': U(Matriz, largo, contrase�a); break;
	case 'v': V(Matriz, largo, contrase�a); break;
	case 'w': W(Matriz, largo, contrase�a); break;
	case 'x': X(Matriz, largo, contrase�a); break;
	case 'y': Y(Matriz, largo, contrase�a); break;
	case 'z': Z(Matriz, largo, contrase�a); break;


	
	}
}