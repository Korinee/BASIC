# <숫자 자료형>
print(5)
print(-10)
print(3.14)
print(5+3)
print(3*(1+2))

# <문자 자료형>
print('풍선')
print('나비')
print("파이썬 "*9)

# <boolean 자료형 -> 참 / 거짓>
print(5 > 10)
print(5 < 10)
print(True)
print(False)
print(not True)
print(not (3 > 10))

# <변수>
animal = "강아지"
name = "연탄이"
age = 4
hobby = "산책"
is_adult = age >= 3

print("우리집 " + animal + "의 이름은 " + name + "입니다")
print(name + "는 " + str(age) + "살이고 " + hobby + "을 좋아해요")
print(name + "는 어른일까요? " + str(is_adult))
print(name, "는 어른일까요? ", is_adult)
# +대신 ,를 사용하면 str()을 사용할 필요가 없고 , 다음 단어는 띄어쓰기가 된다.

# <퀴즈 1>
station = "사당"
# station = "신도림"
# station = "인천공항"
print(station, "행 열차가 들어오고 있습니다.")
