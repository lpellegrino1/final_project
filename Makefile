all: main.o Stats.hpp
	g++ main.o -o run_stats

main.o: main.cpp Stats.hpp
	g++ -c main.cpp

clean:
	rm *.o
	rm run_stats
