
compSqrt: 
	gcc squareRoot.c squareRootTest.c   "../Cunit/cunit.c" -o SqrtTest -g -Wall -pedantic -std=c99 -lm

runSqrt: compSqrt
	./SqrtTest

clean:
	-rm -f core *.log *.o *.exe

