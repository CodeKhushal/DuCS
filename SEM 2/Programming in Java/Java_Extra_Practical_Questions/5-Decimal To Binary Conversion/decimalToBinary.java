import java.util.Scanner;
public class decimalToBinary {
    public static void main(String[] args) {
        int[] binary = new int[20];
        int num, i = 0;
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter the number that you want to convert decimal into binary: ");
        num=scan.nextInt(); //num=10
        int numCopy = num;
        while(num!=0)
        {
            binary[i]=num%2; // [i=0] 0, [i=1] 1 [i=2] 0 [i=3] 1
            num/=2; // num=5 2 1 0
            i++; //1 2 3 4
        }
        System.out.print("Binary Representation of "+numCopy+" is:      ");
        for(int j=i-1;j>=0;j--)
            System.out.print(binary[j]+" ");
    }
}
