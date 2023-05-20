#include <iostream>
using namespace std;

//ДЗ №1
//int main() {
//setlocale(0, "RUS");
//int number_first;
//int number_second;

//cout << "Введите первое трёхзначное число:\n";
//cin >> number_first;

//int hundreds = number_first % 1000 / 100;
//int dozens = number_first % 100 / 10;
//int units = number_first % 10;

//cout << "Введите второе трёхзначное число:\n";
//cin >> number_second;

//cout << "\n";

//int hundreds2 = number_second % 1000 / 100;
//int dozens2 = number_second % 100 / 10;
//int units2 = number_second % 10;

//cout << hundreds << dozens2 << units << "\n";
//cout << hundreds2 << dozens << units2 << "\n";
//}






//ДЗ №2
//int main() {
//setlocale(0, "RUS");

//int number;

//cout << "Введите первое четырёхзначное число:\n";
//cin >> number;

//int thousands =  number / 1000 % 10;
//int hundreds = number % 1000 / 100;
//int dozens = number % 100 / 10;
//int units = number % 10;

//cout << "Сумма первой и третьей цифры:" << thousands + dozens << "\n";
//cout << "Разность второй и четвёртой цифры:" << hundreds - units << "\n";
//}








//ДЗ №3
//int main() {
//setlocale(0, "RUS");

//int number;

//cout << "Введите первое трёхзначное число:\n";
//cin >> number;

//int hundreds = number % 1000 / 100;
//int dozens = number % 100 / 10;
//int units = number % 10;

//cout << hundreds << units;
//}








//ДЗ №4  
//int main() {
//int Amount;
//double Rate;
    
//cout << "Введите сумму денежного вклада:\n";
//cin >> Amount;
//cout << "Введите процент годовых:\n";
//cin >> Rate;

//double Month_Rate = Rate / 12;  
//double Payment = Amount * Month_Rate / 100;

//cout << "Сумма денег,который выплачивает банк каждый месяц:" << Payment << " гривен";
//}







//ДЗ №5
//int main() {
//setlocale(0, "RUS");

//int Y;
//int X;

//cout << "Введите общую стоимость товара:\n";
//cin >> Y;
//cout << "Введите количество денег:\n";
//cin >> X;

//int I = X / Y;
//cout << "Количество товара,которое можно купить за введённое количество денег:" << I << "\n";
//cout << "Количество сдачи:" << X - (I * Y);
//}








//ДЗ №6
//int main() {
//setlocale(0, "RUS");
//const double POUNDS_GRAMS = 405.9;
//double weight;

//cout << "Введите вес в фунтах:\n";
//cin >> weight;

//double kilograms = weight * POUNDS_GRAMS / 1000;
//cout << "Вес в килограммах:" << kilograms << "\n";

//вариант 1
//double pounds = kilograms * 1000 / POUNDS_GRAMS;
//cout << "Вес в фунтах:" << pounds;


//вариант 2
//cout << "Введите вес в килограммах:\n";
//cin >> weight;

//double pounds = weight * 1000 / POUNDS_GRAMS;
//cout << "Вес в фунтах:" << pounds;
//}








//ДЗ №8
//int main() {
//setlocale(0, "RUS");

//int number;

//cout << "Введите первое пятизначное число:\n";
//cin >> number;

//int ten_thousands =  number / 1000 % 100 / 10;
//int thousands =  number / 1000 % 10;
//int hundreds = number % 1000 / 100;
//int dozens = number % 100 / 10;
//int units = number % 10;

//cout << dozens << units << ten_thousands << thousands << hundreds;
//}







//ДЗ №9
//int main() {
//setlocale(0, "RUS");


//const double Earth = 5.972E24;
//const double Venus = 4.867E24;
//const double Mercury = 3.285E23;
//const double Mars = 6.39E23;
//const double Jupiter = 1.898E27;
//const double Saturn = 5.683E26;
//const double Uranus = 8.681E25;
//const double Neptune = 1.024E26;


//double Total_Weight = Earth + Venus + Mercury + Mars + Jupiter + Saturn + Uranus + Neptune;
//cout << "Общая масса всех планет: " << Total_Weight << "\n";
//cout << "Среднее арифметическое: " << Total_Weight / 8 << "\n\n";

//double Earth_Percent = (Earth / Total_Weight) * 100;
//cout << "Масса Земли в процентах: " << Earth_Percent << "%" << "\n";

//double Venus_Percent = (Venus / Total_Weight) * 100;
//cout << "Масса Венеры в процентах: " << Venus_Percent << "%" << "\n";

//double Mercury_Percent = (Mercury / Total_Weight) * 100;
//cout << "Масса Меркурия в процентах: " << Mercury_Percent << "%" << "\n";

//double Mars_Percent = (Mars / Total_Weight) * 100;
//cout << "Масса Марса в процентах: " << Mars_Percent << "%" << "\n";

//double Jupiter_Percent = (Jupiter / Total_Weight) * 100;
//cout << "Масса Юпитера в процентах: " << Jupiter_Percent << "%" << "\n";

//double Saturn_Percent = (Saturn / Total_Weight) * 100;
//cout << "Масса Сатурна в процентах: " << Saturn_Percent << "%" << "\n";

//double Uranus_Percent = (Uranus / Total_Weight) * 100;
//cout << "Масса Урана в процентах: " << Uranus_Percent << "%" << "\n";

//double Neptune_Percent = (Neptune / Total_Weight) * 100;
//cout << "Масса Нептуна в процентах: " << Neptune_Percent << "%" << "\n\n";

//double Other_Planets = Total_Weight - Jupiter;
//cout << "Масса Юпитера в " << Jupiter / Other_Planets << " раза больше массы остальных планет.";
//}