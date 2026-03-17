public class firast {

    public static void main(String[] args) {
        System.out.println("This is the starting of the programm");
        student kunal = new student();
        System.out.println(kunal.marks);
        System.out.println(kunal.rollno);
        System.out.println(kunal.name);
    }
}

class student {
    int rollno;
    String name;
    float marks;
 
    student(int rn, String n, float m) {
        this.rollno = rn;
        this.name = n;
        this.marks = m;

    }
    student(){
        System.out.println("Default bala chal gya bhai ");
    }

    void greeting(){
        System.out.println("Hello good morning");
    }

}