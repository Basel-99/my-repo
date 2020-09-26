#include <stdio.h>
#include <signal.h>

int cnt=0;

void f()
{
cnt++;
if (cnt==5)
	{
	  printf("\nHello\n");
	  signal(SIGINT, SIG_DFL);
	}
}

int main()
{

signal(SIGINT, f);
while(1){}

}

/**

الفئة 3: باسل بيرقدار

**/