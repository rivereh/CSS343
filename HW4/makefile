main: main.o item.o coin.o card.o comic.o customer.o customermanager.o inventory.o
	g++ main.o item.o coin.o card.o comic.o customer.o customermanager.o inventory.o -o main

main.o: main.cpp
	g++ -c main.cpp

item.o: item.cpp
	g++ -c item.cpp

coin.o: coin.cpp
	g++ -c coin.cpp

card.o: card.cpp
	g++ -c card.cpp

comic.o: comic.cpp
	g++ -c comic.cpp

customer.o: customer.cpp
	g++ -c customer.cpp

customermanager.o: customermanager.cpp
	g++ -c customermanager.cpp

inventory.o: inventory.cpp
	g++ -c inventory.cpp

clean:
	rm *.o