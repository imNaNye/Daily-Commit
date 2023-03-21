import java.util.Scanner;

public class Q10869 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        System.out.printf("%d\n%d\n%d\n%d\n%d",a+b, a-b, a*b, a/b, a%b);
    }
}
