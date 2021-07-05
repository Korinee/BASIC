# <연산자>
print(1+1)
print(3-2)
print(5*2)
print(6/3)
print(2**3) # 2의 3승
print(5%3) # 5 나누기 3의 나머지
print(5//3) # 5 나누기 3의 몫

print(10 > 3) # True
print(4 >= 7) # False
print(10 < 3) # False
print(5 <= 5) # True
print(3 == 3) # True
print(1 != 3) # True
print(not(1 != 3)) # False

print((3 > 0) and (3 < 5)) # True
print((3 > 0) & (3 < 5)) # True
print((3 > 0) or (3 > 5)) # True
print((3 > 0) | (3 > 5)) # True
print(5 > 4 > 3) # True
print(5 > 4 > 7) # False

# <간단한 수식>
print( 2 + 3 * 4)
print((2 + 3) * 4)
number = 2 + 3 * 4
print(number)
number = number + 2 # 16
print(number)
number += 2 # 18
print(number)
number *= 2 # 36
print(number)
number /= 2 # 18
print(number)

# <숫자 처리 함수>
print(abs(-5)) # 절댓값
print(pow(4, 2)) # 제곱
print(max(5, 12))
print(min(5, 12))
print(round(3.14))
print(round(4.99))

from math import *
print(floor(4.99)) # 내림. 4
print(ceil(3.14)) # 올림. 4
print(sqrt(16)) # 제곱근. 4

# <랜덤 함수>
from random import *
print(random()) # 0.0 ~ 1.0 미만의 임의의 값 생성
print(random() * 10) # 0.0 ~ 10.0 미만의 임의의 값 생성
print(int(random() * 10)) # 0 ~ 10 미만의 임의의 값 생성
print(int(random() * 10) + 1) # 1 ~ 10 이하의 임의의 값 생성
print(int(random() * 45) + 1) # 1 ~ 45 이하의 임의의 값 생성
print(randrange(1, 46)) # 1 ~ 45 이하의 임의의 값 생성
print(randint(1, 45)) # 1 ~ 45 이하의 임의의 값 생성

# 퀴즈 2
from random import *
day = randint(4,28)
print("오프라인 스터디 모임 날짜는 매월 " + str(day) + "일로 선정되었습니다.")
