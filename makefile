all: date-and-time

regular-expression: date-and-time.c
	gcc -o $@ $^ -Wall -Werror

check:
	@echo

distcheck:
	@echo

clean:
	@rm -vf date-and-time
