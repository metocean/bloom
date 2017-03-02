SRC_FILES := $(wildcard src/*.c)
OBJ_FILES := $(addprefix obj/,$(notdir $(SRC_FILES:.c=.o)))
BASE_DIR=`pwd`
BIN_DIR=$(BASE_DIR)/bin
SRC_DIR=$(BASE_DIR)/src
MKDIRS := $(shell mkdir -p obj bin)

all: example libgbloom.so speed_test

example: obj/example.o obj/bloom.o obj/city.o
	$(MKDIRS)
	gcc -o bin/$@ $^

libgbloom.so: obj/city.o obj/bloom.o
	$(MKDIRS)
	gcc -shared -o bin/$@ $^

speed_test: libgbloom.so
	gcc -I$(SRC_DIR) -L$(BIN_DIR) src/speed_test.c -o bin/$@ -lgbloom

obj/%.o: src/%.c
	gcc -fPIC -Wall -Wextra -O2 -g -MMD -c -o $@ $<

-include $(OBJ_FILES:.o=.d)

test: speed_test
	LD_LIBRARY_PATH=$(BIN_DIR) valgrind --leak-check=full --error-exitcode=1 ./bin/speed_test

clean:
	@rm -rf bin obj

.PHONY: all clean test
