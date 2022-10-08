FLAGS = 
C = g++

all: final

final: main.o TreeNode.o
	$(C) $(FLAGS) main.o TreeNode.o -o final.out

main.o: main.cpp
	$(C) $(FLAGS) -c main.cpp

TreeNode.o: TreeNode.cpp
	$(C) $(FLAGS) -c TreeNode.cpp

clean:
	rm main.o TreeNode.o final.out