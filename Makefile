SRC_FILES := $(wildcard src/*.c)
OBJ_FILES := $(addprefix obj/,$(notdir $(SRC_FILES:.c=.o)))
BASE_DIR=`pwd`
BIN_DIR=$(BASE_DIR)/bin
SRC_DIR=$(BASE_DIR)/src
MKDIRS := $(shell mkdir -p obj bin)

all: example libbloom.so tests

example: obj/example.o obj/bloom.o obj/city.o
	$(MKDIRS)
	gcc -o bin/$@ $^

libbloom.so: obj/city.o obj/bloom.o
	$(MKDIRS)
	gcc -shared -o bin/$@ $^

tests:
	$(MKDIRS)
	gcc -I$(SRC_DIR) -L$(BIN_DIR) src/tests.c -o bin/$@ -lbloom

obj/%.o: src/%.c
	gcc -fPIC -Wall -Wextra -O2 -g -MMD -c -o $@ $<

-include $(OBJ_FILES:.o=.d)

test: tests
	LD_LIBRARY_PATH=$(BIN_DIR) valgrind --leak-check=full --error-exitcode=1 ./bin/tests

clean:
	@rm -rf bin obj

.PHONY: all clean test
