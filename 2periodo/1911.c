#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[21];
    char assinatura_original[21];
} Aluno;

int max(int a, int b) {
    return a > b ? a : b;
}

int encontra_falsos(Aluno *alunos, char *nome, char *ass_aula, int quant_alunos){
    for(int i = 0; i < quant_alunos; i++){
        if(strcmp(alunos[i].nome, nome) == 0){
            int diferenca = 0;
            if(strcmp(alunos[i].assinatura_original, ass_aula) != 0){
                for(int j = 0; j < max(strlen(alunos[i].assinatura_original), strlen(ass_aula)); j++){
                    if(alunos[i].assinatura_original[j] != ass_aula[j]){
                        diferenca++;
                    }
                    if(diferenca > 1)
                        return 1;
                }
            }
            return 0;
        }
    }
    
    return 0;
}

int main() {
    int N, M;
    
    scanf("%d", &N);
    
    while(N != 0){
        Aluno alunos[51];
        char nome[21], ass_aula[21];
        
        for(int i = 0; i < N; i++){
            scanf("%s %s", alunos[i].nome, alunos[i].assinatura_original);
        }
        
        scanf("%d", &M);
        int casos_falsos = 0;
        for(int i = 0; i < M; i++){
            scanf("%s %s", nome, ass_aula);
            casos_falsos += encontra_falsos(alunos, nome, ass_aula, N);
        }
        
        printf("%d\n", casos_falsos);
        scanf("%d", &N);
    }
    return 0;
}