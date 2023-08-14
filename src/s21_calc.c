#include "s21_calc.h"

char *s21_strcat(char *dest, const char *src) {
  int i = 0;
  while (*(dest + i) != '\0') {
    i++;
  }
  int k = 0;
  do {
    *(dest + i) = *(src + k);
    i++;
    k++;
  } while (*(dest + i - 1) != '\0');

  return dest;
}

// Помещение элемента в стек
void push_double(Stack_double **stk, double f) {
  Stack_double *tmp = malloc(sizeof(Stack_double));
  tmp->data = f;
  tmp->Next = *stk;
  *stk = tmp;
}
void push_char(Stack_char **stk, char f) {
  Stack_char *tmp = malloc(sizeof(Stack_char));
  tmp->data = f;
  tmp->Next = *stk;
  *stk = tmp;
}

// Удаление элемента из стека
char pop_char(Stack_char **stk) {
  Stack_char *tmp = *stk;
  char elem = tmp->data;
  *stk = tmp->Next;
  free(tmp);
  return elem;
}
// Удаление элемента из стека
double pop_double(Stack_double **stk) {
  Stack_double *tmp = *stk;
  double elem = tmp->data;
  *stk = tmp->Next;
  free(tmp);
  return elem;
}

bool unarny_minus_or_plus(char i) {
  return (!i || i == '(' || i == '+' || i == '-' || i == '*' || i == '/' ||
          i == '^' || i == '%');
}

int Prior(char a) {
  int tmp = 0;
  switch (a) {
    case '1':  // cos
    case '2':  // sin
    case '3':  // tan
    case '4':  // acos
    case '5':  // asin
    case '6':  // atan
    case '7':  // sqrt
    case '8':  // ln
    case '9':  // log
    case 'a':  // -cos
    case 'b':  // -sin
    case 'c':  // -tan
    case 'd':  // -acos
    case 'e':  // -asin
    case 'f':  // -atan
    case 'g':  // -sqrt
    case 'h':  // -ln
    case 'i':  // -log
    case '^':
      tmp = 4;
      break;
    case '*':
    case '/':
    case '%':
      tmp = 3;
      break;
    case '-':
    case '+':
      tmp = 2;
      break;
    case '(':
      tmp = 1;
      break;
  }
  return tmp;
}

void operation(Stack_double **double_double, Stack_char **char_char,
               int flag_function) {
  double one;
  char func_or_operator = pop_char(char_char);
  double two = pop_double(double_double);
  if (flag_function == 0) {
    one = pop_double(double_double);
  }
  double result;
  switch (func_or_operator) {
    case '+':
      result = one + two;
      break;
    case '-':
      result = one - two;
      break;
    case '*':
      result = one * two;
      break;
    case '/':
      result = one / two;
      break;
    case '^':
      result = pow(one, two);
      break;
    case '%':
      result = fmod(one, two);
      break;
    case '1':
      result = cos(two);
      break;
    case '2':
      result = sin(two);
      break;
    case '3':
      result = tan(two);
      break;
    case '4':
      result = acos(two);
      break;
    case '5':
      result = asin(two);
      break;
    case '6':
      result = atan(two);
      break;
    case '7':
      result = sqrt(two);
      break;
    case '8':
      result = log(two);
      break;
    case '9':
      result = log10(two);
      break;
    case 'a':
      result = cos(two) * (-1);
      break;
    case 'b':
      result = sin(two) * (-1);
      break;
    case 'c':
      result = tan(two) * (-1);
      break;
    case 'd':
      result = acos(two) * (-1);
      break;
    case 'e':
      result = asin(two) * (-1);
      break;
    case 'f':
      result = atan(two) * (-1);
      break;
    case 'g':
      result = sqrt(two) * (-1);
      break;
    case 'h':
      result = log(two) * (-1);
      break;
    case 'i':
      result = log10(two) * (-1);
      break;
  }
  push_double(double_double, result);
}

void destroy(Stack_double **double_double, Stack_char **char_char) {
  while (*double_double != NULL) {
    pop_double(double_double);
  }
  while (*char_char != NULL) {
    pop_char(char_char);
  }
}

char *s21_calc(char *i, char *j) {
  // char i[200] = "AdcadcadcAdcadc"; // Ввод
  static char result[256];
  // char j[30] = "10"; // это  X
  Stack_double *head_double = NULL;
  Stack_char *head_char = NULL;
  char *priemnii;
  int k = 0, flag_function = 0;
  int sign = 0;
  int flag_error = 0;
  int ravenstvo_skobok = 0;

  while (i[k] != '\0') {
    char tmp_tmp[256] = "\0";
    if ((i[k] == '-' || i[k] == '+') && unarny_minus_or_plus(i[k - 1])) {
      strncat(tmp_tmp, i + k, 1);
      k++;
    }
    if (i[k] >= '0' && i[k] <= '9') {
      int tochka = 0;
      while (((i[k] >= '0' && i[k] <= '9') || i[k] == '.') && tochka < 2) {
        if (i[k] == '.') {
          tochka++;
        }
        strncat(tmp_tmp, i + k, 1);
        k++;
      }
      if (tochka > 1) {
        flag_error = 1;
        break;
      }
      double tmp1 = strtod(tmp_tmp, &priemnii);
      push_double(&head_double, tmp1);
      k--;
    } else if (i[k] == '+' || i[k] == '-' || i[k] == '*' || i[k] == '/' ||
               i[k] == '%' || i[k] == '^') {
      if (i[k - 1] == '+' || i[k - 1] == '-' || i[k - 1] == '*' ||
          i[k - 1] == '/' || i[k - 1] == '%' || i[k - 1] == '^' ||
          i[k + 1] == '\0' || k == 0) {
        flag_error = 1;
        break;
      }
      while (head_char != NULL && Prior(i[k]) <= Prior(head_char->data) &&
             i[k] != '^') {
        operation(&head_double, &head_char, flag_function);
      }
      push_char(&head_char, i[k]);

    } else if (i[k] == '(') {
      if ((i[k - 1] >= '0' && i[k - 1] <= '9') || i[k - 1] == 'x') {
        flag_error = 1;
        break;
      }
      push_char(&head_char, i[k]);
      ravenstvo_skobok++;
    } else if (i[k] == ')') {
      if (i[k + 1] != '+' && i[k + 1] != '-' && i[k + 1] != '*' &&
          i[k + 1] != '/' && i[k + 1] != '%' && i[k + 1] != '^' &&
          i[k + 1] != '\0' && i[k + 1] != ')') {
        flag_error = 1;
        break;
      }
      ravenstvo_skobok--;
      if (unarny_minus_or_plus(i[k - 1]) || ravenstvo_skobok < 0) {
        flag_error = 1;
        break;
      }
      while (head_char->data != '(') {
        operation(&head_double, &head_char, flag_function);
      }
      pop_char(&head_char);
      if ((head_char != NULL && head_char->data >= '1' &&
           head_char->data <= '9') ||
          (head_char != NULL && head_char->data >= 'a' &&
           head_char->data <= 'i')) {
        flag_function = 1;
        operation(&head_double, &head_char, flag_function);
        flag_function = 0;
      }
    } else if (i[k] == 'c' || i[k] == 's' || i[k] == 't' || i[k] == 'a' ||
               i[k] == 'l') {
      if (((i[k - 1] && (i[k - 1] >= '0' && i[k - 1] <= '9')) ||
           i[k - 1] == 'x')) {
        flag_error = 1;
        break;
      }

      if (i[k - 1] == '-' && unarny_minus_or_plus(i[k - 2])) {
        sign = 1;
      }
      if (i[k] == 'c' && i[k + 1] == 'o' && i[k + 2] == 's') {
        if (sign == 1) {
          push_char(&head_char, 'a');
        } else {
          push_char(&head_char, '1');
        }
        k += 2;
      } else if (i[k] == 's' && i[k + 1] == 'i' && i[k + 2] == 'n') {
        if (sign == 1) {
          push_char(&head_char, 'b');
        } else {
          push_char(&head_char, '2');
        }
        k += 2;
      } else if (i[k] == 't' && i[k + 1] == 'a' && i[k + 2] == 'n') {
        if (sign == 1) {
          push_char(&head_char, 'c');
        } else {
          push_char(&head_char, '3');
        }
        k += 2;
      } else if (i[k] == 'a' && i[k + 1] == 'c' && i[k + 2] == 'o' &&
                 i[k + 3] == 's') {
        if (sign == 1) {
          push_char(&head_char, 'd');
        } else {
          push_char(&head_char, '4');
        }
        k += 3;
      } else if (i[k] == 'a' && i[k + 1] == 's' && i[k + 2] == 'i' &&
                 i[k + 3] == 'n') {
        k += 3;
        if (sign == 1) {
          push_char(&head_char, 'e');
        } else {
          push_char(&head_char, '5');
        }
      } else if (i[k] == 'a' && i[k + 1] == 't' && i[k + 2] == 'a' &&
                 i[k + 3] == 'n') {
        k += 3;
        if (sign == 1) {
          push_char(&head_char, 'f');
        } else {
          push_char(&head_char, '6');
        }
      } else if (i[k] == 's' && i[k + 1] == 'q' && i[k + 2] == 'r' &&
                 i[k + 3] == 't') {
        if (sign == 1) {
          push_char(&head_char, 'g');
        } else {
          push_char(&head_char, '7');
        }
        k += 3;
      } else if (i[k] == 'l' && i[k + 1] == 'n') {
        if (sign == 1) {
          push_char(&head_char, 'h');
        } else {
          push_char(&head_char, '8');
        }
        k += 1;
      } else if (i[k] == 'l' && i[k + 1] == 'o' && i[k + 2] == 'g') {
        if (sign == 1) {
          push_char(&head_char, 'i');
        } else {
          push_char(&head_char, '9');
        }
        k += 2;
      } else {
        flag_error = 1;
        break;
      }
    } else if (i[k] == 'x') {
      if ((i[k - 1] >= '0' && i[k - 1] <= '9') ||
          (i[k + 1] >= '0' && i[k + 1] <= '9') || i[k + 1] == 'x') {
        flag_error = 1;
        break;
      }
      double tmp = strtod(j, &priemnii);
      if (i[k - 1] == '-' && unarny_minus_or_plus(i[k - 2])) {
        tmp *= -1;
      }
      push_double(&head_double, tmp);
    }
    sign = 0;
    k++;
  }
  result[0] = '\0';
  if (flag_error == 1 || ravenstvo_skobok != 0) {
    char chat_error[30] = "ERROR! Incorrect input data";  // Вывод ошибки
    s21_strcat(result, chat_error);
  } else {
    while (head_char != NULL) {
      operation(&head_double, &head_char, flag_function);
    }
    if (head_double == NULL) {
      char chat_error[30] = "ERROR! Incorrect input data";  // Вывод ошибки
      s21_strcat(result, chat_error);
    } else {
      snprintf(result, sizeof(result), "%.8f", pop_double(&head_double));
    }
  }

  destroy(&head_double, &head_char);

  return result;
}
