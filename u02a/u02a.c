#include <stdio.h>

int main() {
	int monat;
	int anzTage;
	int tag;
	int wochentag = 0;

	for(monat = 1; monat <= 12; monat++) {
		printf("\n");
		switch(monat) {
		case 1:
			anzTage = 31;
			printf("Januar\n");
			break;
		case 2:
			anzTage = 28;
			printf("Februar\n");
			break;
		case 3:
			anzTage = 31;
			printf("Maerz\n");
			break;
		case 4:
			anzTage = 30;
			printf("April\n");
			break;
		case 5:
			anzTage = 31;
			printf("Mai\n");
			break;
		case 6:
			anzTage = 30;
			printf("Juni\n");
			break;
		case 7:
			anzTage = 31;
			printf("Juli\n");
			break;
		case 8:
			anzTage = 31;
			printf("August\n");
			break;
		case 9:
			anzTage = 30;
			printf("September\n");
			break;
		case 10:
			anzTage = 31;
			printf("Oktober\n");
			break;
		case 11:
			anzTage = 30;
			printf("November\n");
			break;
		case 12:
			anzTage = 31;
			printf("Dezember\n");
			break;
		}

		for(int i = 0; i < wochentag; i++) {
			printf("\t");
		}

		for(tag = 1; tag <= anzTage; tag++) {
			printf("%i\t", tag);
			if((tag + wochentag) % 7 == 0) {
				printf("\n");
			}
		}
		wochentag = wochentag + (anzTage % 7);
		wochentag = wochentag % 7;

		printf("\n");
	}

	printf("\n");

	return 0;
}
