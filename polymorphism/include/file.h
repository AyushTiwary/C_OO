struct File {
	int (*read)(char* name, int size);
	void (*write)(char* name, int size);
};