public class PS03 {
    public static void main(String[] args) {
        for (Direction d : Direction.values())
            System.out.print(d + " ");
    }
}
enum Direction{
    East("동쪽"), West("서쪽"), North("북쪽"), South("남쪽");

    private String s;

    private Direction(String s) {
        this.s = s;
    }

    public String toString(){
        return this.s;
    }
}
