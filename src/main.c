#include "game.h"

int main()
{
    printf("Правила игры: ПК загадывает 4-х значное число(цифры не "
           "повторяются).Вы должны угадать его. \nCow это количество цифр, "
           "которые есть в числе у вас и у пк. \nBow это цифры, которые "
           "находятся на одном и том же месте в числе  вас и у пк. \n "
           "Начнем.\n");
    game();
    return 0;
}
