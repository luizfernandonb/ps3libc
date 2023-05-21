#include <stdlib.h>

extern void _init();
extern int main(int argc, const char *argv[]);

void _initialize(int argc, const char *argv[])
{
	_init();

	int ret = main(argc, argv);

	//TODO: this syscall below
	//exit(ret);
}