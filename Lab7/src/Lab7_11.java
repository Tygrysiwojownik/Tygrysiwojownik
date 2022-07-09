public class Lab7_11 {
    public static int hanoi(int rozmiar, int miejscepoczatkowe, int miejscedocelowe){
        int iloscposuniec=0;
        if(rozmiar==1){
            System.out.println("[element 1] z" +miejscepoczatkowe+ "na" +miejscedocelowe);
            return 1;
        } else {
            int miejscedotymczasowe = 6 - miejscedocelowe-miejscepoczatkowe;
            iloscposuniec+=hanoi(rozmiar-1,miejscepoczatkowe,miejscedotymczasowe);
            System.out.println("[element" +rozmiar+ "] z" +miejscepoczatkowe+ "na" +miejscedotymczasowe);
            iloscposuniec +=hanoi(rozmiar-1,miejscedotymczasowe,miejscedocelowe);
            iloscposuniec++;
        }
        return iloscposuniec;
    }
    public static void main(String[] args) {
        int iloscposuniec=hanoi(5,1,2);
        int iloscposuniec3=hanoi(3,1,2);
        System.out.println("ilosc posuniec = "+iloscposuniec);
        System.out.println("ilosc posunec ="+iloscposuniec3);
    }
}
