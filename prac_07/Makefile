CC = gcc
CFLAGS = -Wall -Wextra -g -Ilib
AR = ar
ARFLAGS = rcs

OBJS = lib/add.o lib/subtract.o lib/multiply.o lib/divide.o
LIB = lib/libcalc.a
TARGET = calc_make

all: $(TARGET)

$(TARGET): main.o $(LIB)
	$(CC) $(CFLAGS) -o $@ main.o $(LIB)

main.o: main.c lib/calc.h
	$(CC) $(CFLAGS) -c main.c -o main.o

$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

lib/%.o: lib/%.c lib/calc.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f main.o $(OBJS) $(LIB) $(TARGET)

.PHONY: all clean
