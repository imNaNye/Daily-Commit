public class Person {
    protected String name;
    protected int age;
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

    public Person(){
        age = 0;
        name = "장현경";
    }

    public void show(){
        System.out.println("사람[이름 : "+name+", 나이 : "+age+"]");
    }
}
