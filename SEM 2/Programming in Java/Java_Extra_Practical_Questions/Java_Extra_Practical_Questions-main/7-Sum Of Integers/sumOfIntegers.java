import java.util.Scanner;
public class sumOfIntegers {
    public static void main(String[] args) {
        int num, sum = 0, c;
        Scanner scan = new Scanner(System.in);
        do {
            System.out.print("Enter the number: ");
            num = scan.nextInt();
            sum += num;
            System.out.println("The sum of numbers is: " + sum);
            System.out.println();
            System.out.print("Do you want to continue this program: PRESS 1 ");
            c = scan.nextInt();
            System.out.println();
        } while (c == 1);
    }
}
