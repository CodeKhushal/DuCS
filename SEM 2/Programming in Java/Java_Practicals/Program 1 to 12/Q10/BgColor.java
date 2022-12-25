/*
	Q10) Using AWT, write a program to create two buttons named Red and Blue.
	When a button is pressed the background color should be set to the color named
	by the button’s label.
*/
import java.awt.*;
        import java.awt.event.*;
public class BgColor extends WindowAdapter implements ActionListener{
    Frame frame;
    Button button1, button2;
    BgColor(){
        frame = new Frame("My Frame");
        button1 = new Button("RED");
        button2 = new Button("BLUE");
        button1.setBounds(100,50,100,50);
        button2.setBounds(100,150,100,50);
        frame.add(button1);
        frame.add(button2);
        frame.addWindowListener(this);
        button1.addActionListener(this);
        button2.addActionListener(this);
        frame.setSize(300,260);
        frame.setLayout(null);
        frame.setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==button1){
            frame.setBackground(Color.red);
        }
        else if(e.getSource()==button2){
            frame.setBackground(Color.blue);
        }
    }
    public void windowClosing(WindowEvent e) {
        frame.dispose();
    }
    public static void main(String args[]){
        new BgColor();
    }
}
