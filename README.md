# SmartCalc v1.0

Реализация SmartCalc на C


## Contents

0. [Preamble](#preamble)
1. [Chapter I](#chapter-i) \
    1.1. [Introduction](#introduction)
2. [Chapter II](#chapter-ii) \
    2.1. [Information](#information)
3. [Chapter III](#chapter-iii) \
    3.1. [Part 1](#part-1-реализация-smartcalc-v10)  
    3.2. [Part 2](#part-2-дополнительно-кредитный-калькулятор)  
    3.3. [Part 3](#part-3-дополнительно-депозитный-калькулятор)  


## Preamble

![SmartCalc](misc/rus/images/smartcalc.jpg)




## Chapter I

## Introduction

В данном проекте мне предстояло реализовать на языке программирования Си с использованием структурного подхода расширенную версию обычного калькулятора. Помимо базовых арифметических операций, как плюс-минус и умножить-поделить, я дополнил калькулятор возможностью вычисления арифметических выражений с учетом приоритетов, а так же некоторыми математическими функциями (синус, косинус, логарифм и т.д.). Помимо вычисления выражений калькулятор так же поддерживает использование переменной _x_ и построение графика соответствующей функции. В качестве дополнительных улучшений реализован кредитный калькулятор.

## Реализация

- Программа разработана на языке Си стандарта C11 с использованием компилятора gcc.
- Сборка программы настроена с помощью Makefile со стандартным набором целей для GNU-программ: all, install, uninstall,clean, dvi, dist, tests, gcov_report.
- Программа разработана в соответствии с принципами структурного программирования
- Обеспечено покрытие unit-тестами модулей, связанных с вычислением выражений, с помощью библиотеки Check
- Реализация с графическим пользовательским интерфейсом, на базе GUI-библиотеки Qt
- На вход программы могут подаваться как целые числа, так и вещественные числа, записанные через точку.
- Вычисление производится после полного ввода вычисляемого выражения и нажатия на символ `=`
- Вычисление произвольных скобочных арифметических выражений в инфиксной нотации
- Вычисление произвольных скобочных арифметических выражений в инфиксной нотации с подстановкой значения переменной _x_ в виде числа
- Построение графика функции, заданной с помощью выражения в инфиксной нотации с переменной _x_
- Область определения и область значения функций ограничиваются по крайней мере числами от -1000000 до 1000000
- Проверяемая точность дробной части - минимум 7 знаков после запятой
- У пользователя есть возможность ввода до 255 символов
- Скобочные арифметические выражения в инфиксной нотации поддерживают следующие арифметические операции и математические функции:
    - **Арифметические операторы**:

        | Название оператора | Инфиксная нотация <br /> (Классическая) | Префиксная нотация <br /> (Польская нотация) |  Постфиксная нотация <br /> (Обратная польская нотация) |
        | ------ | ------ | ------ | ------ |
        | Скобки | (a + b) | (+ a b) | a b + |
        | Сложение | a + b | + a b | a b + |
        | Вычитание | a - b | - a b | a b - |
        | Умножение | a * b | * a b | a b * |
        | Деление | a / b | / a b | a b \ |
        | Возведение в степень | a ^ b | ^ a b | a b ^ |
        | Остаток от деления | a mod b | mod a b | a b mod |
        | Унарный плюс | +a | +a | a+ |
        | Унарный минус | -a | -a | a- |

    - **Функции**:
  
        | Описание функции | Функция |   
        | ---------------- | ------- |  
        | Вычисляет косинус | cos(x) |   
        | Вычисляет синус | sin(x) |  
        | Вычисляет тангенс | tan(x) |  
        | Вычисляет арккосинус | acos(x) | 
        | Вычисляет арксинус | asin(x) | 
        | Вычисляет арктангенс | atan(x) |
        | Вычисляет квадратный корень | sqrt(x) |
        | Вычисляет натуральный логарифм | ln(x) | 
        | Вычисляет десятичный логарифм | log(x) |

## Кредитный калькулятор

Предусмотрен специальный режим "кредитный калькулятор" (за образец взяты сайты banki.ru и calcus.ru):
 - Вход: общая сумма кредита, срок, процентная ставка, тип (аннуитетный, дифференцированный)
 - Выход: ежемесячный платеж, переплата по кредиту, общая выплата

