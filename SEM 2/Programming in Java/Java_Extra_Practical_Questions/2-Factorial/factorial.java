//To find the factorial of a given number.

import java.util.Scanner;
public class factorial {

    public static void main(String[] args){
	int fact=1,num;

        Scanner scan=new Scanner(System.in);
	System.out.println("Enter the number that you want to factorial: ");
	num=scan.nextInt();
        	for(int i=1;i<=num;i++){
           	 fact*=i;
        	}
	System.out.println("Factorial of number is: "+fact);
       }
}
