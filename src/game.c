#include "game.h"

int counter = 0;
int generate_number[4] = {0};
int game()
{
    int return_check_user_answer = 0;
    char user_answer[1000];
    printf("Введите цифры числа:\n");
    for (int i = 0; i < 4; i++) {
        printf("\nВведите %d-ую цифру числа: ", i + 1);
        scanf("%s", &user_answer[i]);
    }
    return_check_user_answer = check_user_answer(user_answer);
    if (return_check_user_answer == 12) {
        printf("\nВы ввели что-то другое...\n");
        exit(1);
    } else {
        collect(user_answer, generate_number);
    }
    return 0;
}

int collect(char* user_answer, int* generate_number)
{
    int* user_array;
    user_array = educ_in_the_int_type(user_answer);
    if (counter == 0) {
        generate(generate_number);
        counter++;
    }
    compare(user_array, generate_number);
    return 0;
}

void compare(int* user_array, int* generate_array)
{
    int cow = 0, bow = 0;
    for (int i = 0; i < 4; i++) {
        if (user_array[i] == generate_array[i]) {
            bow++;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (user_array[i] == generate_array[j] && i != j) {
                cow++;
            }
        }
    }
    result(cow, bow);
}

int result(int cow, int bow)
{
    int a = 0;
    if (bow == 4) {
        printf("Вау!Вы победили!");
    } else {
        printf("cow=%d,bow=%d\n", cow, bow);
        printf("Продолжим?1/2(Yes/No)\n");
        scanf("%d", &a);
        if (a == 1) {
            game();
        } else {
            exit(0);
        }
    }
    return 0;
}

int generate(int* generate_number)
{
    bool return_check_generate_number = false;
    srand(time(NULL));
    while (return_check_generate_number != true) {
        for (int i = 0; i < 4; i++) {
            generate_number[i] = rand() % 10;
        }
        return_check_generate_number = check_duplicate(generate_number);
    }
    return 0;
}

bool check_duplicate(int* generate_array)
{
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (generate_array[i] == generate_array[j]) {
                return false;
            }
        }
    }
    return true;
}

int* educ_in_the_int_type(char* user_answer)
{
    int array;
    array = atoi(user_answer);
    static int array_9[4] = {0};
    array_9[0] = array / 1000;
    array_9[1] = (array / 100) % 10;
    array_9[2] = (array % 100) / 10;
    array_9[3] = array % 10;
    return array_9;
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
    return check_duplicate_user_number(user_answer);
}

int check_duplicate_user_number(char* user_answer)
{
    int array[4] = {0};
    for (int i = 0; i < 4; i++) {
        char array_1[1];
        array_1[0] = user_answer[i];
        array[i] = atoi(array_1);
    }
    if (check_duplicate(array) == false) {
        return 12;
    }
    return 0;
}
