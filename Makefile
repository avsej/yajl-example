CC=gcc
CFLAGS=-O0 -ggdb3 -Wall
LDFLAGS=-lyajl
SOURCES=transcode.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=transcode

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
