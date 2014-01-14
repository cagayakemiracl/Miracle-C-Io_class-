AR = /usr/bin/ar
CC = gcc
CFLAGS = -W -Wall -O3
DFLAGS = -W -Wall -O0 -g

LIB_DIR  = ./lib
DLIB_DIR = ./debug
BIN_DIR  = ./bin

LIB = libc
STATIC_LIB  = $(DLIB_DIR)/$(LIB).a
DYNAMIC_LIB = $(LIB_DIR)/$(LIB).so
OBJS  = $(LIB_DIR)/*.o
DOBJS = $(DLIB_DIR)/*.debug
COMP  = complete
DCOMP = debugcomp
TARGET  = $(BIN_DIR)/executable
DTARGET = $(TARGET).debug

all: exe debug

exe: $(TARGET)

$(TARGET): $(DYNAMIC_LIB)
	$(CC) $(CFLAGS) main.c -lc -L$(LIB_DIR) -o $(TARGET)

$(DYNAMIC_LIB): $(COMP)
	$(CC) $(CFLAGS) -shared -o $(DYNAMIC_LIB) $(OBJS)

$(COMP):
	cd string; make exe;
	cd io; make exe;
	touch $(COMP)

debug: $(DTARGET)

$(DTARGET): $(STATIC_LIB)
	$(CC) $(DFLAGS) main.c -lc -L$(DLIB_DIR) -o $(DTARGET)

$(STATIC_LIB): $(DCOMP)
	$(AR) r $(STATIC_LIB) $(DOBJS)

$(DCOMP):
	cd string; make debug;
	cd io; make debug;
	touch $(DCOMP)

clean:
	cd string; make clean;
	cd io; make clean;
	rm -rf $(LIB_DIR)/* $(DLIB_DIR)/* $(COMP) $(DCOMP) $(TARGET) \
         $(DTARGET) $(DTARGET).dSYM __.SYMDEF\ SORTED *~
