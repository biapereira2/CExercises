#include <stdio.h>
#include <string.h>

int main(void){

    char str[51];
    int italico = 0, negrito = 0;

    while((fgets(str, 51, stdin)) != NULL){
        for(unsigned int i = 0; str[i] != '\0'; i++){
            if (str[i] == '_' && italico == 0){
                printf("<i>");
                italico = 1;
                
            }else if (str[i] == '_' && italico == 1){
                printf("</i>");
                italico = 0;

            }else if(str[i] == '*' && negrito == 0){
                printf("<b>");
                negrito = 1;

            }else if(str[i] == '*' && negrito == 1){
                printf("</b>");
                negrito = 0;

            }else{
                printf("%c", str[i]);
            }
        }
    }
    return 0;
}