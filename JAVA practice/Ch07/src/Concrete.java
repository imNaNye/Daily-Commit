public class Concrete extends Abstract{
    int j;

    Concrete(int i, int j){
        super(i);
        this.j = j;
    }

    public void show(){
        System.out.println("i = " + i +", j = " + j);
    }
}
