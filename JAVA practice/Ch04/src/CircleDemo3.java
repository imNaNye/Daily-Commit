class Circle3{
    double radius;
    static int numOfCircles = 0;
    int numCircles = 0;

    public Circle3(double radius){
        this.radius = radius;
        numCircles++;
        numOfCircles++;
    }
}

public class CircleDemo3 {
    public static void main(String[] args) {
        Circle3 myCircle = new Circle3(3.0);
        Circle3 yourCircle = new Circle3(5.0);

        // print(); 메인 메서드는 정적 메서드이므로 인스턴스 메서드를 호출할 수 없음.

        System.out.println(Circle3.numOfCircles);
        System.out.println(yourCircle.numCircles);
    }
    void print(){
        System.out.println("인스턴스 메서드입니다.");
    }
}
