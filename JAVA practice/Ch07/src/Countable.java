public abstract class Countable {
    abstract void count();

    protected String name;
    protected int num;

    Countable(String name, int num){
        this.name = name;
        this.num = num;
    }
}
