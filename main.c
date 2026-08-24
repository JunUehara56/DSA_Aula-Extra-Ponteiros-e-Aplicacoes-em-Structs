#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char email[50];
}Usuario;

typedef struct {
    char titulo[50];
    char autor[50];
    int codigo;
    char status[20];
    Usuario usuario;
}Livro;

void emprestarLivro(Livro *livro, Usuario *usuario) {
}

int main() {
    Livro livro1;
    Usuario usuario1;
    strcpy(usuario1.nome, "Joao Silva");
    strcpy(usuario1.email, "joao.silva@gmail.com");
    strcpy(livro1.titulo, "O Hobbit");
    strcpy(livro1.autor, "J.R.R. Tolkien");
    livro1.codigo = 101;
    strcpy(livro1.status, "disponivel");
    printf("===== LIVRO =====\n");
    printf("Titulo: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Codigo: %d\n", livro1.codigo);
    printf("Status: %s\n", livro1.status);
    emprestarLivro(&livro1, &usuario1);
    return 0;
}

