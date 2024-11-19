import java.util.scanner;
public class scanner{
	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);	
	int a=Integer.parseInt(args[0]);
	int b=Integer.parseInt(args[1]);
	char c=sc.next().charAt(0);
	if (c=='+') {
		System.out.println(a+b);
		
	}
	else if(c=='-') {
		System.out.println(a-b);
	}
	else if (c=='*') {
		System.out.println(a*b);
	}
	else if (c=='/') {
		
		System.out.println(a/b);
	
	
	}
	else{
		System.out.println("plese enter +,-,*,/");

	}
