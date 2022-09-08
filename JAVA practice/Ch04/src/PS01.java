class Triangle{
    private double side;
    private double height;

    Triangle(double side,double height){
        this.side = side;
        this.height = height;
    }

    public double getSide(){
        return this.side;
    }

    public Triangle setSide(double side){
        this.side = side;
        return this;
    }

    public double getHeight(){
        return this.height;
    }

    public Triangle setHeight(double height){
        this.height = height;
        return this;
    }

    public double findArea(){
        return this.height * this.side /2;
    }

    public boolean isSameArea(Triangle b){
        if (this.findArea() == b.findArea())
            return true;
        else
            return false;
    }
}

public class PS01 {
    public static void main(String[] args) {
        Triangle t = new Triangle(10.0, 5.0);
        Triangle t2 = new Triangle(5.0, 10.0);
        Triangle t3 = new Triangle(8.0,8.0);

        System.out.println(t.isSameArea(t2));
        System.out.println(t.isSameArea(t3));
    }
}
