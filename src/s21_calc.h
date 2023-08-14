#ifndef SRC_S21_CALC_H_
#define SRC_S21_CALC_H_

//#ifdef __cplusplus
//extern "C" {
//#endif
//#include "calc.h"
//#ifdef __cplusplus
//}
//#endif
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_MAX_SIZE 20
typedef struct Stack_char Stack_char;

struct Stack_char {
  char data;
  Stack_char *Next;
};
typedef struct Stack_double Stack_double;

struct Stack_double {
  double data;
  Stack_double *Next;
};

// Помещение элемента в стек.
void push_double(Stack_double **stk, double f);
void push_char(Stack_char **stk, char f);

// Удаление элемента из стека.
char pop_char(Stack_char **stk);
double pop_double(Stack_double **stk);

// Проверка на унарный минус.
bool unarny_minus_or_plus(char i);

// Приоритет знаков.
int Prior(char a);

// Осуществление операций.
void operation(Stack_double **double_double, Stack_char **char_char,
               int flag_function);

// Очищение памяти.
void destroy(Stack_double **double_double, Stack_char **char_char);

// Парсинг, Проверка на ошибки.
char *s21_calc(char *i, char *j);

char *s21_strcat(char *dest, const char *src);

#endif  // SRC_S21_CALC_H_
