#include <stdio.h>
#include <string.h>
#include <ctype.h>

void repetir_char(char c, int vezes) {
    int i;
    for (i = 0; i < vezes; i++) {
       putchar(c);
    }
    putchar('\n');
}

int main() {
    char palavra[6] = "AREIA", chute[10];
    int chance = 6, tentativa = 0, count, dica;

    repetir_char('-', 30);
    printf("%*s\n", 17, "TERMO");
    repetir_char('-', 30);

    do {
        printf("Digite uma palavra de 5 letras: ");
        scanf("%s", chute);
        count = strlen(chute);
        if (count < 5) {
            printf("A palavra e muito pequena, insira uma palavra de 5 letras.\n");
        }
        else if (count > 5) {
             printf("A palavra e muito grande, insira uma palavra de 5 letras.\n");
        }
        else {
            for(int i = 0; chute[i] != '\0'; i++) {
            chute[i] = toupper(chute[i]);
            }

            for (int i = 0; i < count; i++) {
                if (chute[i] == palavra[i]) {
                    dica = 1;
                }
                else if (chute[i] != palavra[i]) {
                    dica = 0;
                    for (int v = 0; v < count; v++){
                        if (chute[i] == palavra[v]) {
                            dica = 2;
                        }
                    }
                }
                if (dica == 1) {
                    printf("\033[032m%c\033[0m\t", chute[i]);
                }
                else if (dica == 2) {
                    printf("\033[033m%c\033[0m\t", chute[i]);
                }
                else if (dica == 0) {
                    printf("\033[031m%c\033[0m\t",chute[i]);
                }            
            }
            tentativa += 1;
        }
        printf("\n");
        if (strcmp(chute, palavra) == 0) {
            printf("Parabéns você acertou a palavra secreta.\n");
            tentativa = chance;
        }
        printf("Você errou a palavra secreta, você tem %d chances.\n", (6 - tentativa));
    }while(tentativa < chance);

    return 0;
}