
whatepsComp:
	gcc whatMachineEps.c -o WhatMachineEps -g -Wall -pedantic -std=c99

whateps: whatepsComp
	./WhatMachineEps

inputSpikeComp:
	gcc InputSpike.c -o Input -g -Wall -pedantic -std=c99

inputSpike:inputSpikeComp
	./Input

parseComp: 
	gcc parseSpike.c -o Parse -g -Wall -pedantic -std=c99

parse: parseComp
	./Parse

floatingPointComp:
	gcc funWithFloatingPoint.c -o FloatingPoint -g -Wall -pedantic -std=c99

floating: floatingPointComp
	./FloatingPoint

makeSpike:
	cd ..
	ls
	cd ..; ls

all: whatepsComp inputSpikeComp parseComp floatingPointComp
	./WhatMachineEps;./Input;./Parse;./FloatingPoint
