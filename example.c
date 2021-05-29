#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

// Positivo verdadero
void fileNotClosed() {
  int fd = open("hi.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
  if (fd != -1) {
    char buffer[256];
    write(fd, buffer, strlen(buffer));
  }
}

// Falso Positivo
void fileNotClosedFP() {
  // Numero es siempre menor a 100
  int numero = rand() % 100; 
  int fd = open("hi.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
  if (fd != -1) {
    char buffer[256];
    write(fd, buffer, strlen(buffer));
  }
  if(numero < 100){
    close(fd);
  }
}

// Positivo verdadero
void test() {
  int *s = NULL;
  *s = 42;
}

// Negativo verdadero
void test2() {
  int *s = NULL;
  if (2 == 3) {
   *s = 42;
  }
}

int main(void){
    srand (time(NULL));
}
