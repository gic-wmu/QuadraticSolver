
compQuad: 
	 gcc quadraticFormula.c quadTest.c "../Cunit/cunit.c"  "../SquareRt/squareRoot.c" -o QuadTest -g -Wall -pedantic -std=c99 -lm

runQuad: compQuad
	./QuadTest

clean:
	-rm -f core *.log *.o *.exe
	
