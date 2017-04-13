// Copyright 2017 Israfilov Marat

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Israfilov_Marat_ComplexNumberTest, Difference_Equal_Numbers_Gives_Zero) {
    // Arrange
    double re = 12.4;
    double im = -7.7;    
    ComplexNumber z2(0.0, 0.0);

    // Act
    ComplexNumber z(re, im);
    ComplexNumber z1(re, im);

    // Assert
    EXPECT_EQ(z - z1, z2);
}

TEST(Israfilov_Marat_ComplexNumberTest, Add_With_Zero_Does_Not_Change_Number) {
    // Arrange
    double re = 1.2;
    double im = 3.4;
    ComplexNumber z1(0.0, 0.0);

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(z + z1, z);
}

TEST(Israfilov_Marat_ComplexNumberTest, Multiplication_With_Zero_Gives_Zero) {
    // Arrange
    double re = 1.2;
    double im = 3.4;
    ComplexNumber z1(0.0, 0.0);

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(z * z1, z1);
}

TEST(Israfilov_Marat_ComplexNumberTest, Diff_With_Zero_Does_Not_Change_Number) {
    // Arrange
    double re = 1.2;
    double im = 3.4;
    ComplexNumber z1(0.0, 0.0);

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(z - z1, z);
}

TEST(Israfilov_Marat_ComplexNumberTest, Division_Zero_By_Number_Gives_Zero) {
    // Arrange
    double re = 1.2;
    double im = 3.4;
    ComplexNumber z1(0.0, 0.0);

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(z1 / z, z1);
}
