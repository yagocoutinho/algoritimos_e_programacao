#include <stdio.h>
#include <math.h>

double calculateEndOfMonthAmount(int month, double monthlyContribution, double interestRate) {
    return monthlyContribution * (1 + interestRate) * (((pow(1 + interestRate, month) - 1) / interestRate));
}

int main() {
    int numberOfMonths;
    double monthlyContribution, interestRate;

    scanf("%d", &numberOfMonths);
    scanf("%lf", &monthlyContribution);
    scanf("%lf", &interestRate);

    for (int i = 1; i <= numberOfMonths; i++) {
        double amount = calculateEndOfMonthAmount(i, monthlyContribution, interestRate);
        printf("Montante ao fim do mes %d: R$ %.2f\n", i, amount);
    }
    return 0;
}
