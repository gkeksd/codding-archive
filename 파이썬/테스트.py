class vending_machine:
    def __init__(self):
        self.money = 0

    def menushow(self):
        print('[메뉴목록]\n 1.콜라 800원 \n 2.사이다 700원 \n 3.비락식혜 1100원\n')
    def inputmoney(self):
        while True:
            self.money = int(input("당신이 현재 가진 돈은?: "))
            if self.money == 0:
                continue
            else:
                pass
            break

    @property
    def buy(self):
        try:
            n: int = int(input('번호선택(종료:0):'))
        except Exception as e:
            print(e)
        else:
            if n == 0:
                return False

            elif n == 1:
                if self.money < 800:
                    print("잔액이 부족합니다")
                    self.inputmoney()
                else:
                    print("콜라 구입완료. 남은돈은", self.money - 800, "원입니다.")
                    self.money -= 800
            elif n == 2:
                if self.money < 700:
                    print("잔액이 부족합니다")
                    self.inputmoney()
                else:
                    print("사이다 구입완료. 남은돈은", self.money - 700, "원입니다.")
                    self.money -= 700
            elif n == 3:
                if self.money < 1100:
                    print("잔액이 부족합니다")
                    self.inputmoney()
                else:
                    print("비락식혜 구입완료. 남은돈은", self.money - 1100, "원입니다.")
                    self.money -= 1100
            else:
                print('다시 번호를 선택해 주세요')
        return True


a = vending_machine()
a.menushow()
a.inputmoney()

while a.buy:
    print()

print('자판기 종료')
print('반환 : ', a.money, '원')
