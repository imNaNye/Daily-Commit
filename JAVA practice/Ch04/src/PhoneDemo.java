class Phone{
    String model;
    int value; //필드 설정

    void print(){
        System.out.println(value + "만 원짜리 " + model + "스마트폰");
    }
}


public class PhoneDemo {
    public static void main(String[] args) {
        Phone myPhone = new Phone(); //Phone 타입 객체 생성, myPhone이라는 참조 변수에 대입
        myPhone.model = "아이폰 XS";
        myPhone.value = 130;
        myPhone.print();

        Phone yourPhone = new Phone();
        yourPhone.model = "갤럭시 3";
        yourPhone.value = 100;
        yourPhone.print();
    }
}

