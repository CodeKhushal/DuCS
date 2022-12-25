import java.io.*;
import P1.Shape;
import P2.Rectangle;
import P3.Circle;
public class Main {
    static int getShapeType() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(
                System.in
        ));
        System.out.println("==============\n SHAPE TYPE \n==============");
        System.out.println(" (1) Rectangle\n (2) Circle");
        System.out.print("Enter Choice: ");
        return Integer.parseInt(br.readLine());
    }
    public static void main(String[] args) throws IOException {
        Shape ref;
        boolean flag = false;
        while (!flag) {
            switch (getShapeType()) {
                case 1:
                    flag = true;
                    ref = new Rectangle();
                    System.out.printf("Area: %.2f sq units",ref.area());
                    break;
                case 2:
                    flag = true;
                    ref = new Circle();
                    System.out.printf("Area: %.2f sq units",ref.area());
                    break;
                default:
                    System.err.println("Invalid Option");
                    break;
            }
        }
    }
}
