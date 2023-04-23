import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class A12_Q4 extends JFrame implements ActionListener {

    JButton yellowButton, blueButton, pinkButton;

    public A12_Q4() {
        super("Color Button Example");
        setSize(300, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        yellowButton = new JButton("Yellow");
        blueButton = new JButton("Blue");
        pinkButton = new JButton("Pink");

        yellowButton.addActionListener(this);
        blueButton.addActionListener(this);
        pinkButton.addActionListener(this);

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(yellowButton);
        buttonPanel.add(blueButton);
        buttonPanel.add(pinkButton);

        getContentPane().add(buttonPanel, BorderLayout.CENTER);
    }

    public void actionPerformed(ActionEvent e) {
        String color = e.getActionCommand();
        if (color.equals("Yellow")) {
            getContentPane().setBackground(Color.YELLOW);
        } else if (color.equals("Blue")) {
            getContentPane().setBackground(Color.BLUE);
        } else if (color.equals("Pink")) {
            getContentPane().setBackground(Color.PINK);
        }
    }

    public static void main(String[] args) {
        A12_Q4 cbf = new A12_Q4();
        cbf.setVisible(true);
    }

}