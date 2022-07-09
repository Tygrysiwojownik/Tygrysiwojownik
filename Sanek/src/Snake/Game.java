package Snake;

import java.awt.*;

public class Game {
    public static void main(String[] args) {
        EventQueue.invokeLater(()->{
            Plansza plansza = new Plansza();
            plansza.setVisible(true);
        });
    }
}
