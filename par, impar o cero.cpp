#include <stdio.h>
#include <conio.h>//llamada a las librerias 

int result, num;

main (){
	
	printf("\n  Ingrese numero:\n  ");
	scanf("%d", &num);
	
  if (num == 0) {
    printf("\n  Es cero\n");
  }
  else{
  	if(num % 2 == 0){
	  printf("  Es par\n");
	  }
  	else{
	printf("  Es impar\n");
	  }
  
  }
	
	
	
	
	
	//result = num / 2 ;
	//printf ("%f", result);
	
	
}
