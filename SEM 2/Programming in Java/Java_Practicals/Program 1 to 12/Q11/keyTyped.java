/*
    Q11) Using AWT, write a program using appropriate adapter class to
    display the message(Typed character is: <typedCharacter>) in the frame
    window when user types any key.
*/
import java.awt.*;
import java.awt.event.*;
public class keyTyped extends KeyAdapter
{
    Frame f;
    Label label;
    keyTyped()
    {
        f = new Frame();
        label = new Label();
        label.setBounds(25, 35, 200, 100);
        label.setBackground(Color.LIGHT_GRAY);
        label.setAlignment(label.CENTER);
        f.add(label);
        f.addKeyListener(this);
        f.setFocusable(true);
        f.setSize(300,300);
        f.setVisible(true);
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing (WindowEvent e) {
                f.dispose();
            }
        });
    }
    // 3 overrided methods of classs KeyAdapter
    public void keyPressed(KeyEvent e) { }
    public void keyReleased(KeyEvent e) { }
    public void keyTyped(KeyEvent e)
    {
        char ch = e.getKeyChar();
        label.setText("Typed character is: "+ch);
    }
    public static void main(String[] args)
    {
        new keyTyped();
    }
}
