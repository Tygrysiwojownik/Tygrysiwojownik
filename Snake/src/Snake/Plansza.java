package Snake;

import javax.swing.*;
import java.awt.*;

public class Plansza extends JFrame {
public static JLabel score;
    public Plansza()throws HeadlessException {
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setTitle("Snake");

        score = new JLabel("Score:", SwingConstants.CENTER);
        score.setFont(new Font(score.getFont().getName(),Font.BOLD,30));

        add(new MainPanel());
        add(score, BorderLayout.NORTH);
        pack();
        setLocationRelativeTo(null);
        setResizable(false);
    }
}
