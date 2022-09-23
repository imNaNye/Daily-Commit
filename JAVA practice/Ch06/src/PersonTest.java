public class PersonTest {
    public static void main(String[] args) {
        Person[] arr = new Person[3];

        Person p1 = new Person();
        p1.setAge(22);
        p1.setName("길동이");
        arr[0] = p1;

        Student p2 = new Student();
        p2.setName("황진이");
        p2.setAge(23);
        p2.setNumber(100);
        arr[1] = p2;

        ForeignStudent p3 = new ForeignStudent();
        p3.setAge(30);
        p3.setName("Amy");
        p3.setCountry("U.S.A");
        p3.setNumber(200);
        arr[2] = p3;

       for(Person p : arr){
           p.show();
        }
    }
}
