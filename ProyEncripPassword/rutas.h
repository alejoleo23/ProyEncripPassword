#pragma once
public class rutas
{
public:

	int tamaño_matriz(int largocontra){
		if (largocontra<=4)
			return 2;
		else if (largocontra<=9)
			return 3;
		else if (largocontra<=16)
			return 4;

	}

	void escritura(System::Char m[50][50], System::Char contraseña[50], int ladom){
		int xpos=0;
		for (int f = 0; f < ladom; f++){
			for (int c = 0; c < ladom; c++){
				if (contraseña[xpos]){
					m[f][c]=contraseña[xpos]; xpos++;
				}
				else
					m[f][c]='$';
			}
		}
	}

	void lectura(System::Char m[50][50], System::Char contraseñaencriptada[50], int ladom){
		int xpos=0;
		for (int f = 0; f <ladom ; f++)
		{
			for (int c = ladom-1; c >=0 ; c--)
			{
				contraseñaencriptada[xpos]=m[f][c]; xpos++;
			}
		}
	}




	rutas(void)
	{
	}
};

