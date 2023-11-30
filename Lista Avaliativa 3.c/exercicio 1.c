#include <stdio.h>
#include <string.h>

int romanConstants(char symbol){
   
   switch (symbol)
   {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
   }
}

int romanToDecimal(char *roman){
    int result = 0;
    for (int i = 0; roman[i]; i++) {
        if (romanConstants(roman[i]) < romanConstants(roman[i + 1])) {
            result -= romanConstants(roman[i]);
        } else {
            result += romanConstants(roman[i]);
        }
    }

    return result;
}

void decimalToBinary(int decimal, char binary[]){
    binary[0] = '\0';

   while (decimal > 0) {
        char digit[2];
        sprintf(digit, "%d", decimal % 2);
        strcat(binary, digit);
        decimal = decimal / 2;
    }

    int size = strlen(binary);
    for (int i = 0; i < size / 2; i++) {
        char temp = binary[i];
        binary[i] = binary[size - 1 - i];
        binary[size - 1 - i] = temp;
    }
}

void decimalToHexadecimal(int decimal, char hexadecimal[]){
   int i = 0, remainder;
   hexadecimal[0] = '\0';
   
   while (decimal > 0) {
        remainder = decimal % 16;
        char digit[2];
        if (remainder < 10) {
            sprintf(digit,"%d",remainder);
        } else {
             sprintf(digit, "%c", remainder - 10 + 'a');
        }
        strcat(hexadecimal, digit);
        decimal = decimal / 16;
        i++;
    }
    int length = strlen(hexadecimal);
    for (int i = 0; i < length / 2; i++) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[length - 1 - i];
        hexadecimal[length - 1 - i] = temp;
    }
}

int main(){
   char romanNumeral[15], binary[32], hexadecimal[100];
   int decimal;
   scanf("%s", romanNumeral); 
   decimal = romanToDecimal(romanNumeral);
   decimalToBinary(decimal, binary);
   decimalToHexadecimal(decimal, hexadecimal);
   printf("%s na base 2: %s\n", romanNumeral, binary);
   printf("%s na base 10: %d\n", romanNumeral, decimal);
   printf("%s na base 16: %s\n", romanNumeral, hexadecimal);
   return 0;
}
