#include <stdio.h>

void main()
{
	FILE *fp;
	fp.open("e.dat","w");
	fprintf(fp,"hello");
	fp.close();
}
