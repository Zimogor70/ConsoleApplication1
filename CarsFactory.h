#pragma once

class Cars {
public:
	virtual void print() = 0;
};

class Sedan: public Cars {
	virtual void print() { cout << "Я автомобиль типа Седан!\n"; };
};

 class Hatchback : public Cars {
	 virtual void print() { cout << "Я автомобиль типа Хэтчбэк!\n"; };
 };
 class Convertible : public Cars {
	 virtual void print() { cout << "Я автомобиль типа Кабриолет!\n"; };
 };

 class FactoryCars {
 public:
	 static std::unique_ptr<Cars> GetCars(string& value) {
		 if (value == "Седан") return std::make_unique<Sedan>();
		 if (value == "Хэтчбэк") return std::make_unique<Hatchback>();
		 if (value == "Кабриолет") return std::make_unique<Convertible>();
		 throw std::runtime_error("Неверный формат!\n");
	 }
 };