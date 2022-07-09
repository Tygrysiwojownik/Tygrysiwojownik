import java.util.Scanner;

public class Lab7_3a {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Wpisz dlugosc silni");
        int s=1;
        int k = scanner.nextByte();
        for(int i=1;i<k;i++){
            s+=s*i;
        }
        System.out.println(s);
    }
}
