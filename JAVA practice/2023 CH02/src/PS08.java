import java.util.Scanner;

public class PS08 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("0에서 999 사이 정수를 입력하세요.");
        int num = in.nextInt();
        int sum = (num % 10) + (num / 10 % 10) + (num / 100); //각각 1의 자리 수, 10의 자리 수, 100의 자리 수
        System.out.println(sum);
    }
}
