import java.util.Scanner;

class emply{
    int empn,sal;
    String empname,dob;
emply(int empn,int sal,String empname,String dob)
{
    this.empn=empn;
    this.sal=sal;
    this.empname=empname;
    this.dob=dob;
}
void printdata()
{
    System.out.println("emp no:"+empn);
    System.out.println("emp name:"+empname);
    System.out.println("emp dob:"+dob);
    System.out.println("emp sal:"+sal);
}
}

public class emp {
    public static void main(String[] args) {
        emply [] e=new emply[2];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<2;i++)
        {
        System.out.println("enter e no");
         int empn=sc.nextInt();
         System.out.println("enter the name");
         String empname=sc.next();
         System.out.println("enter date of brth");
        String dob=sc.next();
         System.out.println("enter the sal");
         int sal=sc.nextInt();
        e[i]=new emply(empn, sal, empname, dob);
    }
        for(int i=0;i<2;i++){
        e[i].printdata();

    }
}
}