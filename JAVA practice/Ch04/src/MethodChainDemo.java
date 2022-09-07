class Person{
    String name;
    int age;

    public Person setName(String name){
        this.name = name;
        return this;
    }

    public Person setAge(int age){
        this.age = age;
        return this;
    }

    public void sayHello(){
        System.out.println("안녕, 나는 "+name+"이고 나이는 "+age+"살이얌.");
    }
}


public class MethodChainDemo {
    public static void main(String[] args) {
        Person person = new Person();
        person.setName("민국").setAge(17).sayHello();
    }
}
