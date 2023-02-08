
all: poker.exe

objects = main.o deck.o dealer.o player.o bet.o table.o

headers = deck.h dealer.h player.h bet.h table.h 

poker.exe: $(objects)
	g++ -o $@ $(objects)

main.o: main.cc $(headers)
	g++ -c main.cc 

player.o: player.cc player.h 
	g++ -c $<

deck.o: deck.cc deck.h
	g++ -c $<

dealer.o: dealer.cc dealer.h
	g++ -c $<

bet.o: bet.cc bet.h
	g++ -c $<

table: table.cc table.h
	g++ -c $<

clean:
	rm -f *.o *.exe

