#include <stdio.h>

int main(void) {

  typedef struct tAluno {

    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
  };

  struct tAluno tAluno;

  printf("--------------------------\n");
  printf("|        REGISTRO        |\n");
  printf("--------------------------\n\n");
  
  printf("Infome o numero da sua matricula: ");
  scanf("%i", &tAluno.matricula);

  printf("Informe a primeira nota: ");
  scanf("%f", &tAluno.nota1);

  printf("Informe a segunda nota: ");
  scanf("%f", &tAluno.nota2);

  printf("Informe a terceira nota: ");
  scanf("%f", &tAluno.nota3);

  printf("Informe a quarta nota: ");
  scanf("%f", &tAluno.nota4);

  tAluno.media = (tAluno.nota1 + tAluno.nota2 + tAluno.nota3 + tAluno.nota4) / 4;

  system("clear");
  printf("\n");
  
    
  printf("-------------------------\n");
  printf("|       RESULTADO       | \n");
  printf("-------------------------\n\n");

  printf("Matricula : %i\n", tAluno.matricula);
  printf("Media: %.2f", tAluno.media);
  
  return 0;
}