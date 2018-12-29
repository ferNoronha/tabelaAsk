#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(void)
{
char tecla;
do
{
	tecla=getch();
	printf("\ntecla %c \t numero %d",tecla,tecla);

}while(tecla!=27);
	getch();
	return 0;

}

