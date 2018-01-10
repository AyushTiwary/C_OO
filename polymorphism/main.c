#include "include/file.h"

int main(void) {
	extern struct File* STDIN;
	STDIN->read("test.txt", 10);
	STDIN->write("test.txt", 100);

	extern struct File socket;
	STDIN = &socket;
	STDIN->read("socket", 1000);
	STDIN->write("socket", 10);
}