import java.util.Scanner;


//score을 입력받아 grade를 출력하는 프로그램

public class MultipleIfDemo {  //rename 단축키 option +shift + enter
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("? ");
        int score = in.nextInt();
        String s;

        if (score >= 90)
            s = "A";
        else if (score >= 80)
            s = "B";
        else
            s = "C";

        System.out.println("Your grade is " + s);
    }



}
