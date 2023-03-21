import java.util.Scanner;

public class PS09 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("전공 이수 학점을 입력하세요.");
        int major = in.nextInt();
        System.out.println("교양 이수 학점을 입력하세요.");
        int gyo = in.nextInt();
        System.out.println("일반 이수 학점을 입력하세요.");
        int norm = in.nextInt();

        if (major + gyo + norm >= 140){
            if (major >= 70){
                if ((gyo >= 30 && norm >= 30) || (gyo + norm >= 80))
                    System.out.println("졸업 가능");
            }
            else
                System.out.println("졸업 불가");
        }
        else
            System.out.println("졸업 불가");
    }
}
