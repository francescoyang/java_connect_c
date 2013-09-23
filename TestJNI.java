public class TestJNI {

    static{

        System.loadLibrary("goodlucky");

    }

    public native void set(int value);

    public native int get();

    public static void main(String[] args) {

        TestJNI td=new TestJNI();

        td.set(10);

        System.out.println(td.get());

    }

} 
