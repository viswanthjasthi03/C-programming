all: program3_math program3_rect

program3_math:program3_main.o program3_mathfun.o
	gcc program3_main.o program3_mathfun.o -o program3_math

program3_main.o:program3_main.c
	gcc -c program3_main.c
	
program3_mathfun.o:program3_mathfun.c
	gcc -c program3_mathfun.c

program3_rect:program3_main.o program3_rectfun.o
	gcc program3_main.o program3_rectfun.o -o program3_rect

program3_rectfun.o:program3_rectfun.c
	gcc -c program3_rectfun.c

clean:
	rm -f *.o program3_math program3_rect
