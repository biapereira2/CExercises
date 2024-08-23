#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    double preco;
    int quantidade;
} Produto;

double checa_valor(Produto *produtos, char *nome_produto, int total_produtos){
    for(int i = 0; i < total_produtos; i++){
        if(strcmp(produtos[i].nome, nome_produto) == 0){
            return produtos[i].preco;
        }
    }
    
    return 0;
}
 
int main() {
    int N, M, P;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        double valorTotal = 0;
        scanf("%d", &M);
        
        Produto produtos[M];
        for(int j = 0; j < M; j++){
            scanf("%s %lf", produtos[j].nome, &produtos[j].preco);
        }
        
        scanf("%d", &P);
        for(int j = 0; j < P; j++){
            char nome_produto[51];
            int quantidade_produto;
            scanf("%s %d", nome_produto, &quantidade_produto);
            double valor_produto = checa_valor(produtos, nome_produto, M);
            valorTotal += valor_produto * quantidade_produto;
        }
        
        printf("R$ %.2f\n", valorTotal);
    }
 
    return 0;
}