gcc_options = -std=c++17 -Wall --pedantic-error

all.h.gch : all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

clean :
	rm -f ./all.h.gch