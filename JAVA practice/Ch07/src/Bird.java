public class Bird extends Countable{

    public Bird(String name, int num){
        super(name, num);
    }

    public void count(){
        System.out.println(name +"이 2마리 있다.");
    }

    public void fly(){
        System.out.println(name + "이 날아갑니다.");
    }
}
