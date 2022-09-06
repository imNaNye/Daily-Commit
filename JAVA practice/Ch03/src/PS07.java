import java.util.Scanner;
public class PS07 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("철수 : ");
        String c = in.next();
        System.out.print("영희 : ");
        String y = in.next();

        whosWin(c,y);
    }
    static void whosWin(String a, String b){
        if (a.equals(b))
            System.out.println("무승부입니다.");
        else if (a.equals("r")) {
            if (b.equals("s"))
                System.out.println("철수가 이겼습니다.");
            else
                System.out.println("영희가 이겼습니다.");
        }
        else if (a.equals("s")){
            if (b.equals("r"))
                System.out.println("영희가 이겼습니다.");
            else
                System.out.println("철수가 이겼습니다.");
        }
        else
        if (b.equals("r"))
            System.out.println("철수가 이겼습니다.");
        else
            System.out.println("영희가 이겼습니다.");

    }
}
