1 : build1 run1

2 : build2 run2 

build1 : output1.o 

output1.o : puzzle1.c
	gcc $^ -o $@

run1 :
	./output1.o

build2 : output2.o 

output2.o : puzzle2.c
	gcc $^ -o $@

run2 :
	./output2.o

clean :
	rm output1.o || rm output2.o
