#pragma once
#include <ctype.h>
class Lectura
{
public:
		void Recorrido(System::Char , int , System::Char [][50], System::Char []);
public:

void A(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
		int xpos=0;
		for (int f = 0; f <largo ; f++)
		{
			for (int c = 0; c<largo ; c++)
			{
				contrase�aEncriptada[xpos]=Matriz[f][c]; xpos++;
			}
		}
}
void B(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
		int xpos=0;
		for (int f = 0; f <largo ; f++)
		{
			for (int c = largo-1; c >=0 ; c--)
			{
				contrase�aEncriptada[xpos]=Matriz[f][c]; xpos++;
			}
		}
	}
void C(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j <largo-1; j++){
		
		contrase�aEncriptada[xpos]=matriz[j][i];
			xpos++;
			
		}
	}

for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
		
	}
for (int i = largo-2; i >= 0; i--){
		aux=largo-1;

		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
}
}
void D(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
				
			contrase�aEncriptada[xpos]=matriz[i][j];
			xpos++;
				
		}
	}
	for (int i = largo-1; i >=0; i--){
		aux=largo-1;
			
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}
	for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		matriz[i][aux]=contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
}
}
void E(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
			
			contrase�aEncriptada[xpos]=matriz[j][i];
			xpos++;
				
		}
	}
for (int i =largo-1; i >=0; i--){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
}
}
void F(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int f = 0; f <largo ; f++)
	{
		for (int c = largo-1; c >=0 ; c--)
		{
			contrase�aEncriptada[xpos]=Matriz[f][c]; xpos++;
		}
	}
}
void G(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contrase�aEncriptada[xpos]=Matriz[j][i];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contrase�aEncriptada[xpos]=Matriz[k][i];
		xpos++;
	}
}
}
void H(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j <largo-1; j++){
		
		contrase�aEncriptada[xpos]=matriz[j][i];
			xpos++;
			
		}
	}

for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
		
	}
for (int i = largo-2; i >= 0; i--){
		aux=largo-1;

		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
}
}
void I(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j < largo-1; j++){
				
			contrase�aEncriptada[xpos]=matriz[i][j];
			xpos++;
		
		}
	}
	for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}

	for (int i = largo-2; i >= 0; i--){
		aux=largo-1;
			
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
}
void J(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
			
			contrase�aEncriptada[xpos]=matriz[j][i];
			xpos++;
				
		}
	}
for (int i =largo-1; i >=0; i--){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
}
}
void K(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int f = 0; f <largo ; f++)
	{
		for (int c = 0; c<largo ; c++)
		{
			contrase�aEncriptada[xpos]=Matriz[f][c]; xpos++;
		}
	}
	}
void L(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contrase�aEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contrase�aEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void M(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
				
			contrase�aEncriptada[xpos]=matriz[i][j];
			xpos++;
				
		}
	}
	for (int i = largo-1; i >=0; i--){
		aux=largo-1;
			
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}
	for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		matriz[i][aux]=contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
}
}
void N(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contrase�aEncriptada[xpos]=Matriz[j][i];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contrase�aEncriptada[xpos]=Matriz[k][i];
		xpos++;
	}
}
}
void O(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = largo-1; j >=0; j--)		{
			
		contrase�aEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = 0; k < largo; k++)	{
			
		contrase�aEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void P(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contrase�aEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contrase�aEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void Q(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
			
			contrase�aEncriptada[xpos]=matriz[j][i];
			xpos++;
				
		}
	}
for (int i =largo-1; i >=0; i--){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
}
}
void R(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j <largo-1; j++){
		
		contrase�aEncriptada[xpos]=matriz[j][i];
			xpos++;
			
		}
	}

for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
		
	}
for (int i = largo-2; i >= 0; i--){
		aux=largo-1;

		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
}
}
void S(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j < largo-1; j++){
				
			contrase�aEncriptada[xpos]=matriz[i][j];
			xpos++;
		
		}
	}
	for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}

	for (int i = largo-2; i >= 0; i--){
		aux=largo-1;
			
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
}
void T(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = largo-1; j >=0; j--)		{
			
		contrase�aEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = 0; k < largo; k++)	{
			
		contrase�aEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void U(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int f = 0; f <largo ; f++)
	{
		for (int c = 0; c<largo ; c++)
		{
			contrase�aEncriptada[xpos]=Matriz[f][c]; xpos++;
		}
	}
}
void V(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = largo-1; j >=0; j--)		{
			
		contrase�aEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = 0; k < largo; k++)	{
			
		contrase�aEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void W(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
			
			contrase�aEncriptada[xpos]=matriz[j][i];
			xpos++;
				
		}
	}
for (int i =largo-1; i >=0; i--){
		aux=largo-1;
		
		contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
}
}
void X(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int xpos=0;
	for (int f = 0; f <largo ; f++)
	{
		for (int c = largo-1; c >=0 ; c--)
		{
			contrase�aEncriptada[xpos]=Matriz[f][c]; xpos++;
		}
	} 
}
void Y(System::Char matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
				
			contrase�aEncriptada[xpos]=matriz[i][j];
			xpos++;
				
		}
	}
	for (int i = largo-1; i >=0; i--){
		aux=largo-1;
			
		contrase�aEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}
	for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		matriz[i][aux]=contrase�aEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
}
}
void Z(System::Char Matriz[50][50], int largo, System::Char contrase�aEncriptada[]){
		int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contrase�aEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contrase�aEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}

	Lectura(void)
	{
	}
};

void Lectura::Recorrido(System::Char Letra, int largo, System::Char Matriz[50][50], System::Char contrase�aEncriptada[50]){
	switch(tolower(Letra)){
	case 'a': A(Matriz, largo, contrase�aEncriptada); break;
	case 'b': B(Matriz, largo, contrase�aEncriptada); break;
	case 'c': C(Matriz, largo, contrase�aEncriptada); break;
	case 'd': D(Matriz, largo, contrase�aEncriptada); break;
	case 'e': E(Matriz, largo, contrase�aEncriptada); break;
	case 'f': F(Matriz, largo, contrase�aEncriptada); break;
	case 'g': G(Matriz, largo, contrase�aEncriptada); break;
	case 'h': H(Matriz, largo, contrase�aEncriptada); break;
	case 'i': I(Matriz, largo, contrase�aEncriptada); break;
	case 'j': J(Matriz, largo, contrase�aEncriptada); break;
	case 'k': K(Matriz, largo, contrase�aEncriptada); break;
	case 'l': L(Matriz, largo, contrase�aEncriptada); break;
	case 'M': M(Matriz, largo, contrase�aEncriptada); break;
	case 'n': N(Matriz, largo, contrase�aEncriptada); break;
	case 'o': O(Matriz, largo, contrase�aEncriptada); break;
	case 'p': P(Matriz, largo, contrase�aEncriptada); break;
	case 'q': Q(Matriz, largo, contrase�aEncriptada); break;
	case 'r': R(Matriz, largo, contrase�aEncriptada); break;
	case 's': S(Matriz, largo, contrase�aEncriptada); break;
	case 't': T(Matriz, largo, contrase�aEncriptada); break;
	case 'u': U(Matriz, largo, contrase�aEncriptada); break;
	case 'v': V(Matriz, largo, contrase�aEncriptada); break;
	case 'w': W(Matriz, largo, contrase�aEncriptada); break;
	case 'x': X(Matriz, largo, contrase�aEncriptada); break;
	case 'y': Y(Matriz, largo, contrase�aEncriptada); break;
	case 'z': Z(Matriz, largo, contrase�aEncriptada); break;


	
	}
}