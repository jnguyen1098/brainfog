#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char memory[50000] = { 0 };
	char *ptr = memory;
	ptr++;
	++*ptr;
	++*ptr;
	++*ptr;
	++*ptr;
	++*ptr;
	++*ptr;
	++*ptr;
	++*ptr;
	++*ptr;
	while (*ptr) {
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		ptr++;
		--*ptr;
	}
	--ptr;
	while (*ptr) {
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		--ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			ptr++;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			while (*ptr) {
				ptr++;
				++*ptr;
				ptr++;
				while (*ptr) {
					--*ptr;
				}
				--ptr;
				--ptr;
				--*ptr;
			}
			ptr++;
			while (*ptr) {
				--ptr;
				++*ptr;
				ptr++;
				--*ptr;
			}
			ptr++;
			while (*ptr) {
				--ptr;
				--ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				ptr++;
				ptr++;
				ptr++;
				++*ptr;
				--ptr;
				--*ptr;
			}
			--ptr;
			--ptr;
			--*ptr;
			--ptr;
			--*ptr;
		}
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		ptr++;
		while (*ptr) {
			--ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		ptr++;
		ptr++;
		++*ptr;
		ptr++;
		while (*ptr) {
			--ptr;
			while (*ptr) {
				--*ptr;
			}
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		++*ptr;
		--ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			++*ptr;
			ptr++;
			--*ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		ptr++;
		while (*ptr) {
			--ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--ptr;
		--*ptr;
		while (*ptr) {
			ptr++;
			while (*ptr) {
				--*ptr;
			}
			--ptr;
			while (*ptr) {
				--*ptr;
			}
		}
		ptr++;
		ptr++;
		++*ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			while (*ptr) {
				--*ptr;
			}
			--ptr;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			ptr++;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			putchar(*ptr);
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		putchar(*ptr);
		ptr++;
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		ptr++;
		while (*ptr) {
			ptr++;
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			putchar(*ptr);
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		while (*ptr) {
			--*ptr;
		}
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			putchar(*ptr);
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		putchar(*ptr);
		ptr++;
		ptr++;
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		ptr++;
		while (*ptr) {
			ptr++;
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			putchar(*ptr);
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		while (*ptr) {
			--*ptr;
		}
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		while (*ptr) {
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		--*ptr;
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		--ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			ptr++;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			while (*ptr) {
				ptr++;
				++*ptr;
				ptr++;
				while (*ptr) {
					--*ptr;
				}
				--ptr;
				--ptr;
				--*ptr;
			}
			ptr++;
			while (*ptr) {
				--ptr;
				++*ptr;
				ptr++;
				--*ptr;
			}
			ptr++;
			while (*ptr) {
				--ptr;
				--ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				++*ptr;
				ptr++;
				ptr++;
				ptr++;
				++*ptr;
				--ptr;
				--*ptr;
			}
			--ptr;
			--ptr;
			--*ptr;
			--ptr;
			--*ptr;
		}
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		ptr++;
		while (*ptr) {
			--ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		ptr++;
		ptr++;
		++*ptr;
		ptr++;
		while (*ptr) {
			--ptr;
			while (*ptr) {
				--*ptr;
			}
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		++*ptr;
		--ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			++*ptr;
			ptr++;
			--*ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--ptr;
		--*ptr;
		while (*ptr) {
			ptr++;
			while (*ptr) {
				--*ptr;
			}
			--ptr;
			while (*ptr) {
				--*ptr;
			}
		}
		ptr++;
		ptr++;
		++*ptr;
		--ptr;
		while (*ptr) {
			ptr++;
			while (*ptr) {
				--*ptr;
			}
			--ptr;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			ptr++;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			putchar(*ptr);
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		putchar(*ptr);
		ptr++;
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		ptr++;
		while (*ptr) {
			--*ptr;
		}
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		ptr++;
		while (*ptr) {
			ptr++;
			ptr++;
			++*ptr;
			ptr++;
			++*ptr;
			--ptr;
			--ptr;
			--ptr;
			--*ptr;
		}
		ptr++;
		ptr++;
		ptr++;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			++*ptr;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		while (*ptr) {
			--ptr;
			--ptr;
			--ptr;
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			putchar(*ptr);
			ptr++;
			ptr++;
			ptr++;
			ptr++;
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
		--ptr;
		while (*ptr) {
			--*ptr;
		}
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		++*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			++*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		putchar(*ptr);
		ptr++;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		while (*ptr) {
			--ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			--*ptr;
			ptr++;
			--*ptr;
		}
		--ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		++*ptr;
		++*ptr;
		++*ptr;
		putchar(*ptr);
		--*ptr;
		--*ptr;
		--*ptr;
		putchar(*ptr);
		while (*ptr) {
			--*ptr;
		}
		--ptr;
		--ptr;
		--ptr;
	}
	return 0;
}