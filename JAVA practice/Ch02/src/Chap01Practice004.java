import java.util.Scanner;
public class Chap01Practice004 {
    public static void main(String[] args) {
    int hour, min, sec, r;
    int i;
    Scanner in = new Scanner(System.in);
    System.out.println("초 단위 정수를 입력하세요");
    i = in.nextInt();

    hour = i / 3600;
    r = i % 3600;
    min = r / 60;
    r = r % 60;
    sec = r;

        System.out.println(hour + "시간" + min + "분" + sec + "초");


    }
}
