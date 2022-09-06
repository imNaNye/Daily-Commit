import java.util.Scanner;
public class PS03 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i = 0, total = 0;
        do {
            System.out.print("양의 정수를 입력하세요 : ");
            i = in.nextInt();
            if (i % 2 != 0)
                continue;
            total += i;
        } while (i >= 0);
        System.out.println("총합은 "+ total +" 입니다.");
    }

}
