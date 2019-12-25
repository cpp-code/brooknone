all: regular-expression

regular-expression: regular-expression.cc
	g++ -o $@ $^ -Wall -Werror

check:
	@echo

distcheck:
	@echo

clean:
	@rm -vf regular-expression
