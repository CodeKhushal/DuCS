//CGPA class
import java.awt.*;
import java.awt.event.*;
public class CGPA extends WindowAdapter implements ActionListener{
    Frame frame2;
    Label label;
    TextField tf;
    Button button;
    CGPA(String cgpa){
        frame2 = new Frame("CGPA");
        label = new Label("CGPA: ");
        label.setBounds(50,50,50,30);
        tf = new TextField(cgpa);
        tf.setBounds(110,50,150,30);
        button = new Button("CLOSE");
        button.setBounds(170,110,90,30);
        button.addActionListener(this);
        frame2.add(label);
        frame2.add(tf);
        frame2.add(button);
        frame2.setBackground(Color.orange);
        frame2.addWindowListener(this);
        frame2.setSize(310,190);
        frame2.setLayout(null);
        frame2.setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        frame2.dispose();
    }
    public void windowClosing(WindowEvent e){
        frame2.dispose();
    }
}
