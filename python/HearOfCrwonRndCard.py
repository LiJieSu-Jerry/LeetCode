import random

cost2=['18','19','20','36','43','49','62','63']
cost3=['21','22','23','24','25','37','44','45','50','51','52','53','64','65','66']
cost4=['26','27','28','29','30','31','38','39','40','54','56','57','58','67','68','69']
cost5=['32','34','35','41','42','59','60','70','71','72']
cost6=['47','73','74']


def selectCard():
	slot=[]

	first2c=random.choice(cost2)
	first3c=random.choice(cost3)
	first4c=random.choice(cost4)
	first5c=random.choice(cost5)

	slot.append(first2c)
	slot.append(first3c)
	slot.append(first4c)
	slot.append(first5c)

	cost2and3=random.randint(0,3)
	cost5and6=random.randint(0,4)

	cardsOfC4=10-(cost2and3+cost5and6+4)

	if cardsOfC4>0:
		for i in range(cardsOfC4):
			slot.append(random.choice(cost4))

	a=cost2+cost3
	for i in range(cost2and3):
		slot.append(random.choice(a))
	b=cost5+cost6

	if cost5and6==4:
		slot.append(random.choice(cost6))
		slot.append(random.choice(cost6))
		slot.append(random.choice(cost5))
		slot.append(random.choice(cost5))
	else:
		for i in range(cost5and6):
			slot.append(random.choice(b))
	newStr=""
	for i in range(10):
		newStr+="|"
		newStr+=slot[i]
	return newStr
def makeDoc():
	firstTwoLine='''SupplyDataBase|||||||||||
ID|Name|Card1|Card2|Card3|Card4|Card5|Card6|Card7|Card8|Card9|Card10\n'''
	for i in range(1,100):
		num=str(i)
		newLine=num+"|Deck"+num+selectCard()+"\n"
		firstTwoLine+=newLine
	return firstTwoLine

with open("SupplyDataBase.csv","w") as f:
	f.write(makeDoc())