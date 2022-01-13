package com.company;

public class Schwein {
    private String name;
    private int gewicht;
    private int saettigungsgrad;

    Kartoffel sKartoffel = new Kartoffel(0);

    public Schwein(String cName, int cGewicht, int cSaettigungsgrad){
        name = cName;
        gewicht=cGewicht;
        saettigungsgrad=cSaettigungsgrad;
    }

    public void bewegen() {
        if(saettigungsgrad>=4&&gewicht>=10){

            saettigungsgrad = saettigungsgrad-4;
            gewicht=gewicht-1;
        }
        else if(saettigungsgrad>=4&&gewicht<=10){

            saettigungsgrad = saettigungsgrad-4;
        }
        else if(saettigungsgrad<=4&&gewicht<=10){
            System.out.println("Ich bin zu schlapp");
        }

    }
    // Im anderen Fall steigt der Sättigungsgrad des Schweins um den
    // Nährwert. Das Schwein kann seinen maximalen Sättigungsgrad jedoch
    // nicht über 100 steigern. In diesem Fall erhöht das Schwein sein
    // Gewicht und zwar nach der Formel:
    // gewicht+=(saettigungsgrad-100)/2 und der Sättigungsgrad erhält den
    // Maximalwert 100.

    public void fressen(Kartoffel k) {
        sKartoffel.pfluecken();
        if (sKartoffel.pfluecken() <= 0) {
            System.out.println("Schade nichts zu fressen.");
        }
        else {
            saettigungsgrad=saettigungsgrad+sKartoffel.pfluecken();
            if(saettigungsgrad>=100){
                gewicht+=(saettigungsgrad-100)/2;
                saettigungsgrad=100;
            }
        }
    }
    public void grunzen(){
        System.out.println("Mein Name ist "+name);
        System.out.println("Mein Gewicht ist "+gewicht);
        System.out.println("Mein Saettigungsgrad ist "+saettigungsgrad);
    }
}
