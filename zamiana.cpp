#include <stdio.h>
#include <stdlib.h>

main()
{
int liczba,reszta;
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
return 0;
}
