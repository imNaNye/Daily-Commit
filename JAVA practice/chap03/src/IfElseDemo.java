import java.util.Scanner;

public class IfElseDemo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("? ");
        int x = in.nextInt();
        if (x%2 == 0)
            System.out.println("even");
        else
            System.out.println("odd"); // 실행문이 한 줄일 때는 중괄호 생략해도 무방
        System.out.println("finish");
    }
}
