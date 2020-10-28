#include "game.h"
#include <stdio.h>
#include <stdlib.h>

int game()
{
    int return_check_user_answer = 0;
    char user_answer[1000];
    printf("Игра начинается!Ведите цифры числа:\n");
    for (int i = 0; i < 4; i++) {
        printf("\nВведите %d-ую цифру числа: ", i + 1);
        scanf("%s", &user_answer[i]);
    }
    // for (int i = 0; i < 4; i++) {
    //      printf("%d\n", user_answer[i]);
    //  }
    // educ_in_the_int_type(user_answer);
    // generate();
    return_check_user_answer = check_user_answer(user_answer);
    if (return_check_user_answer == 12) {
        printf("\nВы ввели что-то другое...\n");
        exit(1);
    }
    return 0;
}

// int generate()
//{
//  int generate_array[5] = {0};
// int generate_number = 123;
// for (int i = 0; i < 4;) {
//  srand(time(NULL));
//  generate_number = rand() % 10;
//  generate_array[i] = 1;
//  i++;
//  printf("lox %d\n", generate_array[i]);
//}
// printf("ky %d\n", generate_number);
// return 0;
//}

// int educ_in_the_int_type(char* user_answer)
//{
//  int array;
//  array = atoi(user_answer);
//  printf("%d\n", array);
//  int array_9[4] = {0};
//  array_9[0] = array / 1000;
//  array_9[1] = (array / 100) % 10;
//  array_9[2] = (array % 100) / 10;
//  array_9[3] = array % 10;
//  for (int i = 0; i < 4; i++) {
//    printf("%d", array_9[i]);
//  }
//  return 0;
//}

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
    return check_duplicate_number(user_answer);
}

int check_duplicate_number(char* user_answer)
{
    int array[4] = {0};
    for (int i = 0; i < 4; i++) {
        char array_1[1];
        array_1[0] = user_answer[i];
        array[i] = atoi(array_1);
    }
    int a = 0, b = 0;
    for (int i = 0; i < 3;) {
        if (i == 0) {
            a = array[b];
        }
        if (a == array[i + 1]) {
            return 12;
        } else if (i == 3) {
            i = 0;
            b++;
        } else {
            i++;
        }
    }
    return 0;
}
