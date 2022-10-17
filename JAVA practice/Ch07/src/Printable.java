public interface Printable {
    String toner;
    abstract void print();
}

public class PrintableTest implements Printable{
    public static void main(String[] args) {
        new PrintableTest();
    }

    void print(){};
}
