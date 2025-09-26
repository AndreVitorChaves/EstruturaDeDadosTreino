

#include <stdio.h>

int main()
{
    char campeonatos[2][40] = {"Campeonato Brasileiro", "Copa de Brasil"};
    char jogadores[35][50];
    char criterios[5][40] = {"Gols Marcados", "Passes Certos", 
                               "Passes Errados", "Desarmes", "Assistências"};
    int estatisticas[2][35][5];
    
        for(int i = 0; i < 35; i++){
            printf("Digite o nome do %i jogador: \n", i + 1);
            fgets(jogadores[i], sizeof(jogadores[i]), stdin);
        }
            
    
        for (int camp = 0; camp < 2; camp++){
            printf("\n %s: \n", campeonatos[camp]);
            
            for (int jog = 0; jog < 35; jog++){
                printf("\n %s: ", jogadores[jog]);
                
                for (int cri = 0; cri < 5; cri++){
                    printf("%s: ", criterios[cri]);
                    scanf("%d", &estatisticas[camp][jog][cri]);
                }
            }
            
            
        }
        
        for (int camp = 0; camp < 2; camp++){
            printf("\n ===================== \n");
            printf("\n %s: \n", campeonatos[camp]);
            printf("======================== \n");
            
            for (int jog = 0; jog < 35; jog++){
                printf("\n %s: \n", jogadores[jog]);
                
                for (int cri = 0; cri < 5; cri++){
                    printf("%s: ", criterios[cri]);
                    printf("%d \n", estatisticas[camp][jog][cri]);
                }
            }
            
            
        }
    


    return 0;
}
