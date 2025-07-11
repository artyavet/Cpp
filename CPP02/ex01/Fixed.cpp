#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Ctor is called" << std::endl;
    fixed_point_value = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int Ctor called" << std::endl;
    // this->fixed_point_value = value << this->fractional_bits;//<=>value * (1 << this->fractional_bits))
    long long temp = value << fractional_bits;
    std::cout <<"value = " << temp;
    if (temp > INT_MAX)
    {
        std::cout <<"mtan1\n";
        temp = INT_MAX;
    }
    else if (temp < INT_MIN)
        temp = INT_MIN;
    fixed_point_value = temp;
}

Fixed::Fixed(float	value)
{
    // this->fixed_point_value = roundf(value * (1 << this->fractional_bits));//roundf-i shnorhiv->Or. 44.6 = 45;  44.3 = 44;
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

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment is called" << std::endl;
    if (this == &other)
        return (*this);
    // this->fixed_point_value = other.getRawBits();//inchi chenq anum other.fixed_point_value
    this->fixed_point_value = other.fixed_point_value;
   
    return (*this);
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