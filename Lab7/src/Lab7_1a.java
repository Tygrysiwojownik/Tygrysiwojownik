import java.util.Scanner;

public class Lab7_1a {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Wpisz długość ciągu");
       int h=scanner.nextByte();
        int []tab=new int[h];
        for(int i=0;i<2;i++){
            tab[0]=0;
            tab[1]=1;
            System.out.println(tab[i]);
        }
       for (int i=2;i<h;i++){
         tab[i]=tab[i-1]+tab[i-2];
           System.out.println(tab[i]);
       }

    }
}

