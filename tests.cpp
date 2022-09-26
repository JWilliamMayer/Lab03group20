// tests.cpp
#include "Card.h"
#include "PersonWithObjects.h"
#include "DeckWithObjects.h"
#include "GameWithObjects.h"
#include "PersonWithPointers.h"
#include "DeckWithPointers.h"
#include "GameWithPointers.h"
#include "PersonWithSmartPointers.h"
#include "DeckWithSmartPointers.h"
#include "GameWithSmartPointers.h"
#include <gtest/gtest.h>


		
 		TEST(GameWithObjects,DrawPower)
		{
			PersonWithObjects p("Test");
			Card c = Card(1,2);
			
			bool success = p.AddCardToHand(std::move(c));

			EXPECT_TRUE(success);
		}
		//This test makes sure that cards can move from the deck to player hand
		
		TEST(DeckWithObjects,FiveAces)
		{
			DeckWithObjects stack;
			Card c = Card(1,1);
			while(!stack.empty()) {
				stack.DrawCard();
				c=move(c);
				ASSERT_FALSE(move(c).GetSuit>=4)
			}
		}
		//This test is designed to make sure that the deck doesn't create more than four suits
		TEST(DeckWithObjects,RightValue)
		{
			DeckWithObjects stack;
			Card c = Card(1,1);
			while(!stack.empty()) {
				stack.DrawCard();
				c=move(c);
				ASSERT_FALSE(move(c).GetValue>=13)
			}
			~stack;
		}
		//This test is designed to make sure the deck doesnt create cards of higher value than 13(King)
		TEST(PersonWithObjects, Discard) {
			PersonWithObjects Larry;
			Card c=Card(1,2);
			Card d=Card(1,4);
			Card e=Card(1,6);
			Larry.AddCardToHand(c);
			Larry.AddCardToHand(d);
			Larry.AddCardToHand(e);
			Larry.RemoveCardFromHand();
			ASSERT_FALSE(Larry.peek()=e)
		}
		//This test makes sure that the player discards properly 
		TEST(DeckWithPointers,DuplicateCard) {
			DeckWithPointers stack;
			Card c=Card(1,1);
			Card copy=Card(2,2);
			c=stack.DrawCard();
			while(!stack.empty()) {
				stack.DrawCard();
				copy=retVal; 
				ASSERT_FALSE(copy=c);
			}
		}
		//This test ensures no duplicate cards are created in a deck 
		TEST(GameWithPointers, TheBoot) {
			GameWithPointers tester;
			delete m_p3;
			ASSERT_FALSE(m_p3.GetName()="Dewey 3")
		}
		//this test sees if you can remove a player from a game correctly
		TEST(PersonWithPointers, )
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
