#include <stdio.h>

int main(){
	float salario;
	
	scanf("%f",&salario);
	if(salario<=400.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",salario+(salario*0.15),salario*0.15);
	}
	if(salario>400.00 && salario<=800.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",salario+(salario*0.12),salario*0.12);
	}
	if(salario>800.00 && salario<=1200.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",salario+(salario*0.10),salario*0.10);
	}
	if(salario>1200.00 && salario<=2000.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",salario+(salario*0.07),salario*0.07);
	}
	if(salario>2000.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",salario+(salario*0.04),salario*0.04);
	}
	return 0;
	
}