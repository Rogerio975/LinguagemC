#include <stdio.h>

#define NUM_ALUNOS 10
#define NUM_TRIMESTRES 4

// Definição da struct
typedef struct {
    char nome[50];
    int idade;
    char disciplina[50];
    float notas[NUM_TRIMESTRES];
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS] = {
        {"Maria Silva", 16, "Matemática", {8.5, 7.8, 9.0, 8.2}},
        {"João Pereira", 17, "História", {7.0, 6.5, 8.0, 7.5}},
        {"Ana Costa", 15, "Português", {9.2, 8.7, 9.5, 9.0}},
        {"Carlos Souza", 16, "Geografia", {6.8, 7.2, 7.5, 8.0}},
        {"Beatriz Lima", 17, "Biologia", {8.0, 8.5, 8.8, 9.1}},
        {"Pedro Alves", 16, "Química", {7.5, 7.0, 6.8, 7.2}},
        {"Fernanda Rocha", 15, "Física", {9.0, 8.5, 9.3, 9.4}},
        {"Lucas Martins", 17, "Inglês", {6.5, 7.0, 7.8, 8.0}},
        {"Juliana Torres", 16, "Artes", {8.8, 9.0, 9.2, 9.5}},
        {"Rafael Gomes", 15, "Educação Física", {7.2, 7.5, 8.0, 8.3}}
    };

    // Exibir todos os alunos
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i+1);
        printf("  Nome: %s\n", alunos[i].nome);
        printf("  Idade: %d anos\n ", alunos[i].idade);
        printf("  Disciplina: %s\n", alunos[i].disciplina);
        for (int j = 0; j < NUM_TRIMESTRES; j++) {
            printf("  Nota %dº trimestre: %.1f\n", j+1, alunos[i].notas[j]);
        }
        printf("\n");
    }

    return 0;
}
