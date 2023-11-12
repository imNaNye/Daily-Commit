import java.util.Random;

public class week12_20201458 {
    static void rand4() {
        Random random = new Random();
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 4; j++) {
                System.out.print(random.nextInt(10) + 1 + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
            rand4();
    }
}
