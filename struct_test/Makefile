all:test2

.PHONY:all
targetCles=test2

objects=main.o
test2:$(objects)
	g++ -o test2 $(objects) 
	g++ -o shuzu shuzu.cpp
	g++ -o mem mem.cpp
main.o:
	g++ -c main.cpp

.PHONY:clean
clean:
	-rm -f $(targetCles) *.o
