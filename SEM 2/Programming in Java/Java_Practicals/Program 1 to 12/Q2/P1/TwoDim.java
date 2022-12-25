package P1;

public class TwoDim {
    private double x;
    private double y;
    public TwoDim(){
        this.x = 0;
        this.y = 0;
    }
    public TwoDim(double x, double y) {
        this.x = x;
        this.y = y;
    }
    @Override
    public String toString() {
        return "Coordinate: x = " + x + ", y = " + y;
    }
}
