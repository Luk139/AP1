public class Main{
    public static void main(String[] args) {
        //kann man auch mit einem scanner einlesen, wenn man nöchte, funktionalität ändert sich nicht
        long M = 2;
        long N = 2;
        System.out.println(Ackermann.ackermann(M, N));
    }
}
class Ackermann {

    public static long ackermann(long m, long n) {
        if (m == 0) return n + 1;
        if (n == 0) return ackermann(m - 1, 1);
        return ackermann(m - 1, ackermann(m, n - 1));
    }


}
