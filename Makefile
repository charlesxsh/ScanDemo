BASE_DIR = $(PWD)
SRC_DIR = $(BASE_DIR)/src
TARGET_DIR = $(BASE_DIR)/bin

All: findway

findway: main.o map.o
	g++ $^ -o $(TARGET_DIR)/findway

main.o: $(SRC_DIR)/main.cpp
	g++ -c $^ 

map.o: $(SRC_DIR)/map.h $(SRC_DIR)/map.cpp
	g++ -c $^

clean:
	rm -rf *.o

