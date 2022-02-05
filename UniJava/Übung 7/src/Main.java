import java.util.*;
public class Main {

    public static void main(String[] args) {
        int [] Testarray = ArrayKlasse.ArrayLesen();
        ArrayKlasse.ausgeben(Testarray);
        ArrayKlasse.mittelwert(Testarray);
        ArrayKlasse.groesste(Testarray);
    }
}

class ArrayKlasse {

    public static int[] ArrayLesen() {
        Scanner s = new Scanner(System.in);
        System.out.println("Wie groß soll das array sein?");
        int n = s.nextInt();
        System.out.println("Geben sie die Werte für das Array ein");
        int[] array = new int[n];
        for (int i = 0; i < n; i++)
            array[i] = s.nextInt();
        return array;
    }

    public static void ausgeben(int [] refarray){

        for(int each: refarray){
            System.out.println(each+"");
        }
        System.out.println("Das Array lautet: "+ Arrays.toString(refarray));
    }
    public static double mittelwert(int [] refarray){
        double summe = 0;
        double nMittelwert = 0;
        int n = refarray.length;
        for (int i=0; i<n;i++){
            summe=summe+refarray[i];
        }
        nMittelwert=summe/n;
        System.out.println("Der Mittelwert lautet "+nMittelwert);
        return nMittelwert;
    }
    public static int groesste(int [] refarray){
        int max = refarray[0];
        int n = refarray.length;
        for (int i = 0; i < n; i++)
        {
            if (refarray[i] > max)
            {
                max = refarray[i];
            }
        }
        System.out.println("Die größte Nummer im Array lautet " + max);
        return max;
    }
}