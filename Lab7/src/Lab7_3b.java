import java.util.Scanner;

public class Lab7_3b {
    public static void main(String[] args) {
        int n;
        Scanner klaw=new Scanner(System.in);
        System.out.print("n = ");
        n=klaw.nextInt();
        int wynik=silnia(n);
        System.out.print(n);
        System.out.print("! = ");
        System.out.println(wynik);
    }
    static int silnia(int n){
        if(n>1)
            return n*silnia(n-1);
        else
            return 1;
    }
}
