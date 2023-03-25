import java.util.Scanner;

public class Week3_20201458 {
    public static void main(String[] args) {
        int x, y;
        Scanner in = new Scanner(System.in);
        x = in.nextInt();
        y = in.nextInt();
        x <<= y;
        System.out.println(x);
        System.out.println(x >= 100);
    }
}
