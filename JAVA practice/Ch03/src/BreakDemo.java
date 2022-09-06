public class BreakDemo {
    public static void main(String[] args) {
        int i = 1, j = 5;

        while(true){
            System.out.print(i++);
            if (i >= j)
                break; //가장 안쪽 반복문을 종료 (레이블이 없으므로)
        }
    }
}
