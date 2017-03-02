# Makefile template for shared library

SRC_FILES := $(wildcard src/*.c)
OBJ_FILES := $(addprefix obj/,$(notdir $(SRC_FILES:.c=.o)))
BASE_DIR=`pwd`
OBJECT_DIR=$(BASE_DIR)/obj
MKDIRS := $(shell mkdir -p obj bin)

CC = gcc
LD_FLAGS := -fPIC -Wall -Wextra
CC_FLAGS := -fPIC -Wall -Wextra -O2 -g -MMD

all: libbloom.so main

libbloom.so: obj/city.o obj/bloom.o
	$(MKDIRS)
	$(CC) $(LD_FLAGS) -shared -o bin/$@ $^

main: $(OBJ_FILES)
	$(MKDIRS)
	$(CC) $(LD_FLAGS) -o bin/$@ $^

obj/%.o: src/%.c
	$(MKDIRS)
	$(CC) $(CC_FLAGS) -c -o $@ $<

test: main
	valgrind --leak-check=full --error-exitcode=1 ./bin/main

-include $(OBJ_FILES:.o=.d)

clean:
	@${RM} -rf bin obj

.PHONY: all rebuild clean test
