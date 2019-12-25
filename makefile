all: variable-arguments

regular-expression: variable-arguments.c
	gcc -o $@ $^ -Wall -Werror

check:
	@echo

distcheck:
	@echo

clean:
	@rm -vf regular-expression
