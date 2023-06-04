#include <iostream>
#include <stdexcept>
#include <sstream>
#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("check container addElement size and removeElement functions")
{
    MagicalContainer container;
    CHECK(container.size()==0);
    container.addElement(17);
    CHECK(container.size()==1);
    container.addElement(12);
    container.addElement(8);
    CHECK(container.size()==3);
    CHECK_NOTHROW(container.removeElement(8));
    CHECK(container.size()==2);
    CHECK_THROWS(container.removeElement(1));
}

TEST_CASE("throw when remove from empty container")
{
    MagicalContainer container;
    CHECK(container.size() == 0);
    CHECK_THROWS(container.removeElement(1));
}

TEST_CASE("check AscendingIterator ")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);

    MagicalContainer::AscendingIterator itr(container);
    CHECK(*itr == *(itr.begin()));
    CHECK(*itr++ == 1);
    CHECK(*itr++ == 2);
    itr++;
    itr++;
    CHECK(*itr == *(itr.end()));
    CHECK_THROWS(++itr);
}

TEST_CASE("check operators between three AscendingIterator")
{
    MagicalContainer container;
    MagicalContainer containerSecond;

    container.addElement(10);
    containerSecond.addElement(2);
    container.addElement(5);
    containerSecond.addElement(24);
    container.addElement(20);
    containerSecond.addElement(30);
    container.addElement(3);
    containerSecond.addElement(10);
    container.addElement(25);
    containerSecond.addElement(15);

    CHECK(container.size()==5);
    CHECK(containerSecond.size()==5);

    MagicalContainer::AscendingIterator ascenItr1(container);
    MagicalContainer::AscendingIterator ascenItr2(containerSecond); 
    MagicalContainer::AscendingIterator ascenItr3(ascenItr1);

    CHECK((ascenItr1 != ascenItr2));
    CHECK((*ascenItr1.begin() != *ascenItr3.begin()));

    CHECK(*ascenItr1 == 3);
    CHECK(*ascenItr2 == 2);
    CHECK(*ascenItr3 == 3);

    container.addElement(1);

    CHECK(*ascenItr1.begin() == 1);
}

TEST_CASE("check operators between three SideCrossIterator")
{
    MagicalContainer container;
    MagicalContainer containerSecond;

    container.addElement(10);
    containerSecond.addElement(2);
    container.addElement(5);
    containerSecond.addElement(7);
    container.addElement(17);
    containerSecond.addElement(30);
    container.addElement(3);
    containerSecond.addElement(13);
    container.addElement(25);
    containerSecond.addElement(15);

    MagicalContainer::SideCrossIterator SideCrossIter1(container);
    MagicalContainer::SideCrossIterator SideCrossIter2(containerSecond); 
    MagicalContainer::SideCrossIterator SideCrossIter3(SideCrossIter1);

    CHECK((SideCrossIter1 != SideCrossIter2));
    CHECK((*SideCrossIter1.begin() != *SideCrossIter3.begin()));

    CHECK(*SideCrossIter1++ == 3);
    CHECK(*SideCrossIter1++ == 25);
    CHECK(*SideCrossIter1 == 5);
    CHECK(*SideCrossIter2++ == 2);
    CHECK(*SideCrossIter2++ == 30);
    CHECK(*SideCrossIter2 == 7);

    container.addElement(1);

    CHECK(*SideCrossIter1.begin() == 1);   
}

TEST_CASE("check operators between three PrimeIterator")
{
    MagicalContainer container;
    MagicalContainer containerSecond;

    container.addElement(10);
    containerSecond.addElement(2);
    container.addElement(5);
    containerSecond.addElement(7);
    container.addElement(17);
    containerSecond.addElement(30);
    container.addElement(3);
    containerSecond.addElement(13);
    container.addElement(25);
    containerSecond.addElement(15);

    MagicalContainer::PrimeIterator primItr1(container);
    MagicalContainer::PrimeIterator primItr2(containerSecond); 
    MagicalContainer::PrimeIterator primItr3(primItr1);

    CHECK((primItr1 != primItr2));
    CHECK((*primItr1.begin() != *primItr3.begin()));

    CHECK(*primItr1 == 3);
    *primItr1++;
    CHECK(*primItr1++ == 5);
    CHECK(*primItr1 == 17);
    CHECK(*primItr2++ == 2);
    CHECK(*primItr2++ == 7);
    CHECK(*primItr2 == 13);

    container.addElement(1);

    CHECK(*primItr1.begin() == 1);
}

TEST_CASE("check the function == < <= > >=")
{
    // Fraction b(0.5);
    // Fraction c(7,14);
    // CHECK((b == c) == true);
    // b = b + 0.1;
    // CHECK((b > 0.5) == true);
    // CHECK((b == 0.6) == false);
    // CHECK((c <= 0.9) == true);
    // Fraction add(Fraction(1,10)+0.2);
    // CHECK((add == Fraction(0.3))==true);
    // CHECK((b>=add) == true);
    // CHECK((b < add) == false);
}

TEST_CASE("check the function + - ++ --")
{
    // CHECK(Fraction(9,10)-Fraction(1,10)==Fraction(8,10));
    // CHECK(Fraction(9,10)-Fraction(0.1)==Fraction(8,10));
    // CHECK(Fraction(9,10)+Fraction(1,10)==Fraction(1,1));
    // CHECK(Fraction(9,10)++==Fraction(19,10));
    // CHECK(Fraction(19,10)--==Fraction(9,10));
}

TEST_CASE("check the function / and *")
{
    // CHECK(Fraction(9,10)*Fraction(0.1)==Fraction(9,100));
    // CHECK(Fraction(9,10)*Fraction(1,10)==Fraction(9,100));
    // CHECK(Fraction(0.9)*Fraction(0.1)==Fraction(9,100));
    // CHECK(Fraction(0.1)*Fraction(9,10)==Fraction(9,100));
    // CHECK(Fraction(1,1)/Fraction(0.1)==Fraction(10,1));
    // CHECK(Fraction(1)/Fraction(0.1)==Fraction(10,1));
    // CHECK(Fraction(1,1)/Fraction(1,10)==Fraction(10,1));
    // CHECK(Fraction(0.1)/Fraction(1,1)==Fraction(1,10));
    // CHECK_THROWS(Fraction(1,1)/Fraction(0));
}