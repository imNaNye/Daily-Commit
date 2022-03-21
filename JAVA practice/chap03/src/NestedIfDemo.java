import java.util.Scanner;

public class NestedIfDemo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("? ");
        int score = in.nextInt();
        String s;

        if (score >= 90)
            s = "A";
        else {
            if (score >= 80)
                s = "B";
            else
                s = "C";
        }

        System.out.println("Your grade is " + s);
    }
}
