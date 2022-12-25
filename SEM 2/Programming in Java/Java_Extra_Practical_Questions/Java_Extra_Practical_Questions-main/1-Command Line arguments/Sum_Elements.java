//To find the sum of any integers entered as command line arguments.

import java.io.*;
public class SumElements {
    public static void main(String[] args) {        // in java args[0] is not name of file 
        int num, sum = 0;
        if(args.length == 0) {
            System.out.println("\nUsage : java commandline num1 num2 num3 ....\n");
            System.exit(1);
        }
        System.out.print("\nCommand Line Arguments are : ");
        for(int i=0, n = args.length; i < n; i++) {
            System.out.print(args[i] + " ");
            num = Integer.parseInt(args[i]);
            sum = sum + num;
        }
        System.out.println("\nSum Of Elements is : " + sum);
        System.out.println();
    }
}
