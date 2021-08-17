
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//
		int i = 20;
		// i++;
		// i = i + 1;
		i += 1;
		System.out.println((100 < i) && (i < 200));
		
		//
		String a = "I Love You.";
		if(a.contains("Love")) {
			// 포함하는 경우 실행되는 부분
			System.out.println("Me Too.");
		} else {
			// 포함되지 않는 경우 실행되는 부분
			System.out.println("I Hate You.");
		}
	}

}
