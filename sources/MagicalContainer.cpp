#include "MagicalContainer.hpp"

void MagicalContainer::addElement(int number)
{
}

int MagicalContainer::size()
{
    return 1;
}

void MagicalContainer::removeElement(int number)
{
    
}

MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : container(container)
{
}

MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &container) : container(container.container)
{
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &container)
{
    return *this;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(AscendingIterator &&container) noexcept
{
    return *this;
}

bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &container) const
{
    return false;
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &container) const
{
    return false;
}

int MagicalContainer::AscendingIterator::operator*()
{
    return 1;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
{
    return *this;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++(int number)
{
    return *this;
}

bool MagicalContainer::AscendingIterator::operator>(AscendingIterator &container) const
{
    return false;
}

bool MagicalContainer::AscendingIterator::operator<(AscendingIterator &container) const
{
    return false;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{
    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    return *this;
}

MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &container) : container(container.container)
{
}

MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : container(container)
{
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &container)
{
    return *this;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(PrimeIterator &&container) noexcept
{
    return *this;
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &container) const
{
    return false;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &container) const
{
    return false;
}

int MagicalContainer::PrimeIterator::operator*()
{
    return 1;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
{
    return *this;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++(int number)
{
    return *this;
}

bool MagicalContainer::PrimeIterator::operator>(PrimeIterator &container) const
{
    return false;
}

bool MagicalContainer::PrimeIterator::operator<(PrimeIterator &container) const
{
    return false;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    return *this;
}

MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &container) : container(container.container)
{
}

MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : container(container)
{
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &container)
{
    return *this;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(SideCrossIterator &&container) noexcept
{
        return *this;
}

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &container) const
{
    return false;
}

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &container) const
{
    return false;
}

int MagicalContainer::SideCrossIterator::operator*() const
{
    return 1;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
{
    return *this;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++(int number)
{
    return *this;
}

bool MagicalContainer::SideCrossIterator::operator>(SideCrossIterator &container) const
{
    return false;
}

bool MagicalContainer::SideCrossIterator::operator<(SideCrossIterator &container) const
{
    return false;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    return *this;
}
