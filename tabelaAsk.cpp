#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<Windows.h>

#include "Conio2.h"

int main()
{
	int i,c=1,l=1,cor=8;
	//textbackground(11);
	for(i=0;i<256;i++)
	{
		gotoxy(c,l);
		//TextColor(7,0);
		printf(" %d - %c\t\n",i,i);
		if(cor==15)
		cor=10;
		if(l==25)
		{
			l=1;
			c=c+11;
		}
		l++;
	}
	getch();
}

/*
0 = Preto 8 = Cinza
1 = Azul 9 = Azul claro
2 = Verde 10 = Verde claro
3 = Verde-água 11 = Verde-água claro
4 = Vermelho 12 = Vermelho claro
5 = Roxo 13 = Lilás
6 = Amarelo 14 = Amarelo claro
7 = Branco 15 = Branco brilhante
*/
