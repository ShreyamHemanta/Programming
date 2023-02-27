import java.util.*;

class plate {
	int length, width;
	plate(int a, int b) {
		length=a;
		width=b;
	}
}

class box extends plate{
	int length, width, height;
	box(int a, int b, int c){
		super(a,b);
		height=c;
	}
}

class wood_box extends box{
	int length, width, height, thick;
	wood_box(int a, int b, int c,int d){
		super(a,b,c);
		thick=d;
	}
}

class A7_Q3 {
	public static void main(String args[]) {
		wood_box wb=new wood_box(10,20,30,40);
	}
}