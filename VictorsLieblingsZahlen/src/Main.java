public class Main {

    public static void main(String[] args) {
                String[] VictorsLieblingsObst = {"Birne", "Apfel" ,"Kiwi"};

                System.out.println(VictorsLieblingsObst[1]);

                int [] VictorsLieblingsZahlen = new int [7];
                VictorsLieblingsZahlen[0]=7;

                for(int i =1; i<VictorsLieblingsZahlen.length;i++){
                    VictorsLieblingsZahlen[i]=i+3;
                }

                System.out.printf("%nVictors Lieblingszahlen: ");
                for(int each: VictorsLieblingsZahlen)
                    System.out.print(each + " ");

                int[] KohlsLieblingsZahlen ={2, 5, 58,4,3,444,25};
                VictorsLieblingsZahlen = KohlsLieblingsZahlen;

                VictorsLieblingsZahlen[1]=100;

                System.out.printf("%nKohls Lieblingszahlen: ");
                for(int each: KohlsLieblingsZahlen)
                    System.out.print(each + " ");

            }
        }

