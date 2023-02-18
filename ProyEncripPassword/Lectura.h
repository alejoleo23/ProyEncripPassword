#pragma once
#include <ctype.h>
class Lectura
{
public:
		void Recorrido(System::Char , int , System::Char [][50], System::Char []);
public:

void A(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
		int xpos=0;
		for (int f = 0; f <largo ; f++)
		{
			for (int c = 0; c<largo ; c++)
			{
				contraseñaEncriptada[xpos]=Matriz[f][c]; xpos++;
			}
		}
}
void B(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
		int xpos=0;
		for (int f = 0; f <largo ; f++)
		{
			for (int c = largo-1; c >=0 ; c--)
			{
				contraseñaEncriptada[xpos]=Matriz[f][c]; xpos++;
			}
		}
	}
void C(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j <largo-1; j++){
		
		contraseñaEncriptada[xpos]=matriz[j][i];
			xpos++;
			
		}
	}

for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
		
	}
for (int i = largo-2; i >= 0; i--){
		aux=largo-1;

		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
}
}
void D(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
				
			contraseñaEncriptada[xpos]=matriz[i][j];
			xpos++;
				
		}
	}
	for (int i = largo-1; i >=0; i--){
		aux=largo-1;
			
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}
	for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		matriz[i][aux]=contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
}
}
void E(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
			
			contraseñaEncriptada[xpos]=matriz[j][i];
			xpos++;
				
		}
	}
for (int i =largo-1; i >=0; i--){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
}
}
void F(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int f = 0; f <largo ; f++)
	{
		for (int c = largo-1; c >=0 ; c--)
		{
			contraseñaEncriptada[xpos]=Matriz[f][c]; xpos++;
		}
	}
}
void G(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contraseñaEncriptada[xpos]=Matriz[j][i];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contraseñaEncriptada[xpos]=Matriz[k][i];
		xpos++;
	}
}
}
void H(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j <largo-1; j++){
		
		contraseñaEncriptada[xpos]=matriz[j][i];
			xpos++;
			
		}
	}

for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
		
	}
for (int i = largo-2; i >= 0; i--){
		aux=largo-1;

		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
}
}
void I(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j < largo-1; j++){
				
			contraseñaEncriptada[xpos]=matriz[i][j];
			xpos++;
		
		}
	}
	for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}

	for (int i = largo-2; i >= 0; i--){
		aux=largo-1;
			
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
}
void J(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
			
			contraseñaEncriptada[xpos]=matriz[j][i];
			xpos++;
				
		}
	}
for (int i =largo-1; i >=0; i--){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
}
}
void K(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int f = 0; f <largo ; f++)
	{
		for (int c = 0; c<largo ; c++)
		{
			contraseñaEncriptada[xpos]=Matriz[f][c]; xpos++;
		}
	}
	}
void L(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contraseñaEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contraseñaEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void M(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
				
			contraseñaEncriptada[xpos]=matriz[i][j];
			xpos++;
				
		}
	}
	for (int i = largo-1; i >=0; i--){
		aux=largo-1;
			
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}
	for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		matriz[i][aux]=contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
}
}
void N(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contraseñaEncriptada[xpos]=Matriz[j][i];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contraseñaEncriptada[xpos]=Matriz[k][i];
		xpos++;
	}
}
}
void O(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = largo-1; j >=0; j--)		{
			
		contraseñaEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = 0; k < largo; k++)	{
			
		contraseñaEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void P(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contraseñaEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contraseñaEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void Q(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
			
			contraseñaEncriptada[xpos]=matriz[j][i];
			xpos++;
				
		}
	}
for (int i =largo-1; i >=0; i--){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
}
}
void R(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j <largo-1; j++){
		
		contraseñaEncriptada[xpos]=matriz[j][i];
			xpos++;
			
		}
	}

for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
		
	}
for (int i = largo-2; i >= 0; i--){
		aux=largo-1;

		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
}
}
void S(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i < largo-1; i++){
		for (int j = 0; j < largo-1; j++){
				
			contraseñaEncriptada[xpos]=matriz[i][j];
			xpos++;
		
		}
	}
	for (int i = 0; i < largo; i++){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}

	for (int i = largo-2; i >= 0; i--){
		aux=largo-1;
			
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
}
void T(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = largo-1; j >=0; j--)		{
			
		contraseñaEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = 0; k < largo; k++)	{
			
		contraseñaEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void U(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int f = 0; f <largo ; f++)
	{
		for (int c = 0; c<largo ; c++)
		{
			contraseñaEncriptada[xpos]=Matriz[f][c]; xpos++;
		}
	}
}
void V(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = largo-1; j >=0; j--)		{
			
		contraseñaEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = 0; k < largo; k++)	{
			
		contraseñaEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}
void W(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
			
			contraseñaEncriptada[xpos]=matriz[j][i];
			xpos++;
				
		}
	}
for (int i =largo-1; i >=0; i--){
		aux=largo-1;
		
		contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
	}
for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
}
}
void X(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int xpos=0;
	for (int f = 0; f <largo ; f++)
	{
		for (int c = largo-1; c >=0 ; c--)
		{
			contraseñaEncriptada[xpos]=Matriz[f][c]; xpos++;
		}
	} 
}
void Y(System::Char matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
	int aux,xpos=0;
	for (int i = 0; i <largo-1 ; i++){
		for (int j = largo-1 ;j >=1; j--){
				
			contraseñaEncriptada[xpos]=matriz[i][j];
			xpos++;
				
		}
	}
	for (int i = largo-1; i >=0; i--){
		aux=largo-1;
			
		contraseñaEncriptada[xpos]=matriz[aux][i];
		xpos++;
			
	}
	for (int i = largo-2; i >= 0; i--){
		aux=0;
			
		matriz[i][aux]=contraseñaEncriptada[xpos]=matriz[i][aux];
		xpos++;
			
}
}
void Z(System::Char Matriz[50][50], int largo, System::Char contraseñaEncriptada[]){
		int xpos=0;
	for (int i = 0; i < (largo/2); i++)	{
	for (int j = 0; j < largo; j++)		{
			
		contraseñaEncriptada[xpos]=Matriz[i][j];
		xpos++;
	}
		
}
	
for (int i = (largo/2); i < largo; i++)	{
	for (int k = largo-1; k >=0; k--)	{
			
		contraseñaEncriptada[xpos]=Matriz[i][k];
		xpos++;
	}
}
}

	Lectura(void)
	{
	}
};

void Lectura::Recorrido(System::Char Letra, int largo, System::Char Matriz[50][50], System::Char contraseñaEncriptada[50]){
	switch(tolower(Letra)){
	case 'a': A(Matriz, largo, contraseñaEncriptada); break;
	case 'b': B(Matriz, largo, contraseñaEncriptada); break;
	case 'c': C(Matriz, largo, contraseñaEncriptada); break;
	case 'd': D(Matriz, largo, contraseñaEncriptada); break;
	case 'e': E(Matriz, largo, contraseñaEncriptada); break;
	case 'f': F(Matriz, largo, contraseñaEncriptada); break;
	case 'g': G(Matriz, largo, contraseñaEncriptada); break;
	case 'h': H(Matriz, largo, contraseñaEncriptada); break;
	case 'i': I(Matriz, largo, contraseñaEncriptada); break;
	case 'j': J(Matriz, largo, contraseñaEncriptada); break;
	case 'k': K(Matriz, largo, contraseñaEncriptada); break;
	case 'l': L(Matriz, largo, contraseñaEncriptada); break;
	case 'M': M(Matriz, largo, contraseñaEncriptada); break;
	case 'n': N(Matriz, largo, contraseñaEncriptada); break;
	case 'o': O(Matriz, largo, contraseñaEncriptada); break;
	case 'p': P(Matriz, largo, contraseñaEncriptada); break;
	case 'q': Q(Matriz, largo, contraseñaEncriptada); break;
	case 'r': R(Matriz, largo, contraseñaEncriptada); break;
	case 's': S(Matriz, largo, contraseñaEncriptada); break;
	case 't': T(Matriz, largo, contraseñaEncriptada); break;
	case 'u': U(Matriz, largo, contraseñaEncriptada); break;
	case 'v': V(Matriz, largo, contraseñaEncriptada); break;
	case 'w': W(Matriz, largo, contraseñaEncriptada); break;
	case 'x': X(Matriz, largo, contraseñaEncriptada); break;
	case 'y': Y(Matriz, largo, contraseñaEncriptada); break;
	case 'z': Z(Matriz, largo, contraseñaEncriptada); break;


	
	}
}