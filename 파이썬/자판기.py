class Zapangi:
 
    def __init__(self):
        self.p = {'콜라':500, '사이다':400, '환타':600}
        self.n = {1:'콜라', 2:'사이다', 3:'환타'}
        self.money = 0      
 
    def showmenu(self):
        print('[메뉴정보]')
        i = 1
        for k, v in self.p.items():
            print(str(i)+'.', k, v, '원')
            i+=1
        print()
 
 
    def inputmoney(self):
        while True:
            try:
                self.money += int( input('돈 투입:') )
            except Exception as e:
                print(e)
                continue
            else:
                print('투입금액:', self.money)
                print()
                break
 
 
    def buy(self):
        try:
            n = int(input('번호선택(종료:0):'))
        except Exception as e:
            print(e)
        else:
            if n == 0:
                return False       
 
            if n>=1 and n<=3:
 
                if self.money >= self.p[ self.n[n] ]:
                    print( self.n[n], '구입완료' )
                    self.money = self.money - self.p[ self.n[n] ]
                    print('잔액:', self.money)
                else:
                    print('잔액부족')
                    self.inputmoney()
               
            else:
                print('잘못된 번호')
 
        return True
 
 
z = Zapangi()
z.showmenu()
z.inputmoney()
 
while z.buy():    
    print()
 
print('자판기 종료')
print('반환 : ', z.money, '원')
