#include "game.h"
#include <stdio.h>
#include <stdlib.h>

int game()
{
    char user_answer[4];
    printf("Игра начинается!Ведите цифры числа:\n");
    for (int i = 0; i < 4; i++) {
        printf("\nВведите %d-ую цифру числа: ", i + 1);
        scanf("%s", &user_answer[i]);
    }
    check_user_answer(user_answer);
    // for (int i = 0; i < 4; i++) {
    //  printf("%d", user_answer[i]);
    //}
    return 0;
}

int check_user_answer(char* user_answer)
{
    int a = 0;
    for (int i = 0; i < 4; i++) {
        if (isdigit(user_answer[i])) {
            a++;
        } else {
            printf("\nВы ввели что-то другое...\n");
            exit(1);
        }
    }
    return 0;
}
