
/*
    Q12) Using AWT, write a program to create two buttons labelled ‘A’ and
    ‘B’. When button ‘A’ is pressed, it displays your personal information (Name,
     Course, Roll No, College) and when button ‘B’ is pressed, it displays your CGPA
     in previous semester.
 */
//MainQ12 class
import java.awt.*;
import java.awt.event.*;

public class MainQ12 extends WindowAdapter implements ActionListener {
    Frame frame;
    Button button1, button2;

    MainQ12() {
        frame = new Frame("MY FRAME");
        button1 = new Button("A");
        button2 = new Button("B");
        button1.setBounds(120, 100, 150, 50);
        button2.setBounds(120, 200, 150, 50);
        button1.addActionListener(this);
        button2.addActionListener(this);
        frame.addWindowListener(this);
        frame.add(button1);
        frame.add(button2);
        frame.setBackground(Color.gray);
        frame.setSize(400, 400);
        frame.setLayout(null);
        frame.setVisible(true);
    }

    public void windowClosing(WindowEvent e) {
        frame.dispose();
    }

    public static void main(String args[]) {
        new MainQ12();
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button1) {
            new Information("Khushal Sachdeva", "B.Sc. (Hons.) Computer Science", "88044", "ARSD");
        }
        if (e.getSource() == button2) {
            new CGPA("9.4");
        }
    }
}

