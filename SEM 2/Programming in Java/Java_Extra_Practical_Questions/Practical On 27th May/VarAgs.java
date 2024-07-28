import java.util.Scanner;

public class VarAgs {
    public static void display(String ...a){
        for(String s:a)
        {
            System.out.print(s+" ");
        }
        System.out.println();
    }

    public static int sum(int ...x){
        int summation=0;
        for(int e:x){
            summation+=e;
        }
        return summation;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        display("Hello","world!");
        display("Have","a","good","day!");
        System.out.println("Sum of the given arguments is: "+sum(20,44,67));
        System.out.println("Sum of the given arguments is: "+sum(1,2,3,4,5,6,7,8,9,10));
    }
}
