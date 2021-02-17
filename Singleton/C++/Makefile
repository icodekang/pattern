cc = g++ -std=c++11

flags = -Wall

src = $(wildcard *.cc)
obj = $(patsubst %.cc, %.o, $(src))

target = app

$(target): $(obj)
	$(cc) -o $@ $^

%.o: %.cc
	$(cc) -c $(flags) -o $@ $<

.PHONY: clean
clean:
	rm -rf *.o