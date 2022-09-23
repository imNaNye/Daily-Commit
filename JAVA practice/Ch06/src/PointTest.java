public class PointTest {
    public static void main(String[] args) {
        Point a = new Point(1,4);
        System.out.println(a.toString());

        MovablePoint b = new MovablePoint(3,4,1,2);
        System.out.println(b.toString());
    }
}
