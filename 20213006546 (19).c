#include <stdio.h>

int contaDigitos(int num);
int main(){
	int num;
	int digitos;
	printf("Digite um numero inteiro: ");
	scanf("%i",&num);
	digitos=contaDigitos(num);
	printf("Resultado: %i\n", digitos);

}

int contaDigitos(int num){
	//int num;
	int contador=1;
	if(num>=10){
		//num=contaDigitos(num/10);
		//contador=contador+1;
		contador=(contaDigitos(num/10))+1;
		
	}
	return contador;

}
