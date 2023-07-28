class calculator:
    def __init__(self, first, second):
        self.first = first
        self.second = second
    def add(self):
        result = self.first + self.second
        return result
    def sub(self):
        result = self.first - self.second
        return result
    def mul(self):
        result = self.first * self.second
        return result
    def div(self):
        if self.second == 0:
            return 0
        else:
            result = self.first / self.second
            return result
class adcalc(calculator):
    def pow(self):
        return self.first ** self.second
    def rem(self):
        if self.second == 0:
            return 0
        else:
            result = self.first % self.second
            return result
    def quo(self):
        if self.second == 0:
            return 0
        else:
            result = self.first // self.second
            return result

num1 = int(input("첫 번째 숫자를 입력하세요: "))
num2 = int(input("두 번째 숫자를 입력하세요: "))

cal1 = calculator(num1, num2)
cal2 = adcalc(num1, num2)

work = input("수행하실 작업을 입력하세요(덧셈/뺄셈/곱셈/나눗셈/제곱/나머지/몫): ")
if work == '덧셈':
    print(cal1.add())
elif work == '뺄셈':
    print(cal1.sub())
elif work == '곱셈':
    print(cal1.mul())
elif work == '나눗셈':
    print(cal1.div())
elif work == '제곱':
    print(cal2.pow())
elif work == '나머지':
    print(cal2.rem())
elif work == '몫':
    print(cal2.quo())
else:
    print("계산기를 종료합니다.")