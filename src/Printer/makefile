
compPrinter:	
		gcc printer.c printerTest.c -o PrinterTest -g -Wall -pedantic -std=c99 -lm

runCompPrinter: compPrinter
	./PrinterTest > output.txt; diff "output.txt" "correctOutput.txt"

runPrinter:
	./PrinterTest > output.txt; diff "output.txt" "correctOutput.txt"

clean:
	-rm -f core *.log *.o *.exe
		
