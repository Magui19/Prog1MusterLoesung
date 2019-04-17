/*1. bewertetes Praktikum p03c.c
  Name: Tutorium	
  Datum:16.04.19	 
*/

#include<stdio.h>
#include<math.h>	  /*Für die Berechnungen von Wurzel, Pi, etc*/
#define PI 3.14159	/*Eine Alternative, Pi als Konstant zu benutzen*/

double pythagoras(double x, double y){	/*Funtion zur Berechnung der Hypotenuse für die a) Aufgabe*/
	double h = 0.0 ;    /*Hilfsvariablen*/
	double z = 0.0;
  
	z = (x*x)+(y*y);	/* z ist gleich x hoch 2 plus y hoch 2*/
	h = sqrt(z);      /* h ist gleich Wurzel von z*/
	return h;				/*berechnte Hypotenuse zurückgeben*/
}

double konvertRadius(double c1){ /*Funktion für die Berechnung vom Radius für die b) Aufgabe*/
	double r = 0.0;
	double res = 0.0;
  
	res = c1*c1;     /*Hier wurde die Formel in 2 Schritte berechnet, aber man kann auch in einem Schritt eingeben*/
	r = sqrt(res/PI);
	return r;			/*berechnetes Radius zurückgeben*/
}
double kubusVolumen(double c2){ /*Funtion zur Berechnung des Volumen des Würfels*/

	return c2*c2*c2;	
}

double kugelVolumen(double r2){ /*Funtion zur Berechnung des Volumen der Kugel*/
	double v = 0.0;
	v = (4.0/3.0)*PI*(r2*r2*r2); /*Einsetzung der vorgegebenen Formel*/
  
	return v;
}

int main(){
	double a = 1.9;			
	double b = 4.2;
	double c = 0.0;
	double radius = 0.0;	
	double flaeche = 0.0;

	c = pythagoras(a,b);  /*Aufruf der Funktion pythagoras()*/
	printf("a: %.2lf\t\t\ta Quadrat: %.2lf\n", a, a*a); 
	printf("b: %.2lf\t\t\tb Quadrat: %.2lf\n", b, b*b);
	printf("c: %.2lf\t\t\tc Quadrat: %.2lf\n", c, c*c);

	radius = konvertRadius(c);    /*Aufruf der Funktion konvertRadius()*/
	flaeche = PI*(radius*radius);     /* Berechnung für die Flaeche*/
	printf("Kreisradius: %.2lf\tFlaecheninhalt: %.2lf\n", radius, flaeche);
	printf("Kantenlaenge: %.2lf\tWuerfelvolumen: %.2lf\n", c, kubusVolumen(c));     /*Aufruf der Funktion kubusVolumen()*/
	printf("Kreisradius: %.2lf\tKugelvolumen: %.2lf\n", radius, kugelVolumen(radius));	/*Aufruf der Funktion kugelVolumen() */

	return 0;
}
