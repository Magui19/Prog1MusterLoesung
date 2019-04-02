#include <stdio.h>

int main() {
	/* Deklarieren der Variablen */

	/* Zaehler fuer die Monate */
	int monat;

	/* Zaehler fuer die Tage */
	int tag;

	/* Platzhalter fuer die Anzahl der Tage im Monat */
	int anzTage;

	/* Platzhalter fuer den letzten Wochentag des vorhergegangenen Monats */
	int wochentag = 0;

	/* Alle Monate durchlaufen */
	for(monat = 1; monat <= 12; monat++) {
		printf("\n");

		/* switch case um die Anzahl der Tage zu ermitteln */
		switch(monat) {
		case 1:
			anzTage = 31;
			/* Ausgabe des Monatsnamen (Aufgabe c.) */
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

		/* Einruecken anhand des Wochentages, */
		/* mit dem der letzte Monat aufgehoert hat */
		for(int i = 0; i < wochentag; i++) {
			printf("\t");
		}

		/* Alle Tage im Monat durchlaufen */
		for(tag = 1; tag <= anzTage; tag++) {
			printf("%i\t", tag);

			/* Wenn ein Sonntag erreicht ist -> Linebreak */
			/* wochentag ist hierbei der Offset, da wir das ganze */
			/* um den letzten Tag des vorherigen Monats verschieben wollen */
			if((tag + wochentag) % 7 == 0) {
				printf("\n");
			}
		}

		/* Errechnen des Wochentages des letzten Monats */
		wochentag = wochentag + (anzTage % 7);
		/* Ueberlaufe verhindern */
		wochentag = wochentag % 7;

		printf("\n");
	}

	printf("\n");

	return 0;
}
