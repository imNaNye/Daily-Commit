public class BestGirl extends GoodGirl{
    public void show(){
        System.out.println(super.name + "는 자바를 무지하게 잘 안다.");
    }
    BestGirl(String name){
        super(name);
    }
}
