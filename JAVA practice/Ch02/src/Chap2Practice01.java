import java.util.Scanner;

public class Chap2Practice01 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        double w, h, area;

        System.out.println("직사각형의 가로 길이를 입력하세요: ");
        w = in.nextDouble();
        System.out.println("직사각형의 세로 길이를 입력하세요: ");
        h = in.nextDouble();

        area = w * h;
        System.out.println("직사각형의 넓이는 "+area+"입니다. ");
    }
}
