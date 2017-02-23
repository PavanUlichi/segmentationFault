CFLAGS=-fno-stack-protector -g2 -O0

default:: expl1

expl1: expl1.o ABaseClass.o ANewClass.o
	g++ -o expl1 $(CFLAGS) expl1.o ABaseClass.o ANewClass.o

expl1.o: expl1.cpp include/ANewClass.h include/ABaseClass.h
	g++ -c -o expl1.o $(CFLAGS) expl1.cpp

ABaseClass.o: ABaseClass.cpp include/ABaseClass.h
	g++ -c -o ABaseClass.o $(CFLAGS) ABaseClass.cpp

ANewClass.o: ANewClass.cpp include/ANewClass.h include/ABaseClass.h
	g++ -c -o ANewClass.o $(CFLAGS) ANewClass.cpp

clean:
	rm -f ABaseClass.o ANewClass.o expl1.o expl1
