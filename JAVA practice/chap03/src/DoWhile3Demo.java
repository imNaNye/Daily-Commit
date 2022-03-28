public class DoWhile3Demo {
    public static void main(String[] args) {
        int row = 2;
        do {
            int col = 1;
            do {
                System.out.printf("%4d", row * col++);
            }while (col < 10);
            System.out.println();
            row++;
        }while (row<10);
    }
}
