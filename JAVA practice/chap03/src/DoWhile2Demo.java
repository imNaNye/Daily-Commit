public class DoWhile2Demo {
    public static void main(String[] args) {
        int i = 10;
        do {
            i++;
        } while (i<5);
        System.out.println(i);

        i = 10;
        while (i<5)
            i++;
        System.out.println(i);
    }
}
