import java.util.Scanner;
public class PS06 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("철수 : ");
        String chul = in.next();
        System.out.print("영희 : ");
        String young = in.next();

        if (chul.equals(young))
            System.out.println("무승부입니다.");
        else if (chul.equals("r")) {
            if (young.equals("s"))
                System.out.println("철수가 이겼습니다.");
            else
                System.out.println("영희가 이겼습니다.");
        }
        else if (chul.equals("s")){
            if (young.equals("r"))
                System.out.println("영희가 이겼습니다.");
            else
                System.out.println("철수가 이겼습니다.");
        }
        else
            if (young.equals("r"))
                System.out.println("철수가 이겼습니다.");
            else
                System.out.println("영희가 이겼습니다.");

    }
}
