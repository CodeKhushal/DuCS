/*
	Q9) Using AWT, write a program to display a string in 
	frame window with pink color as background.
*/
import java.awt.*;
        import java.awt.event.*;
public class FrameDisplay extends Frame{
    Label label;
    FrameDisplay(){
        addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent e) {
                dispose();
            }
        });
        label = new Label("My name is Khushal!");
        label.setBounds(90,110,120,50);
        add(label);
        setBackground(Color.orange);
        setSize(300,270);
        setLayout(null);
        setVisible(true);
    }
    public static void main(String[] args){
        new FrameDisplay();
    }
}
