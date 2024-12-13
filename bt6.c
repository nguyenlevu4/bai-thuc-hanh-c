#include <stdio.h>

int main()
{
	int a,b =0;
	do {
		printf("Nhap so nguyen duong: ");
		scanf("%d", &a);

		if(a <= 0) {
			printf("nhap lai so nguyen duong > 0\n");
		}
	}
	while(a <= 0);

	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			b++;
		}
	}
	if(b ==2) {
		printf("%d la so nguyen to. ", a);
	} else {
		printf("%d khong phai la so nguyen to. ", a);
	}

	return 0;
}