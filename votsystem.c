#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int BJP=0, Kongarese=0, Shivsena=0, Rashtrawadi=0, other=0;
    int vote,n=1;
    int numvoters;
    
    printf("*****************************VOTING SYSTEM************************************************\n");
    printf("Press 1 for BJP\n");
    printf("Press 2 for kongress\n");
    printf("Press 3 for shivsena\n");
    printf("Press 4 for Rashtrawadi\n");
    printf("Press 5 for other\n");
    printf("press 0 for break");
    printf("\n*****************************VOTING SYSTEM MANEGMENT************************************\n");
    while(1){
    printf("\nVoter %d Enter your vote to the\a: ",n++);
    scanf("%d",&vote);

    if(vote==0)
    {
    break;
    }
    
    switch (vote){
        case 1:
            BJP++;
        break;
        case 2:
            Kongarese++;
        break;
        case 3:
            Shivsena++;
        break;
        case 4:
            Rashtrawadi++;
        break;
        case 5:
            other++;
        break;
        default:
            printf("aplease enter the valid numbers\n\a");
        }
        }
    printf("------------------------------------ CALCULATION --------------------------------------------\n");

        printf("BJP's total votes: %d \n",BJP);
        printf("kongress total votes: %d\n",Kongarese);
        printf("Shivesena's total votes: %d\n",Shivsena);
        printf("Rashtrawadi's total votes: %d\n",Rashtrawadi);
        printf("other's votes:%d\n",other);
        printf("======================================== WINNER ==========================================\n");
        if(BJP > Kongarese && BJP>Shivsena &&BJP>Rashtrawadi&& BJP> other)
        {
            printf("\n BJP is WINNER\n");
        }
        else if(Kongarese>BJP && Kongarese>Shivsena && Kongarese>Rashtrawadi && Kongarese>other){
            printf("kongress is the WINNER\n");
        }
        else if(Shivsena>BJP && Shivsena>Kongarese && Shivsena>Rashtrawadi && Shivsena>other){
            printf("Shivesena is the winner\n");
        }
        else if(Rashtrawadi>BJP && Rashtrawadi>Kongarese && Rashtrawadi>Shivsena && Rashtrawadi>other){
            printf("Rashtravadi is WINNER\n");
        }
        else if(BJP>=Kongarese && Kongarese>=Shivsena && Shivsena>=Rashtrawadi && Rashtrawadi>=other){
            printf("voting is TIED");
        }
        else{
            printf("\aother's is winner\a\n");
        }
        getch();
        return 0;
    }


