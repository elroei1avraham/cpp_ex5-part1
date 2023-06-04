#pragma once
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <set>
#include <cstdlib>
#include <type_traits>
#include <list>

using namespace std;
namespace ariel
{
}

class MagicalContainer
{
public:
    multiset<int> sortNumbers;
    vector<int *> primes;

    void addElement(int number);
    int size();
    void removeElement(int number);

    class AscendingIterator
    {
    private:
        MagicalContainer &container;

    public:
        AscendingIterator(MagicalContainer &container);
        AscendingIterator(const AscendingIterator &container);

        AscendingIterator(AscendingIterator &&container) noexcept = default;
        ~AscendingIterator() = default;

        AscendingIterator &operator=(const AscendingIterator &container);
        AscendingIterator &operator=(AscendingIterator &&container) noexcept;
        bool operator==(const AscendingIterator &container) const;
        bool operator!=(const AscendingIterator &container) const;
        int operator*();
        AscendingIterator &operator++();
        AscendingIterator &operator++(int number);
        bool operator>(AscendingIterator &container) const;
        bool operator<(AscendingIterator &container) const;

        AscendingIterator begin();
        AscendingIterator end();
    };

    class PrimeIterator
    {
    private:
        MagicalContainer &container;

    public:
        PrimeIterator(const PrimeIterator &container);
        PrimeIterator(MagicalContainer &container);
        PrimeIterator(PrimeIterator &&container) noexcept = default;
        ~PrimeIterator() = default;

        PrimeIterator &operator=(const PrimeIterator &container);
        PrimeIterator &operator=(PrimeIterator &&container) noexcept;
        bool operator==(const PrimeIterator &container) const;
        bool operator!=(const PrimeIterator &container) const;
        int operator*();
        PrimeIterator &operator++();
        PrimeIterator &operator++(int number);
        bool operator>(PrimeIterator &container) const;
        bool operator<(PrimeIterator &container) const;


        PrimeIterator begin();
        PrimeIterator end();
    };

    class SideCrossIterator
    {
    private:
        MagicalContainer &container;

    public:
        SideCrossIterator(const SideCrossIterator &container);
        SideCrossIterator(MagicalContainer &container);
        SideCrossIterator(SideCrossIterator &&container) noexcept = default;
        ~SideCrossIterator() = default;

        SideCrossIterator &operator=(const SideCrossIterator &container);
        SideCrossIterator &operator=(SideCrossIterator &&container) noexcept;
        bool operator==(const SideCrossIterator &container) const;
        bool operator!=(const SideCrossIterator &container) const;
        int operator*() const;
        SideCrossIterator &operator++();
        SideCrossIterator &operator++(int number);
        bool operator>(SideCrossIterator &container) const;
        bool operator<(SideCrossIterator &container) const;

        SideCrossIterator begin();
        SideCrossIterator end();
    };
};