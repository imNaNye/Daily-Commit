public class DoWhile1Demo {
    public static void main(String[] args) {
        int i = 1;
        do {
            System.out.print(i++);
        } while (i < 5);   //do-while은 하나의 문장으로 취급, 세미콜론 필요
    }
}
