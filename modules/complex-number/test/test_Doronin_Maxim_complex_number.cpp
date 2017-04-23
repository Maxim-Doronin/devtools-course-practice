// Copyright 2017 Doronin Maxim

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Doronin_Maxim_ComplexNumberTest, Default_constructor_set_zeros) {
    ComplexNumber z;

    EXPECT_EQ(0.0, z.getRe());
    EXPECT_EQ(0.0, z.getIm());
}

TEST(Doronin_Maxim_ComplexNumberTest, Can_create_via_copying_constructor) {
    ComplexNumber z(13.3, -17.8);

    ComplexNumber zCopy(z);

    EXPECT_EQ(z, zCopy);
}

TEST(Doronin_Maxim_ComplexNumberTest, Setting_real_doesnt_change_imaginary) {
    double Re = 13.3;
    double Im = -17.8;
    double newRe = 15.5;
    ComplexNumber z(Re, Im);

    z.setRe(newRe);

    EXPECT_EQ(z.getIm(), Im);
}

TEST(Doronin_Maxim_ComplexNumberTest, Setting_imaginary_doesnt_change_real) {
    double Re = 13.3;
    double Im = -17.8;
    double newIm = 21.3;
    ComplexNumber z(Re, Im);

    z.setIm(newIm);

    EXPECT_EQ(z.getRe(), Re);
}

TEST(Doronin_Maxim_ComplexNumberTest, Equal_oper_return_false_if_diffe) {
    ComplexNumber z1(13.3, -17.8);
    ComplexNumber z2(10.3, 17.8);

    ASSERT_FALSE(z1 == z2);
}

TEST(Doronin_Maxim_ComplexNumberTest, NotEqual_oper_return_false_if_equal) {
    ComplexNumber z1(13.3, -17.8);
    ComplexNumber z2(13.3, -17.8);

    ASSERT_FALSE(z1 != z2);
}

TEST(Doronin_Maxim_ComplexNumberTest, getRe_is_const_method) {
    double Re = 13.3;
    double Im = -17.8;
    ComplexNumber z(Re, Im);
    ComplexNumber expected_z(z);

    z.getRe();

    EXPECT_EQ(expected_z, z);
}

TEST(Doronin_Maxim_ComplexNumberTest, getIm_is_const_method) {
    double Re = 13.3;
    double Im = -17.8;
    ComplexNumber z(Re, Im);
    ComplexNumber expected_z(z);

    z.getIm();

    EXPECT_EQ(expected_z, z);
}

TEST(Doronin_Maxim_ComplexNumberTest, assignment_to_itself) {
    double Re = 13.3;
    double Im = -17.8;
    ComplexNumber z(Re, Im);

    ASSERT_NO_FATAL_FAILURE(z = z);
}

