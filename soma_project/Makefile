CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -std=c11 -g
BINDIR = build

SRC = src/main.c src/soma.c
OBJ = $(SRC:.c=.o)

.PHONY: all build test clean

all: build

build: $(BINDIR)/main

$(BINDIR)/main: $(SRC)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(SRC) -o $(BINDIR)/main

test: $(BINDIR)/test_soma
	$(BINDIR)/test_soma

$(BINDIR)/test_soma: tests/test_soma.c src/soma.c include/soma.h
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) tests/test_soma.c src/soma.c -o $(BINDIR)/test_soma

clean:
	rm -rf $(BINDIR)
