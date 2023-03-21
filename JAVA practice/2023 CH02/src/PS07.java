import java.util.Scanner;

public class PS07 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("정수를 입력하세요");
        int num = in.nextInt();
        if (num % 4 == 0 && num % 5 == 0)
            System.out.println( num + "은 4와 5의 공배수입니다.");
        else if (num % 4 == 0)
            System.out.println( num + "은 4의 배수입니다.");
        else if (num % 5 == 0)
            System.out.println( num + "은 5의 배수입니다.");
        else
            System.out.println( num + "은 4와 5로 나누어지지 않습니다.");
    }
}
