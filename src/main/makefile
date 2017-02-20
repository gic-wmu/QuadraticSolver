
quadApp:
	gcc QSmain.c "../InputParser/parser.c"  "../Printer/printer.c"  "../QSolver/quadraticFormula.c" "../SquareRt/squareRoot.c" -o QuadSolver -Wall -pedantic -std=c99 -lm

compTests:
	cd ../Printer; make compPrinter
	cd ../QSolver;make compQuad
	cd ../SquareRt; make compSqrt
	cd ../InputParser;make compParser

runTests: compTests
	../Printer/PrinterTest
	../QSolver/QuadTest
	../SquareRt/SqrtTest
	../InputParser/ParserTest

clean:
	-rm -f core *.log *.o *.exe
