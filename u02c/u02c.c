/* u02c.c
 * Übungsaufgabe u02c zu Schleifen, Zeichenein-/-ausgabe, Funktionen und Vorgehensplanung
 * Marcel Transier - 09.04.2019
 */

#include <stdio.h>

int quersumme(char ziffernbuchstabe) {
  static int q = 0; // Static, damit q nach Verlassen der Funktion erhalten bleibt.
  int ziffer = ziffernbuchstabe - '0'; // Ziehe den ASCII-Wert von 0 (48) von dem übergebenen Zeichen ab
                                       // und speichere das Ergebniss in die Variable Ziffer
  q += ziffer; // Addiere ziffer auf die Quersumme
  return q; // Gebe die Quersumme zurück
}

int alternative_quersumme(int q, char ziffernbuchstabe) { // Alternative Quersummenfunktion ohne statischer Variable
  int ziffer = ziffernbuchstabe - '0';
  return q + ziffer;
}

int main() {
  char c;
  int gesamt = 0, gross = 0, klein = 0, ziffern = 0, andere = 0; // Zählervariablen
  int q = 0; // Quersumme (anderer Namensraum als das q in der Quersummenfunktion)

  while ((c = getchar()) != EOF) { // Lese das nächste Zeichen aus dem Eingabestrom
                                   // und speichere es in c; While solange das neue c nicht EOF ist
    putchar(c); // Eingelesenes Zeichen ausgeben

    // Zähler erhöhen:
    gesamt++;
    if (c >= 'A' && c <= 'Z') // Das eingelesene Zeichen ist ein Großbuchstabe
      gross++;
    else if (c >= 'a' && c <= 'z') // Das eingelesene Zeichen ist ein Kleinbuchstabe
      klein++;
    else if (c >= '0' && c <= '9') { // Das eingelesene Zeichen ist eine Ziffer
      ziffern++;
      q = quersumme(c); // Rufe die Funktion "quersumme" auf und speichere den Return-Wert in q
      //q = alternative_quersumme(q, c);
      if (q >= 42) {
        printf("\nDie Quersumme beträgt %i\n", q);
        break; // Verlasse die While-Schleife
      }
    } else // Das eingelesene Zeichen ist weder ein Großbuchstabe, noch ein Kleinbuchstabe oder eine Ziffer
      andere++;
  }

  printf("Anzahl gelesener Zeichen: %i\n", gesamt);
  printf("Großbuchstaben: %i\n", gross);
  printf("Kleinbuchstaben: %i\n", klein);
  printf("Ziffernbuchstaben: %i\n", ziffern);
  printf("Andere Zeichen: %i\n", andere);

  return 0;
}
