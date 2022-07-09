
import java.util.Arrays;

public class Erestatones {
    public static void main(String[] args) {

        int zakres = 1000;

        long start = System.nanoTime();

        boolean[] pierwsze = new boolean[zakres];

        Arrays.fill(pierwsze, true);

        pierwsze[0]=false;
        pierwsze[1]=false;

        for (int i=2;i<zakres;i++){
            if(pierwsze[i]==true){
                for(int j=i+i;j<zakres;j=j+i){
                    pierwsze[j]=false;
                }
            }

        }
        long stop = System.nanoTime();

        for(int i=0;i<zakres;i++){
            if(pierwsze[i]==true){
                System.out.println(i + " ,");
            }
        }
        System.out.println(String.format("%n%sms",stop-start));
    }
}
