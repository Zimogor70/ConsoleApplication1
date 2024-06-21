#pragma once

class Cars {
public:
	virtual void print() = 0;
};

class Sedan: public Cars {
	void print() { cout << "Я автомобиль типа Седан!\n"; };
};

 class Hatchback : public Cars {
	 void print() { cout << "Я автомобиль типа Хэтчбэк!\n"; };
 };

 class Convertible : public Cars {
	 void print() { cout << "Я автомобиль типа Кабриолет!\n"; };
 };

 class Truck {
 public:
	 void Describe() { cout << "Я Грузовик"; };
 };

 class AdaptTruck : public Cars {
	 Truck* truck;
 public:
	 AdaptTruck(Truck* t) :truck(t) {};
	 void print() { truck->Describe(); }
 };

 class FactoryCars {
 public:
	 static std::unique_ptr<Cars> GetCars(string& value) {
		 if (value == "Седан") return std::make_unique<Sedan>();
		 if (value == "Хэтчбэк") return std::make_unique<Hatchback>();
		 if (value == "Кабриолет") return std::make_unique<Convertible>();
		 if (value == "Грузовик") return std::make_unique<AdaptTruck>(new Truck);
		 throw std::runtime_error("Неверный формат!\n");
	 }
 };



