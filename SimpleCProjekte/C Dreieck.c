#include<stdio.h>

int main(){
	float a, b, c, f, g, h; //Seiten a, b, c, Flächeninhalt, Grundseite, Höhe
	char eingabe;
	printf("Ist das Dreieck rechtwinklig? [J,N]");
	scanf("%c",&eingabe);
	if(eingabe == 'J' || eingabe =='j'){
		printf("Geben sie die Seitenlängen a und b an wenn c die Hypotenuse ist: ");
		scanf("%f %f",&a,&b);
		f = 0.5*a*b;
		printf("Der Flächeninhalt des Dreiecks beträgt %4.2f cm^2\n",f);
	}
	else if(eingabe == 'N'||eingabe == 'n'){
		printf("Geben sie die Grundseite und die Höhe an: ");
		scanf("%f %f",&g,&h);
		f = 0.5*g*h;
		printf("Der Flächeninhalt des Dreiecks beträgt %4.2f cm^2\n",f);		
	}
	return 0;
	
}
