public class GoodGirl extends Girl{
    public void show(){
        System.out.println(super.name + "는 자바를 잘 안다.");
    }
    GoodGirl(String name){
        super(name);
    }
}
