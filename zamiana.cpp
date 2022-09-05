#include <stdio.h>
#include <stdlib.h>

main()
{
int x;
int q = 1;

printf("q 0-1?");
scanf("%j", x);
if(x=0){
	q = 0;
}else{
	q = 1;
}

int liczba,reszta;
do{
	printf("\n podaj liczbe calkowita : ");
	scanf("%i",&liczba);

	if(liczba<9){
		printf("00000");
	}else{
		printf("0000");
	}
	
	while(liczba!=0)
	{
	reszta=liczba%16;
		if(reszta<9){
			printf("%i",reszta);
		}else{
			printf("%i",reszta);
		}
	liczba=liczba/16;
	}
}while(q=1);
return 0;
}
