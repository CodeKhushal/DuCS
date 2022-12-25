//Information class
import java.awt.*;
import java.awt.event.*;

public class Information extends WindowAdapter implements ActionListener {
    Frame frame1;
    Label lName, lCourse, lRollNo, lClg;
    Button button;

    Information(String name, String course, String rollno, String clg) {
        frame1 = new Frame("INFORMATION");
        lName = new Label();
        lName.setBounds(50, 50, 250, 30);
        lCourse = new Label();
        lCourse.setBounds(50, 90, 250, 30);
        lRollNo = new Label();
        lRollNo.setBounds(50, 130, 250, 30);
        lClg = new Label();
        lClg.setBounds(50, 170, 250, 30);
        button = new Button("CLOSE");
        button.setBounds(175, 220, 125, 30);
        button.addActionListener(this);
        lName.setText("Name: " + name);
        lName.setBackground(Color.white);
        lCourse.setText("Course: " + course);
        lCourse.setBackground(Color.white);
        lRollNo.setText("Roll No: " + rollno);
        lRollNo.setBackground(Color.white);
        lClg.setText("College: " + clg);
        lClg.setBackground(Color.white);
        frame1.add(lName);
        frame1.add(lCourse);
        frame1.add(lRollNo);
        frame1.add(lClg);
        frame1.add(button);
        frame1.setBackground(Color.pink);
        frame1.addWindowListener(this);
        frame1.setSize(350, 300);
        frame1.setLayout(null);
        frame1.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        frame1.dispose();
    }

    public void windowClosing(WindowEvent e) {
        frame1.dispose();
    }
}
