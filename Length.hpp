#ifndef LENGTH_HPP
#define LENGTH_HPP

class Length
{
public:
    explicit Length(const int value);
    bool operator==(const Length &other) const;
    bool operator==(int other) const;
    bool operator!=(const Length &other) const;
    bool operator!=(int other) const;

private:
    int value = 0;
};

#endif