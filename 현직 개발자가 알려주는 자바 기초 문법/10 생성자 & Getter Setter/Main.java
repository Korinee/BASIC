public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// 생성자 파라미터(매개변수)에 맞게 인자를 삽입해준다.
//		User user = new User("박경민", 21, "프로그래밍");	// 클래스 생성
		
		
		User user = new User();
 		user.setName("코린이");
		
		System.out.println(user.name);
//		System.out.println(user.age);
//		System.out.println(user.hobby);
	}

}
