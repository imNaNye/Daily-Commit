public class Smartphone extends Telephone{
    private String game;

    public Smartphone(){
        game = "롤";
    }

    public Smartphone(String owner, String game){
        this.owner = owner;
        this.game = game;
    }

    public void playGame(){
        System.out.println(owner +"가 " +game +"하는 중");
    }
}
