# <문자열>
sentence = '나는 소년입니다'
print(sentence)
sentence2 = "파이썬은 쉬워요"
print(sentence2)
sentence3 = """
나는 소년이고,
파이썬은 쉬워요
"""
print(sentence3)

# <슬라이싱>
jumin = "123456-1234567"
print("성별 : " + jumin[7])
print("연 : " + jumin[0:2]) # 0부터 2직전까지
print("월 : " + jumin[2:4])
print("일 : " + jumin[4:6])
print("생년월일 : " + jumin[:6]) # 처음부터 6 직전까지
print("뒤 7자리 : " + jumin[7:]) # 7부터 끝까지
print("뒤 7자리 (뒤에부터) : " + jumin[-7:]) 

# <문자열 처리 함수>
python = "Python is Amazing"
print(python.lower()) # 모든 알파벳을 소문자로
print(python.upper()) # 모든 알파벳을 대문자로
print(python[0].isupper())  # 0번째 문자가 대문자인가? -> 참
print(len(python))
print(python.replace("Python", "Java"))

index = python.index("n")
print(index)
index = python.index("n", index + 1)
print(index)

print(python.find("Java")) # java는 포함되어있지 않으므로 -1반환
# print(python.index("Java")) # java는 포함되어있지 않으므로 오류
print(python.count("n"))

# <문자열 포맷>
print("a" + "b")
print("a", "b")

# 방법1
print("나는 %d살입니다." % 20)
print("나는 %s을 좋아해요." % "파이썬")
print("Apple 은 %c로 시작해요." % "A")
print("나는 %s색과 %s색을 좋아해요." % ("파란", "빨간"))

# 방법2
print("나는 {}살입니다." .format(20))
print("나는 {}색과 {}색을 좋아해요." .format("파란", "빨간"))
print("나는 {0}색과 {1}색을 좋아해요." .format("파란", "빨간"))
print("나는 {1}색과 {0}색을 좋아해요." .format("파란", "빨간"))

# 방법3
print("나는 {age}살이며, {color}색을 좋아해요." .format(age = 20, color = "빨간"))
print("나는 {age}살이며, {color}색을 좋아해요." .format(color = "빨간", age = 20))

# 방법4
age1 = 20
color1 = "빨간"
print(f"나는 {age1}살이며, {color1}색을 좋아해요.")

# <탈출 문자>
print("백문이 불여일견\n 백견이 불여일타") # \n : 줄바꿈
print('저는 "나도코딩"입니다.')
print("저는 \"나도코딩\"입니다.") # \" \' : 문장 내에서 따옴표 출력 가능
print("c:\\Users\\박경민\\Desktop\\Python") # \\ : 문장 내에서 \로 출력
print("Red Apple\rPine") # \r : 커서를 맨 앞으로 이동
print("Redd\bApple") # \b : 백스페이스 (한 글자 삭제)
print("Red\tApple") # \t : 탭

# 퀴즈 3
url = "http://naver.com"
index = url.index(".")
le = url[7:index]
pw = url[7:10] + str(len(le)) + str(url.count("e")) +"!"
print("생성된 비밀번호 : " + pw)

'''
# 동영상 풀이
url = "http://naver.com"
my_str = url.replace("http://", "") # 규칙 1
my_str = my_str[:my_str.index(".")]
password = my_str[:3] + str(len(my_str)) + str(my_str.count("e")) = "!"
print("{0}의 비밀번호는 {1} 입니다." .format(url, password))
'''
