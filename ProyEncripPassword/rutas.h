#pragma once
public class rutas
{
public:

	int tama�o_matriz(int largocontra){
		if (largocontra<=4)
			return 2;
		else if (largocontra<=9)
			return 3;
		else if (largocontra<=16)
			return 4;

	}

	void escritura(System::Char m[50][50], System::Char contrase�a[50], int ladom){
		int xpos=0;
		for (int f = 0; f < ladom; f++){
			for (int c = 0; c < ladom; c++){
				if (contrase�a[xpos]){
					m[f][c]=contrase�a[xpos]; xpos++;
				}
				else
					m[f][c]='$';
			}
		}
	}

	void lectura(System::Char m[50][50], System::Char contrase�aencriptada[50], int ladom){
		int xpos=0;
		for (int f = 0; f <ladom ; f++)
		{
			for (int c = ladom-1; c >=0 ; c--)
			{
				contrase�aencriptada[xpos]=m[f][c]; xpos++;
			}
		}
	}




	rutas(void)
	{
	}
};

