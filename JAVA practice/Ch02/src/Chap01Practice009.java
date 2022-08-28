import java.util.Scanner;
public class Chap01Practice009 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int g, j, i;
        System.out.print("전공 이수 학점 : ");
        g = in.nextInt();
        System.out.print("교양 이수 학점 :");
        j = in.nextInt();
        System.out.println("일반 이수 학점 : ");
        i = in.nextInt();
        boolean t;
        if ((g+j+i>=140) && ((j >= 30 && i >=30) || (j+i>=80)))
            t = true;
        else
            t = false;

        if (t = true)
            System.out.println("졸업 가능");
        else
            System.out.println("졸업 불가");

    }
}
