CC = gcc
CFLAG = -Wall -Wextra -Werror
APP = build/s21_calc.app
BACKEND_FILES = s21_calc.c
BACKEND_FILES_O = s21_calc.o

all: clean install test

build:
	mkdir build
	cd ./build/ && qmake ../ && make && mv calculation.app s21_calc.app

install: build
	@mkdir $(HOME)/Desktop/SmartCalc_v1.0/
	@cp -rf $(APP) $(HOME)/Desktop/SmartCalc_v1.0/
	make clean

uninstall:
	rm -rf $(HOME)/Desktop/SmartCalc_v1.0/

dvi:
	open dvi.html

check: test
	cp -f ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python ../materials/linters/cpplint.py --extensions=c *.c
	python ../materials/linters/cpplint.py --extensions=h s21_smart_calc.h
	cppcheck --enable=all --suppress=missingIncludeSystem *.c
	rm -rf CPPLINT.cfg
	CK_FORK=no leaks --atExit -- ./test


dist:
	rm -rf Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/src
	cp Makefile *.c *.h *.pro *.cpp *.ui *.user Archive_SmartCalc_v1.0/src/
	tar cvzf Archive_SmartCalc_v1.0.tgz Archive_SmartCalc_v1.0/
	mv Archive_SmartCalc_v1.0.tgz $(HOME)/Desktop/
	rm -rf Archive_SmartCalc_v1.0/

s21_calc.o:
	$(CC) $(CFLAG) -c s21_calc.c -o s21_calc.o

test: s21_calc.o
	$(CC) $(CFLAG) -c s21_test.c -o test.o
	$(CC) test.o s21_calc.o -o test -lcheck
	./test

gcov_report:
	$(CC) --coverage s21_test.c  -o s21_test -lcheck $(BACKEND_FILES)
	./s21_test
	lcov -t "s21_test" -o s21_test.info -c -d .
	genhtml -o report s21_test.info
	open ./report/index.html

clean:
	rm -rf *.o *.gcda *.gcno *.info s21_test report build test

rebuild: clean all
