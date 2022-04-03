import java.util.Scanner;

public class Switch4Demo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("? ");
        int i = in.nextInt();
        double d = 3.0;

       String s = switch (i) {
           case 3 : System.out.println("최우등");    //->와 달리 :(column) case 에서는 2문장 이상의 명령어 ㄱㄴ
                yield "one";
           case 2, 1 : System.out.println("우등");
                yield "two";//케이스 라벨 2개 이상도 함께 사용가능 case 2, 1 (o)
           default : System.out.println("!!!");
                yield "oops";

        };
    }
}
