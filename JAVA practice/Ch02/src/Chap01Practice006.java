
import java.util.Scanner;
public class Chap01Practice006 {
    public static void main(String[] args) {
        int f;
        double c;
        Scanner in = new Scanner(System.in);
        System.out.print("화씨온도를 입력하세요: ");
        f = in.nextInt();
        c = ((double)f-32)*5/9;
        System.out.println("섭씨온도는 "+c+"도입니다.");
    }
}
