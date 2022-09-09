class Line {
    private int length;

    Line(int length){
        this.length = length;
    }

    public boolean isSameLine(Line l){
        if (this.length == l.length)
            return true;
        else
            return false;
    }
}

public class PS05 {
    public static void main(String[] args) {
        Line a = new Line(1);
        Line b = new Line (1);

        System.out.println(a.isSameLine(b));
        System.out.println(a == b);
    }
}
