#include <complex>
#include <iostream>
#include "header.h"

int main() {
    //первое задание

    int for_pointer_a;
    int for_pointer_b;
    int *pa = &for_pointer_a;
    int *pb = &for_pointer_b;

    float k1;
    float m1;
    float round;

    std::cout << "Введите два целых числа для выполнения операции сложения: ";
    std::cin >> for_pointer_a >> for_pointer_b;
    int k = for_pointer_a;
    int m = for_pointer_b;
    functions::summary(pa, pb);
    std::cout << "Результат сложения(указатели): ";
    std::cout << *pa << std::endl;
    functions::summary(k, m);
    std::cout << "Результат сложения(ссылки): ";
    std::cout << k << std::endl;

    std::cout
        << "Введите 2 числа типа float для выполнения операции сложения: ";
    std::cin >> k1 >> m1;
    float first_perem = k1;
    float second_perem = m1;
    float *pointer_f = &first_perem;
    float *pointer_s = &second_perem;
    functions::summary(k1, m1);
    std::cout << "Результат сложения(ссылки): ";
    std::cout << k1 << std::endl;
    functions::summary(pointer_f, pointer_s);
    std::cout << "Результат сложения(указатели): ";
    std::cout << *pointer_f << std::endl;

    //второе задание
    std::cout << "Введите число типа float для округления: ";
    std::cin >> round;
    float f_pointers_round = round;
    float *pointer_round = &f_pointers_round;
    functions::rounding(round);
    std::cout << "Результат округления(ссылки): ";
    std::cout << round << std::endl;
    functions::rounding(pointer_round);
    std::cout << "Результат округления(указатели): ";
    std::cout << *pointer_round << std::endl;

    //третье задание
    double a;
    double b;
    std::cout << "Введите 2 числа: ";
    std::cin >> a >> b;
    double *pointer_a_a = &a;
    double *pointer_b_b = &b;
    std::complex<double> z(a, b);
    std::complex<double> poin_k(*pointer_a_a, *pointer_b_b);
    auto *po = &poin_k;
    functions::complex_change(z);
    std::cout << "Результат(комплексно-сопряжённое, ссылки): ";
    std::cout << z << std::endl;
    functions::complex_change(po);
    std::cout << "Результат(комплексно-сопряжённое, указатели): ";
    std::cout << poin_k << std::endl;

    //четвертое задание
    std::cout << "Ссылки: 
";
    classes::square need;
    need.get_coords();
    need.sq_center();
    need.print_starts_coords();
    //
    need.get_vector();
    need.move_coords();
    need.sq_center();
    need.print_new_coords();

    std::cout << "
";

    std::cout << "Указатели: 
";

    classes::square need_p;
    need_p.get_coords_p();
    need_p.sq_center_p();
    need_p.print_starts_coords_p();
    //
    need_p.get_vector_p();
    need_p.move_coords_p();
    need_p.sq_center_p();
    need_p.print_new_coords_p();

    //    //четвёртое задание
    //    int a_centr;
    //    int b_centr;
    //    int a_vect;
    //    int b_vect;
    //
    //    std::pair <int, int> central_point_of_the_square;
    //    std::cout << "Введите центральную точку квадрата(центр квадрата): ";
    //    std::cin >> a_centr >> b_centr;
    //    central_point_of_the_square.first = a_centr;
    //    central_point_of_the_square.second = b_centr;
    //    std::cout << "Введите вектор в виде 2-ух координат, на который Вы
    //    хотите сдвинуть квадрат: "; std::cin >> a_vect >> b_vect;
    //
    //    int acent = a_centr;
    //    int bcent = b_centr;
    //    int avect = a_vect;
    //    int bvect = b_vect;
    //
    //    int *pacent = &acent;
    //    int *pbcent = &bcent;
    //    int *pavect = &avect;
    //    int *pbvect = &bvect;
    //
    //    functions::square_move(a_centr, b_centr, a_vect, b_vect);
    //    std::cout << "Результат(ccылки): ";
    //    std::cout << a_centr << " " << b_centr << std::endl;
    //    functions::square_move(pacent, pbcent, pavect, pbvect);
    //    std::cout << "Результат(указатели): ";
    //    std::cout << *pacent << " " << *pbcent << std::endl;
}
