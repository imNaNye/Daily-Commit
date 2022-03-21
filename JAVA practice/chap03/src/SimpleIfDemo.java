import java.util.Scanner;
/*숫자를 입력받아 홀수/짝수 출력하는 프로그램*/

public class SimpleIfDemo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("? ");
        int x = in.nextInt();
        if (x%2 == 0) {
            System.out.println("even");
        }
        if (x % 2 != 0)
            System.out.println("odd"); // 실행문이 한 줄일 때는 중괄호 생략해도 무방
        System.out.println("finish");
    }
}
