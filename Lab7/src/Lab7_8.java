
import java.util.Scanner;

public class Lab7_8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Wpisz jakiś ciąg znaków");
        char a=scanner.next().charAt(0);
        char b = scanner.next().charAt(0);
        char c = scanner.next().charAt(0);
        char d = scanner.next().charAt(0);
        System.out.println(d+" "+c+" "+b+" "+a);
    }
}
