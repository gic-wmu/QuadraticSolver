
mockComp:
	gcc mockSquareRoot.c mockTest.c "../SquareRt/squareRoot.c" "../Cunit/cunit.c" -o MockTest -g -Wall -pedantic -std=c99 -lm

mockRun: mockComp
	./MockTest
