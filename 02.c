#include <stdio.h>
#include <locale.h>
  
void contarCaracteres(char* str){
    int vogais = 0; 
	int consoantes = 0;
    int i;
    char ch;
  
    for (i = 0; str[i] != '\0'; i++){
        ch = str[i];
        if (ch == 'a' || ch == 'e'
        	|| ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vogais++;
            
        else if (ch == ' ')
            continue;
  
        else
            consoantes++;
    }
  
    printf("\nVogais: %d", vogais);
    printf("\nConsoantes: %d", consoantes);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    char* str = "Caçando pérolas no fundo do oceano";
    printf("Frase: %s", str);
  
    contarCaracteres(str);
  
    return 0;
}
