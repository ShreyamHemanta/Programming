import java.awt.*;
import java.applet.*;

public class A12_Q1 extends Applet {

    public void paint(Graphics g) {
        int x = 100;
        int y = 100;
        int size = 200;
        int startAngle = 0;
        int arcAngle = 90;
        g.setColor(Color.red);
        g.fillArc(x, y, size, size, startAngle, arcAngle);
        g.setColor(Color.blue);
        g.fillArc(x, y, size, size, startAngle + arcAngle, arcAngle);
        g.setColor(Color.green);
        g.fillArc(x, y, size, size, startAngle + arcAngle * 2, arcAngle);
        g.setColor(Color.yellow);
        g.fillArc(x, y, size, size, startAngle + arcAngle * 3, arcAngle);
    }

}