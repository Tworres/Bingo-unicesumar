#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int nc,nca;
	int ver1,ver2,ver3,i;
	int verrand[99],lx; // vetor para verificação de números já usados
	int vernum,vernumero;
	int cartela[nc][10]; //vetor bidimensional para armazenar cartela com numeros
	
	
	
	for (lx = 0; lx <= 99; lx++) //Limpar lixo de memória do vetor de verificação
	{
		verrand[lx] = 0;
	}
	
	
	
	nc=9;
	do {
		printf("Digite aqui o número de cartelas: \n");
	//   scanf("%d", &nc);// programa falha por causa desse scanf, não consegui achar solução.
		if (nc >= 11){
			printf("\nNúmero máximo de cartelas é 10.\n");
		}
		
	} while (nc >= 10);
	system("pause");
	system("cls");
	
	
	
	
	
	nca=0;
	ver3=0;
	
	srand( time(NULL) );
	
	do {   //sistema para armazenar numeros aleatóris nas cartelas
		
		for (i = 0; i <= 9;){ //repetidor para casas da cartela
		ver3=0;
			
		vernum = rand() % 99;  //randomizador de números
		printf("%d\n", vernum); 
			ver1=0;
			while ( ver1 <= 99) {     //verificador que garante que não há número repetido ("for" aprensentou erro nesta linha, então optei pelo while)
	
				 	if (verrand[ver1] == vernum){
				  	ver3 = 1;
			
					}
					
					ver1= ver1 + 1;
					
					
			}

		if (ver3 == 0){
			
			cartela[nca][i] = vernum;
			printf("\narmazenado em: %d e %d\n", nca, i);
			i++;
		}
			
			
		}
		
		nca++;                   //pular tabela após a finalização da distribuição de números
	} while ( nca <= nc);

	printf("Cartela 1: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[0][0],cartela[0][1],cartela[0][2],cartela[0][3],cartela[0][4],cartela[0][5],cartela[0][6],cartela[0][7],cartela[0][8],cartela[0][9]);
	printf("Cartela 2: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[1][0],cartela[1][1],cartela[1][2],cartela[1][3],cartela[1][4],cartela[1][5],cartela[1][6],cartela[1][7],cartela[1][8],cartela[1][9]);
	printf("Cartela 3: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[2][0],cartela[2][1],cartela[2][2],cartela[2][3],cartela[2][4],cartela[2][5],cartela[2][6],cartela[2][7],cartela[2][8],cartela[2][9]);
	printf("Cartela 4: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[3][0],cartela[3][1],cartela[3][2],cartela[3][3],cartela[3][4],cartela[3][5],cartela[3][6],cartela[3][7],cartela[3][8],cartela[3][9]);
	printf("Cartela 5: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[4][0],cartela[4][1],cartela[4][2],cartela[4][3],cartela[4][4],cartela[4][5],cartela[4][6],cartela[4][7],cartela[4][8],cartela[4][9]);
	printf("Cartela 6: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[5][0],cartela[5][1],cartela[5][2],cartela[5][3],cartela[5][4],cartela[5][5],cartela[5][6],cartela[5][7],cartela[5][8],cartela[5][9]);
	printf("Cartela 7: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[6][0],cartela[6][1],cartela[6][2],cartela[6][3],cartela[6][4],cartela[6][5],cartela[6][6],cartela[6][7],cartela[6][8],cartela[6][9]);
	printf("Cartela 8: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[7][0],cartela[7][1],cartela[7][2],cartela[7][3],cartela[7][4],cartela[7][5],cartela[7][6],cartela[7][7],cartela[7][8],cartela[7][9]);
	printf("Cartela 9: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[8][0],cartela[8][1],cartela[8][2],cartela[8][3],cartela[8][4],cartela[8][5],cartela[8][6],cartela[8][7],cartela[8][8],cartela[8][9]);
	printf("Cartela 10: %d %d %d %d %d %d %d %d %d %d\n\n", cartela[9][0],cartela[9][1],cartela[9][2],cartela[9][3],cartela[9][4],cartela[9][5],cartela[9][6],cartela[9][7],cartela[9][8],cartela[9][9]);
	

	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
