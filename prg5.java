
    class student
    {
        int usn;
        String name;
        void getdata(int usn,String name)
        {
           this.usn=usn;
            this.name=name;
            
        }
        void printdata()
        {
            System.out.println(usn+"\t"+name);
 
        }

    }
    
    public class prg5{
        public static void main(String[] args) {
            student s=new student();
            s.getdata(10, "smith");
            s.printdata();
        }
    }
