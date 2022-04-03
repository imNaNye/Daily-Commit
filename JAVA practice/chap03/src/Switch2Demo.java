import java.util.Scanner;

public class Switch2Demo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("? ");
        int i = in.nextInt();
        double d = 3.0;

        switch(i) {
            case 3 -> {
                System.out.print("*");
                System.out.println("---");
            }
            case 2->
                System.out.print("*");
            case 1->
                System.out.print("*");
           /* default->
                System.out.print("-");*/
        }
    }
}
