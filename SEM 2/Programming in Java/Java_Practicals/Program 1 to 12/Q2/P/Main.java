package P;
import P1.TwoDim;
import P2.ThreeDim;

public class MainClass {
    public static void main(String[] args) {
        // Showing Dynamic Method Dispatch
        TwoDim obj = new ThreeDim(5.8,20.5,80.9);
        System.out.println(obj.toString());
    }
}
