#include "game.h"
#include <stdio.h>
#include <stdlib.h>

int game()
{
    int return_check_user_answer = 0;
    char user_answer[4];
    printf("Игра начинается!Ведите цифры числа:\n");
    for (int i = 0; i < 4; i++) {
        printf("\nВведите %d-ую цифру числа: ", i + 1);
        scanf("%s", &user_answer[i]);
    }
    return_check_user_answer = check_user_answer(user_answer);
    if (return_check_user_answer == 12) {
        printf("\nВы ввели что-то другое...\n");
        exit(1);
    }
    // for (int i = 0; i < 4; i++) {
    //  printf("%d", user_answer[i]);
    //}printf("\nВы ввели что-то другое...\n");
    return 0;
}

int check_user_answer(char* user_answer)//Проверяет ответ пользователя на мусор и буквы.
{
    int a = 0;
    for (int i = 0; i < 4; i++) {
        if (isdigit(user_answer[i])) {
            a++;
        } else {
            a = 12;
            return a;
        }
    }
    return 0;
}
