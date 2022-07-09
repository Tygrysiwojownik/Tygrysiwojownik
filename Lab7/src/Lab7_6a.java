import java.util.Scanner;

public class Lab7_6a {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Wprowadz pierwsza liczbe");
        int n = input.nextInt();
        System.out.println("Wprowadz druga liczbe");
        int m = input.nextInt();
        int nwd = 0;
        for (int i=1; i<=m; i++){
            if (((m%i)==0) && ((n%i)==0)) nwd = i;
        }
        System.out.println("Najwiekszy wspólny dzielnik jest rowny" + " " + nwd);
    }
}
