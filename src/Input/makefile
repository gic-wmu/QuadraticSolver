compParser: 
	gcc parser.c parserTest.c  "../Cunit/cunit.c" -o ParserTest -g -Wall -pedantic -std=c99

runParser: compParser
	./ParserTest

clean:
	-rm -f core *.log *.o *.exe
