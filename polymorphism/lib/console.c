#include <stdio.h>
#include "../include/file.h"

static int read(char* name, int size) {
	printf("console read function, filename: %s, size: %d\n", name, size);
	return size;
}

static void write(char* name, int size) {
	printf("console write function, filename: %s, size: %d\n", name, size);
}

struct File console = {read, write};