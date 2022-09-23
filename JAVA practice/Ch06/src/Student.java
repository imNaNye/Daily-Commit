public class Student extends Person{
    protected int number;
    public int getNumber(){
        return number;
    }
    public void setNumber(int number){
        this.number = number;
    }
    Student(){
        //Person();
        this.number = 0;
    }
    public void show(){
        System.out.println("학생[이름 : "+name+", 나이 : "+age+", 학번 : "+number+"]");
    }
}
