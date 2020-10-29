#include <ctest.h>
#include <game.h>

CTEST(check_user_answer, correct_answer_1)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = '2';
    user_answer[2] = '3';
    user_answer[3] = '4';
    const int result = check_user_answer(user_answer);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, correct_answer_2)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = '6';
    user_answer[2] = '5';
    user_answer[3] = '7';
    const int result = check_user_answer(user_answer);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_duplicate_user_number, correct_answer_1)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = '2';
    user_answer[2] = '3';
    user_answer[3] = '4';
    const int result = check_duplicate_user_number(user_answer);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_duplicate_user_number, correct_answer_2)
{
    char user_answer[4];
    user_answer[0] = '6';
    user_answer[1] = '5';
    user_answer[2] = '0';
    user_answer[3] = '9';
    const int result = check_duplicate_user_number(user_answer);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_duplicate_user_number, incorrect_answer_1)
{
    char user_answer[4];
    user_answer[0] = '6';
    user_answer[1] = '6';
    user_answer[2] = '8';
    user_answer[3] = '9';
    const int result = check_duplicate_user_number(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_duplicate_user_number, incorrect_answer_2)
{
    char user_answer[4];
    user_answer[0] = '6';
    user_answer[1] = '4';
    user_answer[2] = '6';
    user_answer[3] = '9';
    const int result = check_duplicate_user_number(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_duplicate_user_number, incorrect_answer_3)
{
    char user_answer[4];
    user_answer[0] = '0';
    user_answer[1] = '0';
    user_answer[2] = '0';
    user_answer[3] = '0';
    const int result = check_duplicate_user_number(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_1)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = 'f';
    user_answer[2] = '5';
    user_answer[3] = '7';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_2)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = '5';
    user_answer[2] = 'h';
    user_answer[3] = '7';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_3)
{
    char user_answer[4];
    user_answer[0] = 'f';
    user_answer[1] = '3';
    user_answer[2] = '5';
    user_answer[3] = '8';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_4)
{
    char user_answer[4];
    user_answer[0] = '4';
    user_answer[1] = '3';
    user_answer[2] = '5';
    user_answer[3] = '>';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_5)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = '@';
    user_answer[2] = '5';
    user_answer[3] = '4';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_6)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = '3';
    user_answer[2] = '/';
    user_answer[3] = '8';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_7)
{
    char user_answer[4];
    user_answer[0] = '.';
    user_answer[1] = '3';
    user_answer[2] = '5';
    user_answer[3] = '2';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_8)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = ';';
    user_answer[2] = '5';
    user_answer[3] = '@';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_9)
{
    char user_answer[4];
    user_answer[0] = '1';
    user_answer[1] = '*';
    user_answer[2] = '5';
    user_answer[3] = '*';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_10)
{
    char user_answer[4];
    user_answer[0] = ':';
    user_answer[1] = '/';
    user_answer[2] = '.';
    user_answer[3] = '@';
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}
