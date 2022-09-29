public class Telephone extends Phone {
    private String when;

    public Telephone(){
        when = "내일";
    }
    public Telephone(String owner, String when){
        this.owner = owner;
        this.when = when;
    }
    public void autoAnswering(){
        System.out.println(owner + "가 부재중이니 "+when+"에 전화 요망");
    }
}
