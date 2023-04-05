import java.util.Scanner;

public class Switch3Demo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("? ");
        int i = in.nextInt();
        double d = 3.0;

        String s = switch(i) { //연산식으로 사용 시 모든 int의 값에 대응하도록 default를 추가해야 함
            case 3 -> "three";
            case 2-> "two"; //케이스 라벨 2개 이상도 함께 사용가능 case 2, 1 (o)
            case 1-> "one";
            default -> {
                System.out.println("!!!");
                yield "oops";
            } //반환값이 모두 동일하게 주어져야 함. 반환 void의 경우에도 yield 사용
        };

        System.out.println(s);

    }
}
