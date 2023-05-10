
class Animal{
    String name;
    int age;
    double weight;

    Animal(String name, int age, double weight){
        this.name = name;
        this.age = age;
        this.weight = weight;
    }

    public void animalDetails(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Weight: " + weight);
    }
}
class Eagle extends Animal{
    double wingspan;

    public Eagle(String name, int age, double weight, double wingspan) {
        super(name, age, weight);
        this.wingspan = wingspan;
    }
    @Override
    public void animalDetails() {
        super.animalDetails();
        System.out.println("Wingspan: " + wingspan);
    }
}

class Snake extends Animal{
    boolean venomous;

    public Snake(String name, int age, double weight, boolean venomous) {
        super(name, age, weight);
        this.venomous = venomous;
    }

    @Override
    public void animalDetails() {
        super.animalDetails();
        System.out.println("Venomous: " + venomous);
    }
}

class Main {
    public static void main(String[] args) {
        Eagle eagle = new Eagle("Eagle1", 5, 6.5, 2.1);
        Snake snake = new Snake("Snake1", 3, 1.5, true);

        eagle.animalDetails();
        snake.animalDetails();
    }
}

