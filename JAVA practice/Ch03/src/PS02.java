import java.util.Scanner;
public class PS02 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("등수를 입력하세요 :");
        int rank = in.nextInt();

        switch (rank) {
            case 1 -> System.out.println("아주 잘했습니다");
            case 2,3 -> System.out.println("잘했습니다.");
            case 4 -> System.out.println("보통입니다.");
            default -> System.out.println("노력해야겠습니다.");
        }
    }
}
