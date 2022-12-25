/*
  Design a class Complex having a real part (x) and an imaginary part (y). Provide methods to perform
  the following on complex numbers:
  1. Add two complex numbers.
  2. Multiply two complex numbers.
  3. toString() method to display complex numbers in the form: x + i y
*/

class Complex {
 private int x;
private int y;

 public Complex(int real, int imaginary) {
 this.x = real;
this.y = imaginary;
 }

 public Complex add(Complex o) {
 return new Complex(
 this.x + o.x,
this.y + o.y
 );
 }

 public Complex multiply(Complex o) {
 return new Complex(
 this.x * o.x - this.y * o.y,
 this.x * o.y + o.x * this.y
 );
 }

 public String toString() {
 return x +" + " + y + "i";
 }
}

public class Complex_main {
 public static void main(String[] args) {
 Complex c1 = new Complex(1, 2);
 Complex c2 = new Complex(3, 4);
 System.out.println("Complex 1: " + c1);
 System.out.println("Complex 2: " + c2);
 System.out.println("Sum: " + c1.add(c2));
 System.out.println("Product: " + c1.multiply(c2));
 }
}
