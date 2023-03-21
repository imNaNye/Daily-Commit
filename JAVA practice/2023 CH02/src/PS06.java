import java.util.Scanner;

public class PS06 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("화씨 온도를 입력하세요.");
        int far = in.nextInt();
        double cel = (far - 32) * 5 / 9;
        System.out.println("섭씨 온도는 " + cel + "도 입니다.");
    }
}
