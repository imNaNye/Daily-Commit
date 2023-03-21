import java.util.Scanner;

public class PS03 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        final double PI = 3.14;
        System.out.println("원기둥의 밑면 반지름은?");
        int radius = in.nextInt();
        System.out.println("원기둥의 높이는? ");
        int height = in.nextInt();
        System.out.println("원기둥의 부피는 " + radius * radius * PI * height);
    }
}
