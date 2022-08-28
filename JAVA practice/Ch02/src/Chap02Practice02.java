import java.util.Scanner;

public class Chap02Practice02 {
    public static void main(String[] args) {
        int i;
        Scanner in = new Scanner(System.in);
        System.out.print("정수를 입력하세요 : ");
        i = in.nextInt();

        if (i % 2 == 0)
            System.out.println(i+"는 짝수입니다.");
        else
            System.out.println(i+"는 홀수입니다. ");
    }
}
