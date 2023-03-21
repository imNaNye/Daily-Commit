import java.util.Scanner;

public class PS04 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("초 단위 정수를 입력하세요 : ");
        int sec = in.nextInt();
        int hour = sec / 3600;
        sec %= 3600;
        int min = sec / 60;
        sec %= 60;
        System.out.println(hour + "시간 " + min + "분 " + sec + "초");
    }
}
