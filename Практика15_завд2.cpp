#include <stdio.h>
#include <locale.h>
// Функція для знаходження мінімуму з трьох чисел
int findMin(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    }
    else if (b <= a && b <= c) {
        return b;
    }
    else {
        return c;
    }
}
int main() {
    // Оголошення змінних
    int num1, num2, num3;
    setlocale(LC_ALL, "ukr");
    // Запит користувача для введення трьох чисел
    printf("Введіть перше число: ");
    scanf_s("%d", &num1);
    printf("Введіть друге число: ");
    scanf_s("%d", &num2);
    printf("Введіть третє число: ");
    scanf_s("%d", &num3);
    // Перевірка на введення однакових чисел
    if (num1 == num2 && num2 == num3) {
        printf("Ви ввели однакові числа. Програма завершена.\n");
        return 1; // Повертаємо 1 для позначення помилки 
    }
    // Знаходження та виведення найменшого числа
    int minNumber = findMin(num1, num2, num3);
    printf("Найменше число: %d\n", minNumber);
    return 0;
}

