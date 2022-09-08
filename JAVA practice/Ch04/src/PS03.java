class Member{
    private String name;
    private String id;
    private String psword;
    private int age;

    public String getName(){
        return this.name;
    }

    public String getId(){
        return this.id;
    }

    public String getPsword(){
        return this.psword;
    }

    public int getAge(){
        return this.age;
    }

    public Member setName(String name){
        this.name = name;
        return this;
    }

    public Member setId(String id){
        this.id = id;
        return this;
    }

    public Member setPsword(String psword){
        this.psword = psword;
        return this;
    }

    public Member setAge(int age){
        this.age = age;
        return this;
    }

    public Member(String name, String id, String psword, int age){
        this.name = name;
        this.id = id;
        this.psword = psword;
        this.age = age;
    }

    public void print(){
        System.out.println(" 이름 : "+this.name + "\n 아이디 : " + this.id + "\n 패스워드 : "+ this.psword + "\n 나이 : " + this.age);
    }
}

public class PS03 {
    public static void main(String[] args) {
        Member me = new Member("장현경","눈눈나나","12345678",22);
        me.print();
    }
}
