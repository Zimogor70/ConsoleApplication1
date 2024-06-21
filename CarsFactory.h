#pragma once

class Cars {
public:
	virtual void print() = 0;
};

class Sedan: public Cars {
	void print() { cout << "� ���������� ���� �����!\n"; };
};

 class Hatchback : public Cars {
	 void print() { cout << "� ���������� ���� �������!\n"; };
 };

 class Convertible : public Cars {
	 void print() { cout << "� ���������� ���� ���������!\n"; };
 };

 class Truck {
 public:
	 void Describe() { cout << "� ��������"; };
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
		 if (value == "�����") return std::make_unique<Sedan>();
		 if (value == "�������") return std::make_unique<Hatchback>();
		 if (value == "���������") return std::make_unique<Convertible>();
		 if (value == "��������") return std::make_unique<AdaptTruck>(new Truck);
		 throw std::runtime_error("�������� ������!\n");
	 }
 };



