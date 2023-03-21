import java.util.Scanner;

public class PS02 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("정수를 입력하세요");
        int num = in.nextInt();
        System.out.println(num + "의 제곱은 " + num * num);
    }
}
