all: regular-expression variable-arguments date-and-time

CFLAG = -Wall -Werror

regular-expression: regular-expression.cc
	g++ -o $@ $^ $(CFLAG)

variable-arguments: variable-arguments.c
	gcc -o $@ $^ $(CFLAG)

date-and-time: date-and-time.c
	gcc -o $@ $^ $(CFLAG)

check:
	@echo

distcheck:
	@echo

clean:
	@rm -vf regular-expression variable-arguments date-and-time
