public class CircleDemo {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        //c1.radius = 2.0; -> private 키워드 접근불가
        c1.setColor("빨강");
        c1.setRadius(3.0);
        c1.show();
    }
}

class Circle {
    private double radius;
    private String color; //private 기 때문에 외부에서 접근 불가능, 데이터 보호

    public double getRadius() {
        return radius;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    void show(){
        System.out.println("반지름이 "+ radius +"인 " +color + "색 원입니다");
    }
}