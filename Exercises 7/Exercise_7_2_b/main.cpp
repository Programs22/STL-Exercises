#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter how many players are playing in the game" << endl;
    cin >> n;
    while(52%n!=0){
        cout << "This amount of people are not allowed to play, enter a new number of players" << endl;
        cin >> n;
    }
    int array[52];
    for(int i=0;i<52;i++)
        array[i]=i;
    vector<int> Deck(array,array+52); // Numbers from 0-12 indicate cards A-K of hearts, numbers 13-25 indicate cards A-K of diamonds, numbers 26-38 indicate cards A-K of clubs, numbers 39-51 indicate cards A-K of spades
    random_shuffle(Deck.begin(),Deck.end());
    vector<int>::const_iterator Iterator=Deck.begin();
    cout << "The shuffled deck is:" << endl;
    while(Iterator!=Deck.end()){
        if(*Iterator>=0&&*Iterator<=12){
            switch(*Iterator){
            case 0: cout << "Ace of Hearts" << endl; break;
            case 1: cout << "Two of Hearts" << endl; break;
            case 2: cout << "Three of Hearts" << endl; break;
            case 3: cout << "Four of Hearts" << endl; break;
            case 4: cout << "Five of Hearts" << endl; break;
            case 5: cout << "Six of Hearts" << endl; break;
            case 6: cout << "Seven of Hearts" << endl; break;
            case 7: cout << "Eight of Hearts" << endl; break;
            case 8: cout << "Nine of Hearts" << endl; break;
            case 9: cout << "Ten of Hearts" << endl; break;
            case 10: cout << "Jack of Hearts" << endl; break;
            case 11: cout << "Queen of Hearts" << endl; break;
            case 12: cout << "King of Hearts" << endl; break;
            }
        }
        else if(*Iterator>=13&&*Iterator<=25){
            switch(*Iterator){
            case 13: cout << "Ace of Diamonds" << endl; break;
            case 14: cout << "Two of Diamonds" << endl; break;
            case 15: cout << "Three of Diamonds" << endl; break;
            case 16: cout << "Four of Diamonds" << endl; break;
            case 17: cout << "Five of Diamonds" << endl; break;
            case 18: cout << "Six of Diamonds" << endl; break;
            case 19: cout << "Seven of Diamonds" << endl; break;
            case 20: cout << "Eight of Diamonds" << endl; break;
            case 21: cout << "Nine of Diamonds" << endl; break;
            case 22: cout << "Ten of Diamonds" << endl; break;
            case 23: cout << "Jack of Diamonds" << endl; break;
            case 24: cout << "Queen of Diamonds" << endl; break;
            case 25: cout << "King of Diamonds" << endl; break;
            }
        }
        else if(*Iterator>=26&&*Iterator<=38){
            switch(*Iterator){
            case 26: cout << "Ace of Clubs" << endl; break;
            case 27: cout << "Two of Clubs" << endl; break;
            case 28: cout << "Three of Clubs" << endl; break;
            case 29: cout << "Four of Clubs" << endl; break;
            case 30: cout << "Five of Clubs" << endl; break;
            case 31: cout << "Six of Clubs" << endl; break;
            case 32: cout << "Seven of Clubs" << endl; break;
            case 33: cout << "Eight of Clubs" << endl; break;
            case 34: cout << "Nine of Clubs" << endl; break;
            case 35: cout << "Ten of Clubs" << endl; break;
            case 36: cout << "Jack of Clubs" << endl; break;
            case 37: cout << "Queen of Clubs" << endl; break;
            case 38: cout << "King of Clubs" << endl; break;
            }
        }
        else{
            switch(*Iterator){
            case 39: cout << "Ace of Spades" << endl; break;
            case 40: cout << "Two of Spades" << endl; break;
            case 41: cout << "Three of Spades" << endl; break;
            case 42: cout << "Four of Spades" << endl; break;
            case 43: cout << "Five of Spades" << endl; break;
            case 44: cout << "Six of Spades" << endl; break;
            case 45: cout << "Seven of Spades" << endl; break;
            case 46: cout << "Eight of Spades" << endl; break;
            case 47: cout << "Nine of Spades" << endl; break;
            case 48: cout << "Ten of Spades" << endl; break;
            case 49: cout << "Jack of Spades" << endl; break;
            case 50: cout << "Queen of Spades" << endl; break;
            case 51: cout << "King of Spades" << endl; break;
            }
        }
        Iterator++;
    }
    int CardsPerPlayer=52/n;
    int cards[CardsPerPlayer];
    int sum;
    int max=0;
    int winner=0;
    Iterator=Deck.begin();
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=0;j<CardsPerPlayer;j++){
            cards[j]=*Iterator;
            Iterator++;
        }
        cout << "Information about the hand of the player" << endl;
        for(int j=0;j<CardsPerPlayer;j++){
            switch(cards[j]){
            case 0: cout << "Ace of Hearts" << endl; break;
            case 1: cout << "Two of Hearts" << endl; break;
            case 2: cout << "Three of Hearts" << endl; break;
            case 3: cout << "Four of Hearts" << endl; break;
            case 4: cout << "Five of Hearts" << endl; break;
            case 5: cout << "Six of Hearts" << endl; break;
            case 6: cout << "Seven of Hearts" << endl; break;
            case 7: cout << "Eight of Hearts" << endl; break;
            case 8: cout << "Nine of Hearts" << endl; break;
            case 9: cout << "Ten of Hearts" << endl; break;
            case 10: cout << "Jack of Hearts" << endl; break;
            case 11: cout << "Queen of Hearts" << endl; break;
            case 12: cout << "King of Hearts" << endl; break;
            case 13: cout << "Ace of Diamonds" << endl; break;
            case 14: cout << "Two of Diamonds" << endl; break;
            case 15: cout << "Three of Diamonds" << endl; break;
            case 16: cout << "Four of Diamonds" << endl; break;
            case 17: cout << "Five of Diamonds" << endl; break;
            case 18: cout << "Six of Diamonds" << endl; break;
            case 19: cout << "Seven of Diamonds" << endl; break;
            case 20: cout << "Eight of Diamonds" << endl; break;
            case 21: cout << "Nine of Diamonds" << endl; break;
            case 22: cout << "Ten of Diamonds" << endl; break;
            case 23: cout << "Jack of Diamonds" << endl; break;
            case 24: cout << "Queen of Diamonds" << endl; break;
            case 25: cout << "King of Diamonds" << endl; break;
            case 26: cout << "Ace of Clubs" << endl; break;
            case 27: cout << "Two of Clubs" << endl; break;
            case 28: cout << "Three of Clubs" << endl; break;
            case 29: cout << "Four of Clubs" << endl; break;
            case 30: cout << "Five of Clubs" << endl; break;
            case 31: cout << "Six of Clubs" << endl; break;
            case 32: cout << "Seven of Clubs" << endl; break;
            case 33: cout << "Eight of Clubs" << endl; break;
            case 34: cout << "Nine of Clubs" << endl; break;
            case 35: cout << "Ten of Clubs" << endl; break;
            case 36: cout << "Jack of Clubs" << endl; break;
            case 37: cout << "Queen of Clubs" << endl; break;
            case 38: cout << "King of Clubs" << endl; break;
            case 39: cout << "Ace of Spades" << endl; break;
            case 40: cout << "Two of Spades" << endl; break;
            case 41: cout << "Three of Spades" << endl; break;
            case 42: cout << "Four of Spades" << endl; break;
            case 43: cout << "Five of Spades" << endl; break;
            case 44: cout << "Six of Spades" << endl; break;
            case 45: cout << "Seven of Spades" << endl; break;
            case 46: cout << "Eight of Spades" << endl; break;
            case 47: cout << "Nine of Spades" << endl; break;
            case 48: cout << "Ten of Spades" << endl; break;
            case 49: cout << "Jack of Spades" << endl; break;
            case 50: cout << "Queen of Spades" << endl; break;
            case 51: cout << "King of Spades" << endl; break;
            }
        }
        for(int j=0;j<CardsPerPlayer;j++){
            switch(cards[j]){
            case 0: sum+=2; break;
            case 1: sum+=4; break;
            case 2: sum+=6; break;
            case 3: sum+=8; break;
            case 4: sum+=10; break;
            case 5: sum+=12; break;
            case 6: sum+=14; break;
            case 7: sum+=16; break;
            case 8: sum+=18; break;
            case 9: sum+=20; break;
            case 10: sum+=24; break;
            case 11: sum+=26; break;
            case 12: sum+=28; break;
            case 13: sum+=1; break;
            case 14: sum+=2; break;
            case 15: sum+=3; break;
            case 16: sum+=4; break;
            case 17: sum+=5; break;
            case 18: sum+=6; break;
            case 19: sum+=7; break;
            case 20: sum+=8; break;
            case 21: sum+=9; break;
            case 22: sum+=10; break;
            case 23: sum+=12; break;
            case 24: sum+=13; break;
            case 25: sum+=14; break;
            case 26: sum+=1; break;
            case 27: sum+=2; break;
            case 28: sum+=3; break;
            case 29: sum+=4; break;
            case 30: sum+=5; break;
            case 31: sum+=6; break;
            case 32: sum+=7; break;
            case 33: sum+=8; break;
            case 34: sum+=9; break;
            case 35: sum+=10; break;
            case 36: sum+=12; break;
            case 37: sum+=13; break;
            case 38: sum+=14; break;
            case 39: sum+=1; break;
            case 40: sum+=2; break;
            case 41: sum+=3; break;
            case 42: sum+=4; break;
            case 43: sum+=5; break;
            case 44: sum+=6; break;
            case 45: sum+=7; break;
            case 46: sum+=8; break;
            case 47: sum+=9; break;
            case 48: sum+=10; break;
            case 49: sum+=12; break;
            case 50: sum+=13; break;
            case 51: sum+=14; break;
            }
        }
        cout << "The value of the player's hand is: " << sum << endl;
        if(max<sum){
            max=sum;
            winner=i;
        }
    }
    cout << "The winning player is Player: " << winner << " with a winning hand of " << max << endl;
    return 0;
}
