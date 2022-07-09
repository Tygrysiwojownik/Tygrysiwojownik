import java.util.Scanner;

public class Lab7_1b {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Wpisz jak wielka ma być ciag finonacciego");
        int n =scanner.nextByte();
        System.out.println(fibonacci(n));

    }
    public static int fibonacci(int n) {
        if(n == 1) {
            return 0;
        }else if(n== 2){
            return 1;
        }else {
            return fibonacci(n-1) + fibonacci(n-2);
        }
    }
}
