

#include <stdio.h>
#include <string.h>

int main()
{
   
  char alunos[35][50];
  char disciplinas[6][30];
  int repetido;
     for (int i = 0; i < 6; i++){
         do{
            repetido = 0;
            printf("Cadastre as materias desejadas: ");
            fgets(disciplinas[i], sizeof(disciplinas[i]), stdin);
            
            for (int j = 0; j < i; j++){
                if(strcmp(disciplinas[i], disciplinas[j]) == 0){
                    printf("Valor inválido! As matérias não devem se repetir!");
                    repetido = 1;
                    break;
                }
             }
             
        }while(repetido);
        
         
     } 
       
        
    for (int l = 0; l < 35; l++){
        printf("Cadastre o aluno %i: ", l);
        fgets(alunos[l], sizeof(alunos[l]), stdin);
    }  
    
    float notas[6][35], notaFinal[6];
    float notaCalculo[6] = {0};
    
    for (int linha = 0; linha < 6; linha++){
        notaFinal[linha] = 0;
        for(int coluna = 0; coluna < 35; coluna++){
            printf("\n Digite a nota de %s do aluno %s: ", disciplinas[linha], alunos[coluna]);
            scanf("%f", &notas[linha][coluna]);
            
            notaCalculo[linha] += notas[linha][coluna];
            
        }
        notaFinal[linha] = (notaCalculo[linha]/35);
    }
    
    for (int linha = 0; linha < 6; linha++){
        printf("Media de %s: %.2f \n", disciplinas[linha], notaFinal[linha]);
    }
    
    
        
    
    
    
    
    
   
    
    

    return 0;
}
