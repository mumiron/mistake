#include <ctest.h>
#include <game.h>

CTEST(check_user_answer, correct_answer_1)
{
    char user_answer[4] = {1, 2, 3, 4};
    const int result = check_user_answer(user_answer);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, correct_answer_2)
{
    char user_answer[4] = {3, 4, 2, 8};
    const int result = check_user_answer(user_answer);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_1)
{
    char user_answer[4] = {f, 4, 2, 8};
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_2)
{
    char user_answer[4] = {1, f, 2, 8};
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_3)
{
    char user_answer[4] = {1, 4, f, 8};
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_4)
{
    char user_answer[4] = {1, 4, 2, f};
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_5)
{
    char user_answer[4] = {1, /, 2, 7};
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_6)
{
    char user_answer[4] = {1, 4, ., 3};
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_7)
{
    char user_answer[4] = {1, 4, 2, ]};
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_8)
{
    char user_answer[4] = {1, 4, 2, % };
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_answer, incorrect_answer_9)
{
    char user_answer[4] = { 1, 4, 2, @ };
    const int result = check_user_answer(user_answer);
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}
