#include <stdio.h>
#include <locale.h>
#define MAX 50

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num = 15;
	int vet[MAX];
	int i = 0, j;
	int au = num;

	while(num > 0){
		vet[i] = num % 2;
		i++;
		num = num / 2;
	}

	printf("%d em binário é igual a ", au);

	for(j = i - 1; j >= 0; j--)
		printf("%d", vet[j]);
	printf("\n");

	return 0;
}
