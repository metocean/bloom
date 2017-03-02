
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
BASE_DIR=`pwd`
OBJECT_DIR=$(BASE_DIR)/object
BUILD_DIR=$(BASE_DIR)/build
RM=rm
MKDIR=mkdir
OBJS = $(OBJECT_DIR)/city.o $(OBJECT_DIR)/spooky.o $(OBJECT_DIR)/bloom.o $(OBJECT_DIR)/main.o

all: makedirs $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(BUILD_DIR)/app

$(OBJECT_DIR)/city.o :
	$(CC) $(CFLAGS) city.c -o $(OBJECT_DIR)/city.o

$(OBJECT_DIR)/spooky.o :
	$(CC) $(CFLAGS) spooky.c -o $(OBJECT_DIR)/spooky.o

$(OBJECT_DIR)/bloom.o :
	$(CC) $(CFLAGS) bloom.c -o $(OBJECT_DIR)/bloom.o

$(OBJECT_DIR)/main.o :
	$(CC) $(CFLAGS) main.c -o $(OBJECT_DIR)/main.o

makedirs:
	$(MKDIR) -p $(OBJECT_DIR)
	$(MKDIR) -p $(BUILD_DIR)

clean:
	$(RM) -rf $(OBJECT_DIR) $(BUILD_DIR)
