public class Tree extends Countable{
    Tree(String name, int num){
        super(name,num);
    }

    public void count(){
        System.out.println(name + "이 5그루 있습니다.");
    }

    public void ripen(){
        System.out.println(name + "이 무럭무럭 자랐습니다.");
    }
}