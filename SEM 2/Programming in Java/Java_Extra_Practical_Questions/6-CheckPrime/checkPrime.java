//This program will repeatedly ask the user for an integer and tell that the entered number is prime or not.
import java.util.Scanner;
public class CheckPrime {

    static public void checkPrime()
    {
        int num;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number that you want to check prime or not: ");
        num = scan.nextInt();
        int count = 0;
        for (int i = 2; i <= num - 1; i++) {
            if (num % i == 0) {
                count++;
            }
        }
        if (count == 0)
            System.out.println("Number " + num + " is prime");
        else
            System.out.println("Number " + num + " is not prime");
        System.out.println();
        checkPrime();
    }

    public static void main(String[] args) {
            checkPrime();
    }
}
