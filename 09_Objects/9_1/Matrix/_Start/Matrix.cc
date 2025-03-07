#include <iostream>

#include "Matrix.h"

//Constructor
Matrix::Matrix() : m_A(0.0), m_B(0.0), m_C(0.0), m_D(0.0)
{
    std::cout << "Default Matrix generated." << std::endl;
}

Matrix::Matrix(const double &A, const double &B, const double &C, const double &D) : m_A(A), m_B(B), m_C(C), m_D(D)
{
    std::cout << "Matrix generated." << std::endl;
}


void Matrix::print_matrix() const
{
    std::cout << "Matrix A-B-C-D: " << std::endl;
    std::cout << m_A << ", " << m_B << std::endl;
    std::cout << m_C << ", " << m_D << std::endl;
}

double Matrix::get_A() const
{
    return m_A;
}

double Matrix::get_B() const
{
    return m_B;
}

double Matrix::get_C() const
{
    return m_C;
}

double Matrix::get_D() const
{
    return m_D;
}

void Matrix::set_A(const double &new_A)
{
    m_A = new_A;
}

void Matrix::set_B(const double &new_B)
{
    m_A = new_B;
}

void Matrix::set_C(const double &new_C)
{
    m_A = new_C;
}

void Matrix::set_D(const double &new_D)
{
    m_A = new_D;
}
