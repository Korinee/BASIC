
public class User {
	
	String name;	// 이름
	int age;		// 나이
	String hobby;	// 취미
	
	// 클래스 생성자
//	public User (String _name, int _age, String _hobby) {
//		this.name = _name;
//		this.age = _age;
//		this.hobby = _hobby;
//	}
	
	// 디폴트 생성자
	public User() {
		
	}
	
	//
	public User (String name, int age, String hobby) {
		this.name = name;
		this.age = age;
		this.hobby = hobby;
	}
	
	//
	public User(String name, int age) {
		this.name = name;
		this.age = age;
	}
	
	// 게터 세터 영역
	public String getName() {
		return name;
	}
	
	//
	public void setName(String name) {
		this.name = name;
	}
	
	//
	public int getAge() {
		return age;
	}
	
	//
	public void setAge(int age) {
		this.age = age;
	}
	
	//
	public String getHobby() {
		return hobby;
	}
	
	//
	public void setHobby(String hobby) {
		this.hobby = hobby;
	}
	
}
