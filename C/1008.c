#include <stdio.h>

int main() {
    int employeeNumber, workedHours;
    double hourlymoney, salary;

    scanf("%d", &employeeNumber);
    scanf("%d", &workedHours);
    scanf("%lf", &hourlymoney);

    salary = workedHours * hourlymoney;

    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}
