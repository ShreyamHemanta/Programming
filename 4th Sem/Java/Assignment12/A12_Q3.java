import java.awt.*;
import javax.swing.*;

public class A12_Q3 extends JFrame {

    public A12_Q3() {
        super("Hexagon Drawing Example");
        setSize(200, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void paint(Graphics g) {
        int[] xPoints = { 50, 100, 125, 100, 50, 25 };
        int[] yPoints = { 25, 25, 75, 125, 125, 75 };
        int nPoints = 6;
        g.drawPolygon(xPoints, yPoints, nPoints);
    }

    public static void main(String[] args) {
        A12_Q3 h = new A12_Q3();
        h.setVisible(true);
    }

}