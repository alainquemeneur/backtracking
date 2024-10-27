#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int carnet[8],solution;

int recursif(int colonne)
{
int i,pasbon,ligne;

ligne=0;
while(ligne<8)
	{
	pasbon=0;
	for(i=0;i<colonne;i++)
		{
		if(carnet[i]==ligne) pasbon=1;
		if((ligne-carnet[i]) == (colonne-i)) pasbon=1;
		if((carnet[i]-ligne) == (colonne-i)) pasbon=1;
		}
	if(pasbon==0)
		{
		carnet[colonne]=ligne;
		if(colonne<7) recursif(colonne+1);
		else
			{
			printf("\n\nSolution %d:\n",solution+1);
			solution++;
			for(i=0;i<8;i++) printf("Reine en [%d;%d]\n",i+1,carnet[i]+1);
			//exit(0); // dé-commenter pour ne garder qu'une solution
			}
		}
	ligne++;
	}
}

int main()
{
solution=0;
recursif(0);
}	