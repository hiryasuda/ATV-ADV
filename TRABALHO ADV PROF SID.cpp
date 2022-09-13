#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	
	int num, e, contador = 1, tentativas, ntotal, h, escolha;
	float pontos = 100, pontosp;
	
	do
{	
	do
{	
	system("cls");
	fflush(stdin);
	printf("\n\t\t\t\t\t  Welcome to the guessing game hahah");
	printf("\n\t\t\t\t\t\tchoose game level\n\n\t\t\t\t easy(1) medium(2), hard(3) very hard(4) insane(5)\n ");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nGAME MADE BY HIROSHI IN ENGLISH");
	printf("\nDa uma notinha ae prof S2.");
	scanf("%d", & e);
			
	if(e > 5 | e < 0){
	printf("\nINVALID CHOICE");
	getch();
}
}	while(e > 5 | e < 0);
		
		switch (e)
		{
			case 1: ntotal = 8; tentativas = 9; break;
			case 2: ntotal = 40; tentativas = 35; break;
			case 3: ntotal = 70; tentativas = 58; break;
			case 4: ntotal = 90; tentativas = 35; break;
			case 5: ntotal = 120; tentativas = 45; break;
			default: printf("\nINVALID CHOICE"); break;	
		}
	srand(time(0));
	getch();
	printf("%d", h);
	h = rand() % ntotal;
	for(contador=1; 1<=tentativas; contador++)
	{
		system("cls");
			printf("\nOs your numbers will be 0 %d!", ntotal);
			printf("\nyou have %d attempts of %d", contador, tentativas);
			fflush(stdin);
			printf("\ntry to hit a number: ");
			scanf("%d", & num);
			
	if(num < 0)	{
		
	getch();
			}else if(num > ntotal){
			contador--;
			getch();
			}else if(num == h){
			printf("\nYou're right");
			break;
			}else{
			if(num > h){
			printf("\nYou missed");
			printf("\nyour number is bigger");
			getch();
			}else{
			printf("\nYou missed");
			printf("\nI number is smaller");
			getch();
				}	
			}	
	
		if(contador == tentativas){
		printf("\nyou got everything wrong");
getch();
		break;
			}
		pontosp	= (abs(num-h))/ 1.5;
		pontos = pontos - pontosp;
		}
		do
		{
			
	if(contador == tentativas){
			system("cls");
			printf("\nThe game is over\nYour points are %d", pontos);
			pontos = 0;
	getch();
			}
			
			system("cls");
			fflush(stdin);
			printf("\nYour points are %.0f", pontos);
			printf("\nYou will continue \nSI (1): \nNO (2): ");
			scanf("%d", & escolha);
			
			switch (escolha)
			{
				
				case 1: printf("\nYOUR GAME WILL CONTINUE");break;
				case 2: printf("\nYOUR GAME IS FINISH"); break;
				default: printf("\nINVALID CHOICE"); break;
				
			}
	getch();
			}while(escolha > 2 || escolha < 0);
			}while(escolha != 2);
}