
compPrinter:	
		gcc printer.c printerTest.c -o PrinterTest -g -Wall -pedantic -std=c99 -lm

<<<<<<< HEAD
runCompPrinter: compPrinter
	./PrinterTest > output.txt; diff "output.txt" "correctOutput.txt"

runPrinter:
	./PrinterTest > output.txt; diff "output.txt" "correctOutput.txt"
=======
runPrinter: compPrinter
		./PrinterTest
>>>>>>> d0cb8795e5f40a91fe5bda5399cb6ff9f2c28e3b

clean:
	-rm -f core *.log *.o *.exe
		
