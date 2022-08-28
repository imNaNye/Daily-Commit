import java.util.Scanner;

public class Chap01Practice003 {
    public static void main(String[] args) {
        int radius, height;
        Scanner in = new Scanner(System.in);

        System.out.print("원기둥의 밑면 반지름은? ");
        radius = in.nextInt();
        System.out.print("원기둥의 높이는? ");
        height = in.nextInt();
        System.out.println("원기둥의 부피는 " + radius * radius * height * 3.14);

    }
}
