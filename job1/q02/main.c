#include <stdio.h>

int main(int argc, char **argv) {

  if (argc > 1) {
    int i;
    char *p;

    printf("Numero de argumentos: %d\n", argc - 1);
    printf("Nome do executavel: %s\n", *(argv));
    for (i = 1; i < argc; i++) {
      printf("Parametro #%d: %s\n", i, *(argv+i));
    }
  } else {
    printf("Execute o programa com algum argumento\n");
  }

}
