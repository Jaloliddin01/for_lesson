#include <stdio.h>

int main() {
    int numTeam[24]= {0};
    int winner1 = 0, winner2 = 0, winner3 = 0;

    for(int a = 0; a < 3; a++){

        printf("Enter score for activity %d\n" , a+1);

        for(int i = 0; i < 3; i++){
            int score;
            printf("Enter a score for team %d : ", i+1);
            scanf("%d" , &score);
            numTeam[i] += score;
        }
    }
        
    for (int b = 0; b < 3; b++)
        printf("The score of %dth team is: %d\n\n", b+1, numTeam[b]);

    int mx = numTeam[winner1];

    for (int i = 0; i < 3; i++){
        if(mx < numTeam[i])
            mx = numTeam[i], winner1 = i;
    }

    for(int i = 0; i < 3; i++)
        if(i != winner1){
            winner2 = i;
            break;
        }

    mx = numTeam[winner2];

    for (int i = 0; i < 3; i++){
        if(mx < numTeam[i] && i != winner1)
            mx = numTeam[i], winner2 = i;
    }

    for(int i = 0; i < 3; i++)
        if(i != winner1 && i != winner2){
            winner3 = i;
            break;
        }

    mx = numTeam[winner3];

    for (int i = 0; i < 3; i++){
        if(mx < numTeam[i] && i != winner1 && i != winner2)
            mx = numTeam[i], winner3 = i;
    }

    printf("Winner team is %d with %d score!\n", winner1+1, numTeam[winner1]);
    printf("The second highest score belongs to Team%d with %d score!\n", winner2+1, numTeam[winner2]);
    printf("And Team%d deserves third place with %d score!\n", winner3+1, numTeam[winner3]);

    return 0;
}