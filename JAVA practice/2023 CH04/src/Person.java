public class Person {
    private String name;
    private int age;
    private static int totalPerson;

    public Person(){
        totalPerson++;
    }

    public Person(String name, int age){
        this.name = name;
        this.age = age;
        totalPerson++;
    }

    public String getName(){
        return this.name;
    }

    public void setName(String name){
        this.name = name;
    }

    public int getAge(){
        return this.age;
    }

    public void setAge(int age){
        this.age = age;
    }

    public static int getTotalPersons(){
        return totalPerson;
    }

    public String toString(){
        return "Name: "+name+", Age: "+age;
    }

    public static void main(String[] args) {
        Person p1 = new Person("John", 25);
        Person p2 = new Person("Mary", 30);
        System.out.println(p1.toString());
        System.out.println(p2.toString());
        System.out.println("Total Persons: "+getTotalPersons());
    }
}

