public class For2Demo {
    public static void main(String[] args) {
        for (int row = 2; row < 10; row++){
            for (int col = 1; col < 10; col++)
                System.out.printf("%4d", row * col);
            System.out.println();
        }
    }
}
