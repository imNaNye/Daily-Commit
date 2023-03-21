import java.util.Scanner;

public class PS05 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("영어 소문자를 입력하세요");
        char c = in.next().charAt(0);
        c += (char)((int)'A' - (int)'a');

        System.out.println(c);

    }
}
