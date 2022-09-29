public class Phone {
    protected String owner;

    public Phone(){
        owner = "장현경";
    }
    public Phone(String owner){
        this.owner = owner;
    }
    void talk(){
        System.out.println("통화중");
    }
}
