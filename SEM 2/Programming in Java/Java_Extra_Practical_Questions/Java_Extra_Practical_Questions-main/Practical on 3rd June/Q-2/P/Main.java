package P;

import P1.TwoDim;
import P2.ThreeDim;
public class Main {
    public static void main(String[] args) {
        TwoDim ref1 = new TwoDim(8, 12);
        System.out.println(ref1.toString());
        ThreeDim ref2 = new ThreeDim(6, 9, 18);
        System.out.println(ref2.toString());
    }
}
