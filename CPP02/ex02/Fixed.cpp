#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default Ctor is called" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int Ctor called" << std::endl;
    long long temp = value << fractional_bits;
    if (temp > INT_MAX)
        temp = INT_MAX;
    else if (temp < INT_MIN)
        temp = INT_MIN;
    fixed_point_value = temp;
}

Fixed::Fixed(float	value) {
    std::cout << "Float Ctor called" << std::endl;
    long long temp = roundf(value * (1 << fractional_bits));
    if (temp > INT_MAX)
        temp = INT_MAX;
    else if (temp < INT_MIN)
        temp = INT_MIN;
    fixed_point_value = temp;
}

Fixed::Fixed(const Fixed& other) : fixed_point_value(other.fixed_point_value) {
    std::cout << "Copy Ctor is called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment is called" << std::endl;
    if (this == &other)
        return (*this);
    this->fixed_point_value = other.getRawBits();
    return (*this);
}

void Fixed::setRawBits( int const raw ) {
    //std::cout << "SetRawBits is called" << std::endl;
    fixed_point_value = raw;
}
int Fixed::getRawBits( void ) const {
    //std::cout << "GetRawBits is called" << std::endl;
    return (fixed_point_value);
}

float Fixed::toFloat( void ) const {
    return (static_cast<float>(this->fixed_point_value) / (1 << this->fractional_bits));
}

int Fixed::toInt( void ) const {
    return (this->fixed_point_value >> this->fractional_bits);
}

Fixed::~Fixed() {
    std::cout << "Dtor is called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}


bool Fixed::operator>(const Fixed& other) const {
    return (this->fixed_point_value > other.fixed_point_value);
}

bool Fixed::operator>=(const Fixed& other) const {
    return (this->fixed_point_value >= other.fixed_point_value);
}

bool Fixed::operator<(const Fixed& other) const {
    return (this->fixed_point_value < other.fixed_point_value);
}

bool Fixed::operator<=(const Fixed& other) const {
    return (this->fixed_point_value <= other.fixed_point_value);
}

bool Fixed::operator==(const Fixed& other) const {
    return (this->fixed_point_value == other.fixed_point_value);
}

bool Fixed::operator!=(const Fixed& other) const {
    return (this->fixed_point_value != other.fixed_point_value);
}

const Fixed Fixed::operator+(const Fixed& other) const {
    Fixed res(this->toFloat() + other.toFloat());
    return (res);
}

const Fixed Fixed::operator-(const Fixed& other) const {
    Fixed res(this->toFloat() - other.toFloat());
    return (res);
}

const Fixed Fixed::operator*(const Fixed& other) const {
    Fixed res(this->toFloat() * other.toFloat());
    return (res);
}

const Fixed Fixed::operator/(const Fixed& other) const {
    Fixed res(this->toFloat() / other.toFloat());
    return (res);
}

const Fixed& Fixed::operator++() {
    fixed_point_value++;
    return (*this);
}

const Fixed Fixed::operator++(int) {
    Fixed   temp;

    temp = *this;
    this->fixed_point_value++;
    return (temp);
}


const Fixed& Fixed::operator--() {
    float num = this->toFloat();
    num--;
    this->fixed_point_value = roundf(num * (1 << this->fractional_bits));
    return (*this);
}

const Fixed Fixed::operator--(int) {
    Fixed   temp;

    temp = *this;
    this->fixed_point_value--;
    return (temp);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2) {
    return (f1 < f2 ? f1 : f2);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2) {
    const Fixed& f1_copy = static_cast<const Fixed&>(f1);
    const Fixed& f2_copy = static_cast<const Fixed&>(f2);
    Fixed& res = const_cast<Fixed&>(Fixed::min(f1_copy, f2_copy));
    return (res);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2) {
    return (const_cast<Fixed&>(Fixed::max(static_cast<const Fixed&>(f1), static_cast<const Fixed&>(f2))));
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2) {
    return (f1 > f2 ? f1 : f2);
}