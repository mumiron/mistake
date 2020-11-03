#ifndef GAME_H
#define GAME_H
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game();
int check_user_answer(char* user_answer);
int check_duplicate_user_number(char* user_answer);
int* educ_in_the_int_type(char* user_answer);
int generate(int* generate_number);
bool check_duplicate(int* generate_number);
int collect(char* user_answer, int* generate_number);
void compare(int* user_array, int* generate_array);
int result(int cow, int bow);
#endif
