#include "console.h"
#include "sbi.h"
#include "stdio.h"
void consputc(int c)
{
	console_putchar(c);
}

void console_init()
{
	// DO NOTHING
	printf("Hello UCore");
	
}