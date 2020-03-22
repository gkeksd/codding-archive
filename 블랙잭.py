from random import randint
def card_deck():
       #sets the card types and values
       card_value = ['에이스','2','3','4','5','6','7','8','9','10','J','Q','K']
       card_type = ['하트','스페이드','클로버','다이아몬드']
       deck = []
       #This iterates all 52 cards into a deck
       for i in card_type:
           for j in card_value:
               deck.append(j + ' of ' + i)
       return deck

def card_value(card):
       #only reading first slice to determine value of the card
       if card[:1] in ('J','Q','K','1'):
           return int(10)
       elif card[:1] in ('2','3','4','5','6','7','8','9'):
           #card[:1] example '2' out of the full '2 of Hearts' string
           return int(card[:1])
       elif card[:1] == 'A':
           print ("\n"+ str(card))
           num = input("1과 11중 무엇으로 하시겠습니까?\n>")
           while num !='1' or num !='11':
               if num == '1':
                   return int(1)
               elif num == '11':
                   return int(11)
               else:
                   num = input("1과 11중 무엇으로 하시겠습니까?\n>")


def new_card(deck):
       return deck[randint(0,len(deck)-1)]

def remove_card(deck,card):
       return deck.remove(card)


play_again = ''
while play_again != 'EXIT':
       #deck creation, card creation, card removal from deck, values and totals
       new_deck = card_deck()
       card1 = new_card(new_deck)
       remove_card(new_deck,card1)
       card2 = new_card(new_deck)
       remove_card(new_deck,card2)
       print ("\n\n\n\n" + card1 + " and " + card2) #doing this statement first allows for selection between 1 and 11
       valu1 = card_value(card1)
       valu2 = card_value(card2)
       total = valu1 + valu2
       print("합계 " + str(total) )

       #dealer's hand
       dealer_card1 = new_card(new_deck)
       remove_card(new_deck,dealer_card1)
       dealer_card2 = new_card(new_deck)
       remove_card(new_deck,dealer_card2)
       dealer_value1 = card_value(dealer_card1)
       dealer_value2 = card_value(dealer_card1)
       dealer_total = dealer_value1 + dealer_value2
       print ('\n딜러가 당신을 보며 미소를 지으며 카드 한 장을 위로 하고 카드 한 장을 아래로 향하게 합니다.')
       print ("First a " + dealer_card1 + " and face down card.")

       if total == 21:
           print("Blackjack!")
       else:
           while total < 21: #not win or loss yet
               answer = input("히트 or 스탠드?\n> ")
               if answer.lower() == 'hit':
                   #more card creation, removal, and value added to total
                   more_card = new_card(new_deck)
                   remove_card(new_deck,more_card)
                   more_value = card_value(more_card)
                   total += int(more_value)
                   print (more_card + " 새로운 합계 " + str(total))
                   if total > 21: #lose condition
                       print("패배!")
                       play_again = input("계속하시겠습니까? EXIT를 눌러 나가십시오\n")
                   elif total == 21: #winning condition
                       print("You WIN BIG WIN WOO WOO")
                       play_again = input("계속하시겠습니까? EXIT를 눌러 나가십시오\n")
                   else:
                       continue
               elif answer.lower() == 'stand':
                   print("딜러가 고개를 끄덕이며 다른 카드를 드러냅니다. ")
                   print("a " + dealer_card2 + " for a total of " + str(dealer_total))
                   if dealer_total < 17:
                       print("딜러가 다시 히트를 했습니다.")
                       dealer_more = new_card(new_deck)
                       more_dealer_value = card_value(dealer_more)
                       print("카드는 " + str(dealer_more))
                       dealer_total += int(more_dealer_value)
                       if dealer_total > 21 and total <=21:
                           print("딜러 버스트! 당신의 승리입니다!")
                       elif dealer_total < 21 and dealer_total > total:
                           print("딜러는 " + str(dealer_total) + " 당신의 패배!")
                       else:
                           continue
                   elif dealer_total == total:
                       print("Equal Deals, no winner")
                   elif dealer_total < total:
                       print("You win!")
                   else:
                       print("You Lose!")
                   play_again = input("\n계속하시겠습니까? EXIT를 눌러 나가십시오\n")
                   break
print("플레이해 주셔서 감사합니다.")
