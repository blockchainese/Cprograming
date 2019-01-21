#include <stdio.h>

void SecToHMS(int sec);

int main()
{
	SecToHMS(3245);
	SecToHMS(5109);
	return 0;
}

void SecToHMS(int sec)
{
	printf("%dรสดย%d:%d:%d\n", sec, sec / 3600, sec / 60, sec % 60);
}