jobs : clean build run

build : output.o 

output.o : puzzle1-day1.c
	gcc $^ -o $@

run :
	./output.o

clean :
	rm *.o