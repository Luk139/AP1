package com.company;

public class Main {

    public static void main(String[] args) {

        Schwein fritzSchwein = new Schwein("Fritz",10,10);
        Kartoffel cKartoffel = new Kartoffel(10);
        Kartoffel dKartoffel = new Kartoffel(20);

        fritzSchwein.grunzen();
        fritzSchwein.fressen(cKartoffel);
        fritzSchwein.bewegen();
        fritzSchwein.grunzen();
        fritzSchwein.fressen(dKartoffel);
        fritzSchwein.grunzen();
        fritzSchwein.bewegen();
        fritzSchwein.grunzen();

    }
}
