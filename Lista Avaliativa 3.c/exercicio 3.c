#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validateLicensePlate(char *plate){  
   if (strlen(plate) == 8){
      for (int i = 0; i < 3; i++){
        if (!isalpha(plate[i])){
            return 0;
        }
      }
      if (plate[3] != '-' || !isdigit(plate[4]) || !isdigit(plate[5]) || !isdigit(plate[6]) || !isdigit(plate[7])){
        return 0;
      } 
   }
   else if (strlen(plate) == 7){
      for (int i = 0; i < 3; i++){
         if (!isalpha(plate[i])){
           return 0;
         }
      }
      if (!isdigit(plate[3]) || !isalpha(plate[4]) || !isdigit(plate[5]) || !isdigit(plate[6])){
        return 0;
      }
   }
   else{
      return 0;
   }
   return 1;
}

int validateWeekday(char *day){
   char *validDays[] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
   for (int i = 0; i < 7; i++){
     if (strcmp(day, validDays[i]) == 0){
        return 1;
     }
   }
   return 0;
}

int main(){
   char licensePlate[10];
   char weekday[20];
   int flag = 0;
   scanf("%s", licensePlate);
   scanf("%s", weekday); 
   if (!validateLicensePlate(licensePlate)) {
        printf("Placa invalida\n"); 
        flag++;
    }
   if (!validateWeekday(weekday)) {
        printf("Dia da semana invalido\n");
        flag++;
    }
    if(flag > 0){
     return 0;
    }
    else{
       for (int i = 0; i < strlen(weekday); i++) {
         weekday[i] = tolower(weekday[i]);
       }
    }
    int lastDigit = licensePlate[strlen(licensePlate) -  1]-'0';

    if(strcmp(weekday, "segunda-feira") == 0 && (lastDigit == 0 || lastDigit == 1)){
          printf("%s nao pode circular %s\n", licensePlate, weekday);
    }
    else if(strcmp(weekday, "terca-feira") == 0 && (lastDigit == 2 || lastDigit == 3)){
          printf("%s nao pode circular %s\n", licensePlate, weekday);
    }
     else if(strcmp(weekday, "quarta-feira") == 0 && (lastDigit == 4 || lastDigit == 5)){
          printf("%s nao pode circular %s\n", licensePlate, weekday);
     }
     else if(strcmp(weekday, "quinta-feira") == 0 && (lastDigit == 6 || lastDigit == 7)){
          printf("%s nao pode circular %s\n", licensePlate, weekday);
     }
     else if(strcmp(weekday, "sexta-feira") == 0 && (lastDigit == 8 || lastDigit == 9)){
          printf("%s nao pode circular %s\n", licensePlate, weekday);
     }
     else if(strcmp(weekday, "sabado") == 0 || strcmp(weekday, "domingo") == 0){
      printf("Nao ha proibicao no fim de semana\n");
     }
     else{
      printf("%s pode circular %s\n", licensePlate, weekday);
     }

    return 0;
}
