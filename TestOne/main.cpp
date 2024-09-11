#include <stdio.h>
#include "sturct.h"

int main(void)
{
	int A = 0;
	char B;
	CUO s;

	printf("これは練習用プログラムである");

	printf("ブランチ作成後に追加した行");

	s.q = 1;
	s.s = 4;

	if (A == 0) {
		printf("Aは0,でもAは1かも？ , Bはどう?");
	}

	printf("新しく追記したぞ。char Bを足した");

	printf("s.q = %d , s.s = %d",s.q,s.s);

	return 0;
}