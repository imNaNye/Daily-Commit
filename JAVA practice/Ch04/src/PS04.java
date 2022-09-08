class Car{
    public static int numOfCar;
    public static int numOfRedCar;

    private String color;

    Car(String color){
        if (color.compareToIgnoreCase("red") == 0)
            numOfRedCar++;
        this.color = color;
        numOfCar++;
    }

    public String getColor(){
        return this.color;
    }

    public Car setColor(String color){
        this.color = color;
        return this;
    }
}

public class PS04 {

    public static void main(String[] args) {
        Car c1 = new Car("red");
        Car c2 = new Car("blue");
        Car c3 = new Car("RED");

        System.out.println(Car.numOfCar + " " + Car.numOfRedCar);
    }
}
