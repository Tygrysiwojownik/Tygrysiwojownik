import java.util.Scanner;

     public class Lab7_6b {
         public static void main(String[] args) {
             int x, y;
             Scanner sc = new Scanner(System.in);
             System.out.print("Podaj pierwsza liczbe: ");
             x = sc.nextInt();
             System.out.print("Podaj druga liczbe: ");
             y = sc.nextInt();
             System.out.println("NWD liczb " + x + " i " + y + " wynosi: " + (nwd(x, y)));
         }
         public static int nwd(int a, int b){
             while (b != 0){
                 int m = b;
                 b = a % b;
                 a = m;
             }
             return a;
         }
     }

