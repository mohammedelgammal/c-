#ifndef PAIR_HPP
#define PAIR_HPP

template <typename Key, typename Val>

class Pair
{
public:
    Pair(const Key key, const Val value);
    Key getKey() const;
    Val getValue() const;

private:
    Key key;
    Val value;
};

template <typename Key, typename Val>
Pair<Key, Val>::Pair(const Key key, const Val value) : key{key}, value{value} {}

template <typename Key, typename Val>
Key Pair<Key, Val>::getKey() const
{
    return this->key;
}

template <typename Key, typename Val>
Val Pair<Key, Val>::getValue() const
{
    return this->value;
}

#endif // PAIR_HPP