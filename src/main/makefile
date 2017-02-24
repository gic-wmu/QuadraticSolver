
<<<<<<< HEAD
compQuadApp:
	gcc QSmain.c "../Validator/validator.c" "../Input/parser.c"  "../Printer/printer.c"  "../QSolver/quadraticFormula.c" "../SquareRt/squareRoot.c" -o QuadSolver -Wall -pedantic -std=c99 -lm

runQuadApp: compQuadApp
	./QuadSolver

compUnitTests:
	cd ../Printer; make compPrinter
	cd ../QSolver;make compQuad
	cd ../SquareRt; make compSqrt
	cd ../Input;make compParser
	cd ../Validator;make compValidator

runUnitTests: compUnitTests
	cd ../Printer; make runPrinter
	../QSolver/QuadTest
	../SquareRt/SqrtTest
	../Input/ParserTest
	../Validator/ValidatorTest

runQuadTests: compQuadApp
	./QuadSolver < autoInput_1.txt > auto_output.txt;diff "correctOutput_1.txt" "auto_output.txt"
	./QuadSolver < autoInput_2.txt > auto_output.txt;diff "correctOutput_2.txt" "auto_output.txt"
	./QuadSolver < autoInput_3.txt > auto_output.txt;diff "correctOutput_3.txt" "auto_output.txt"
	./QuadSolver < autoInput_4.txt > auto_output.txt;diff "correctOutput_4.txt" "auto_output.txt"
	./QuadSolver < autoInput_5.txt > auto_output.txt;diff "correctOutput_5.txt" "auto_output.txt"
	./QuadSolver < autoInput_6.txt > auto_output.txt;diff "correctOutput_6.txt" "auto_output.txt"
	./QuadSolver < autoInput_7.txt > auto_output.txt;diff "correctOutput_7.txt" "auto_output.txt"
	./QuadSolver < autoInput_9.txt > auto_output.txt;diff "correctOutput_9.txt" "auto_output.txt"
	./QuadSolver < autoInput_10.txt > auto_output.txt;diff "correctOutput_10.txt" "auto_output.txt"
	./QuadSolver < autoInput_11.txt > auto_output.txt;diff "correctOutput_11.txt" "auto_output.txt"

runAllTests: compUnitTests compQuadApp
	cd ../Printer; make runPrinter
	../QSolver/QuadTest
	../SquareRt/SqrtTest
	../Input/ParserTest
	../Validator/ValidatorTest
	./QuadSolver < autoInput_1.txt > auto_output.txt;diff "correctOutput_1.txt" "auto_output.txt"
	./QuadSolver < autoInput_2.txt > auto_output.txt;diff "correctOutput_2.txt" "auto_output.txt"
	./QuadSolver < autoInput_3.txt > auto_output.txt;diff "correctOutput_3.txt" "auto_output.txt"
	./QuadSolver < autoInput_4.txt > auto_output.txt;diff "correctOutput_4.txt" "auto_output.txt"
	./QuadSolver < autoInput_5.txt > auto_output.txt;diff "correctOutput_5.txt" "auto_output.txt"
	./QuadSolver < autoInput_6.txt > auto_output.txt;diff "correctOutput_6.txt" "auto_output.txt"
	./QuadSolver < autoInput_7.txt > auto_output.txt;diff "correctOutput_7.txt" "auto_output.txt"
	./QuadSolver < autoInput_9.txt > auto_output.txt;diff "correctOutput_9.txt" "auto_output.txt"
	./QuadSolver < autoInput_10.txt > auto_output.txt;diff "correctOutput_10.txt" "auto_output.txt"
	./QuadSolver < autoInput_11.txt > auto_output.txt;diff "correctOutput_11.txt" "auto_output.txt"
=======
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
>>>>>>> d0cb8795e5f40a91fe5bda5399cb6ff9f2c28e3b

clean:
	-rm -f core *.log *.o *.exe
