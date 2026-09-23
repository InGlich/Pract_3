#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Макрос
///дюймы
#define D_ENG 2.54
#define D_ESP 2.32166
#define D_LIT 2.7076
///мили
#define M_NAUT 1.852
#define M_LAND 1.609
#define M_ROM  1.475
#define M_RUS  7.468
#define M_GEO  7.4126


void task1() {
    int num1, num2;

    printf("\n=== ЗАДАНИЕ 1 ===\n");

    puts("Введите первое число:");
    scanf("%d", &num1); 
    printf("Введено число %d\n", num1);

    puts("Введите второе число:");
    scanf("%d", &num2);

    printf("\nСумма:%d + %d = %d\n", num2, num1, num2 + num1);
    printf("Разность:%d - %d = %d\n", num2, num1, num2 - num1);
    printf("Произведение:%d * %d = %d\n", num2, num1, num2 * num1);

    if (num1 != 0) {
        printf("Частное:%d / %d = %d\n", num2, num1, num2 / num1);
        printf("Остаток:%d %% %d = %d\n", num2, num1, num2 % num1);
    }
    else {
        printf("Деление на ноль невозможно!\n");
    }
}


void task2() {
    int dym;
    float miles;

    printf("\n=== ЗАДАНИЕ 2 (дюймы в см) ===\n");
    puts("Введите количество дюймов:");
    scanf("%d", &dym);

    printf("%d английских дюймов = %.2f см\n", dym, dym * D_ENG);
    printf("%d испанских дюймов  = %.2f см\n", dym, dym * D_ESP);
    printf("%d старолитовских дюймов = %.2f см\n", dym, dym * D_LIT);

    printf("\n=== ЗАДАНИЕ 2А (мили в км) ===\n");
    puts("Введите количество миль:");
    scanf("%f", &miles);

    printf("%.2f морских миль      = %.3f км\n", miles, miles * M_NAUT);
    printf("%.2f сухопутных миль   = %.3f км\n", miles, miles * M_LAND);
    printf("%.2f римских миль      = %.3f км\n", miles, miles * M_ROM);
    printf("%.2f старорусских миль = %.3f км\n", miles, miles * M_RUS);
    printf("%.2f географических миль = %.3f км\n", miles, miles * M_GEO);
}


void task3() {
    float a, b;

    printf("\n=== ЗАДАНИЕ 3 ===\n");
    puts("Введите число a:");
    scanf("%f", &a);
    puts("Введите число b:");
    scanf("%f", &b);

    printf("\n___________________________\n");
    printf("|  a * b  |  a + b  |  a - b  |\n");
    printf("---------------------------\n");
    printf("| %.0f * %.0f |  %.0f + %.0f  |  %.0f - %.0f  |\n", a, b, a, b, a, b);
    printf("---------------------------\n");
    printf("|   %5.0f   |   %5.0f   |   %5.0f   |\n", a * b, a + b, a - b);
    printf("---------------------------\n");
}


int main() {
    setlocale(LC_ALL, "Rus");

    task1();
    task2();
    task3();

    system("pause");
    return 0;
}