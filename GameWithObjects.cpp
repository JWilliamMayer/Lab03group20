
#include "GameWithObjects.h"
#include <iostream>


GameWithObjects::GameWithObjects(): m_p1("Huey 1"), m_p2("Louie 2"), m_p3("Dewey 3"), m_deck()
{

}

GameWithObjects::~GameWithObjects()
{
    std::cout<<"GameWithObjects Destructor Called"<<std::endl;	
}

void GameWithObjects::CheatingAdd(Card c)
{
    std::cout<<"I am cheating"<<std::endl;	
}

void GameWithObjects::RunCheatGame()
{
    Card card1Object = Card(11,1);

    CheatingAdd(card1Object);
    std::cout<<"End Calling AddCardToHandObject"<<std::endl;
    std::cout<<std::endl<<std::endl;
}

void GameWithObjects::RunGame()
{

    std::cout<<"Drawing Starting hands"<<std::endl;
    for (int i=0, int=4, i++) {
        m_p1.AddCardToHand(std::move(m_deck.DrawCard()));
        m_p2.AddCardToHand(std::move(m_deck.DrawCard()));
        m_p3.AddCardToHand(std::move(m_deck.DrawCard()));
    }
    m_p1.PrintOutHand()
    bool m1=true;
    std::string drawer=On;
    std::string pickcard;
    while (!m1=ending) {
        m_p1.PrintOutHand();
        if (count(m_p1.m_listofcards())<6 and drawer==On) {
            std::cout<<"Draw a card?"<<std::endl<<"Y or N"<<std::endl;
            cin>>drawer;
            if (drawer==Y) {
                m_p1.AddCardToHand(std::move(m_deck.DrawCard()));
            }
            else {
                drawer=Off;
            }
        }
        std::cout<<"what would you like to do? "<<std::endl;
        std::cout<<"End Turn   true or false"<<std::endl;
        cin>>m1
        m_p1.PrintOutHand();
        std::cout<<" place down a card?"std::endl;
        cin>>pickcard;
        while (int i=0, i=count(m_p1.m_listofcards), i++) {
            if (pickcard==m_listofcards[i]) {
                
            }
        }

        

    }
    std::cout<<"Calling AddCardToHandObject"<<std::endl;
    m_p1.AddCardToHand(std::move(card1Object));
    std::cout<<"End Calling AddCardToHandObject"<<std::endl;
    std::cout<<std::endl<<std::endl;

    std::cout<<"Start Drawing Cards"<<std::endl;
    std::cout<<"Drawing Cards 1"<<std::endl;
    m_p1.AddCardToHand(std::move(m_deck.DrawCard()));
    std::cout<<"Drawing Cards 2"<<std::endl;
    m_p1.AddCardToHand(std::move(m_deck.DrawCard()));
    std::cout<<"Drawing Cards 3"<<std::endl;
    m_p2.AddCardToHand(std::move(m_deck.DrawCard()));
    std::cout<<"Drawing Cards 4"<<std::endl;
    m_p2.AddCardToHand(std::move(m_deck.DrawCard()));
    std::cout<<"Drawing Cards 5"<<std::endl;
    m_p3.AddCardToHand(std::move(m_deck.DrawCard()));
    std::cout<<"Drawing Cards 6"<<std::endl;
    m_p3.AddCardToHand(std::move(m_deck.DrawCard()));

    std::cout << "P1 Player::PrintOutHand" << std::endl;
    m_p1.PrintOutHand();
    std::cout << "P2 Player::PrintOutHand" << std::endl;
    m_p2.PrintOutHand();
    std::cout << "P4 Player::PrintOutHand" << std::endl;
    m_p3.PrintOutHand();
    std::cout << "End Player::PrintOutHand" << std::endl;

    std::cout << "PrintDeck" << std::endl;
    m_deck.PrintDeck();

    m_deck.ReturnCard(std::move(m_p1.RemoveCardFromHand()));
    m_deck.ReturnCard(std::move(m_p1.RemoveCardFromHand()));

    m_deck.ReturnCard(std::move(m_p2.RemoveCardFromHand()));
    m_deck.ReturnCard(std::move(m_p3.RemoveCardFromHand()));



}

