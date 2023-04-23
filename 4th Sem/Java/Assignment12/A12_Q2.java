import java.awt.*;
import javax.swing.*;

public class A12_Q2 extends JFrame {

    public A12_Q2() {
        super("Triangle Drawing Example");
        setSize(200, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void paint(Graphics g) {
        int[] xPoints = { 25, 75, 50 };
        int[] yPoints = { 30, 80, 50 };
        int nPoints = 3;
        g.drawPolygon(xPoints, yPoints, nPoints);
    }

    public static void main(String[] args) {
        A12_Q2 t = new A12_Q2();
        t.setVisible(true);
    }

}