public class PhoneDemo { //메인 메소드는 무조건 public
    public static void main(String[] args) {
        Phone phone1 = new Phone();
        phone1.model = "갤럭시 노트 20";
        phone1.value = 150;
        phone1.print();

        Phone phone2 = new Phone();
        phone2.model = "갤럭시 노트 s7";
        phone2.value = 30;
        phone2.print();
    }
}
class Phone {
    String model; //멤버 필드는 기본값이 있음 (string의 경우 NULL)
    int value;

    void print(){
        System.out.println(this.value + "만 원짜리" + model + "스마트폰");//본 클래스의 필드를 사용할 때 this사용하거나 필드 이름만 쓰면 됨
    }
}