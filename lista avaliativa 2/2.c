#include <stdio.h>

float calculateWeightedStrength(int strengths[]) {
    return (8 * strengths[0] + 10 * (strengths[1] + strengths[2]) + 5 * (strengths[3] + strengths[4]) + 8 * (strengths[5] + strengths[6]) + 11 * (strengths[7] + strengths[8]) + 12 * (strengths[9] + strengths[10])) / 100.0;
}

int main() {
    int strengthsTeamA[11] = {0}, strengthsTeamB[11] = {0};
    char nameTeamA[31], nameTeamB[31];
    char playerName[31], playerPosition;
    int playerStrength;
    
    scanf(" %30[^\n]", nameTeamA);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", playerName, &playerPosition, &playerStrength);

        int position = (playerPosition == 'L') ? (strengthsTeamA[1] == 0) ? 1 : 2 : 
        (playerPosition == 'Z') ? (strengthsTeamA[3] == 0) ? 3 : 4 : 
        (playerPosition == 'V') ? (strengthsTeamA[5] == 0) ? 5 : 6 : 
        (playerPosition == 'M') ? (strengthsTeamA[7] == 0) ? 7 : 8 : 
        (playerPosition == 'A') ? (strengthsTeamA[9] == 0) ? 9 : 10 : 0;

        if (strengthsTeamA[position] == 0)
            strengthsTeamA[position] = playerStrength;
    }

    scanf(" %30[^\n]", nameTeamB);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", playerName, &playerPosition, &playerStrength);

        int position = (playerPosition == 'L') ? (strengthsTeamB[1] == 0) ? 1 : 2 : 
        (playerPosition == 'Z') ? (strengthsTeamB[3] == 0) ? 3 : 4 : 
        (playerPosition == 'V') ? (strengthsTeamB[5] == 0) ? 5 : 6 : 
        (playerPosition == 'M') ? (strengthsTeamB[7] == 0) ? 7 : 8 : 
        (playerPosition == 'A') ? (strengthsTeamB[9] == 0) ? 9 : 10 : 0;

        if (strengthsTeamB[position] == 0)
            strengthsTeamB[position] = playerStrength;
    }

    float strengthTeamA = calculateWeightedStrength(strengthsTeamA);
    float strengthTeamB = calculateWeightedStrength(strengthsTeamB);

    printf("%s: %.2f de forca\n%s: %.2f de forca\n", nameTeamA, strengthTeamA, nameTeamB, strengthTeamB);

    if (strengthTeamA > strengthTeamB)
        printf("%s eh mais forte\n", nameTeamA);
    else if (strengthTeamB > strengthTeamA)
        printf("%s eh mais forte\n", nameTeamB);
    else
        printf("Os times têm a mesma força\n");

    return 0;
}
