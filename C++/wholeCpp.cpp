#include <iostream>
#include <cstdio>
#include <fstream>
#include <vector>

using namespace std;

class virtualAnimal{
	public:
		void getFamily(){cout<<"we are vAnimals"<<endl;}
		virtual void getClass(){cout<<"I am animal"<<endl;} // function will be replaced by sub class
};

class vDog:public virtualAnimal{
	public:
		void getClass(){cout<<"I am dog"<<endl;}
};

class Animal{
	private:
		int height;
		int weight;
		string name;
		static int numOfAnimals;

	public:
		int color;
		int getHeight(){return height;}
		int getWeight(){return weight;}
		string getName(){return name;}

		void setHeight(int cm){height=cm;}
		void setWeight(int kg){weight=kg;}
		void setName(string animalName){name=animalName;}

		void setAll(int,int,string);
		Animal(int,int,string);
		~Animal();
		Animal(); //overloading

		static int getNumOfAnimals(){return numOfAnimals;}

		void toString();
};

class Dog: public Animal{
	private:
		string sound="woof";
	public:
		void getSound(){ cout<< sound <<endl;}

		Dog(int,int,string,string);
		Dog():Animal(){};

		void toString();
};

int Animal::numOfAnimals=0;

void Animal::setAll(int height, int weight, string name){
	this->height=height;
	this->weight=weight;
	this->name=name;
	Animal::numOfAnimals++;
}

Animal::Animal(int height, int weight, string name){
	this->height=height;
	this->weight=weight;
	this->name=name;
	Animal::numOfAnimals++;
}

Animal::~Animal(){
	cout<<this->name<<" Destroyed"<<endl;
}

Animal::Animal(){
	Animal::numOfAnimals++;
}

void Animal::toString(){
	cout<<this->name<<" is "<<this->height<<" tall "<< this->weight<<" weight "<<endl;
}

Dog::Dog(int height,int weight, string name, string bark):Animal(height, weight,name){
	this->sound=bark;
}

void Dog::toString(){
	cout<<this->getName()<<" is "<<this->getHeight()<<" tall "<< this->getWeight()<<this->sound<<endl;
}

int addNumbers(int firstNum, int secNum=0 , int thirdNum=0){
	return firstNum+secNum+thirdNum;
}

int getFactorial(int number){
	int sum;
	if (number==1) sum=1;
	else sum=getFactorial(number-1)*number;
	return sum;
}

void make(int & age){
	cout<<"I used to be "<<age<<endl;
	age-=2;
}
void make2(int *age){
	cout<<"I used to be "<<*age<<endl;
	*age-=2;
}

void whatClass(virtualAnimal *animal){
	animal->getClass();
}

int main(){
	const double PI=3.1415926535;
	char mygrade='A';
	bool isHappy=true;
	short int myAge=39;
	float favNum=3.14159;
	double otherfavNum=1.618039;
	int nowAge=30;
	make(nowAge);
	make2(&nowAge);
	cout<<nowAge<<endl;
	cout<< getFactorial(3)<<endl;
	cout<<"add two numbers "<<addNumbers(myAge,2)<<endl;
	cout<< "Size of char "<<sizeof(favNum)<<endl; 

	Animal fred;
	Animal jk;
	Animal * animalPtr;
	Dog spot(38,16,"spot","woof");
	spot.getSound();
	spot.toString();
	animalPtr=&fred;

	

	spot.Animal::toString();//call super class's function

	cout<<"Animal Counts "<<Animal::getNumOfAnimals()<<endl;

	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");
	fred.color=2;
	cout<<fred.color<<" color"<<endl;
	fred.toString();
	animalPtr->toString();
	
	
	//virtual function
	virtualAnimal *animal=new virtualAnimal;
	vDog *dog=new vDog;

	animal->getClass();
	dog->getClass();



	switch(mygrade){
	case 1:
		break;
	case 2:
		break;
	}

	int largestNum= (5>2)? 5:2;
	printf("%d\n", largestNum );
	int myFavNums[5];
	
	int badNUms[5]={4,13,14,24,34};

	for(int i=0; i<sizeof(badNUms)/sizeof(*badNUms);i++){
		//printf("%d\n",sizeof(*badNUms));
		cout<<i<<" "<<*badNUms<<endl;
	}

	string happy="HAPPY";
	printf("%c\n", happy[0]);
	char Y='Y';
	int indexFounded=happy.find(Y,0);
	printf("%d\n",indexFounded);
	happy.insert(5,"HHA");
	cout<<happy<<endl;
	
	happy.erase(1,2); // start from 1 erase 2 char
	cout<<happy<<endl;

	happy.replace(0,4,"LOL"); //replace from 0 to 4 to LOL 
	cout<<happy<<endl;

	vector <int> lotteryNumVect(10);
	int lotteryNumArray[5]={4,13,14,24,34};

	cout<<"size of vector "<<lotteryNumVect.size()<<endl;

	lotteryNumVect.insert(lotteryNumVect.begin(),lotteryNumArray,lotteryNumArray+3);
	cout<<"size of vector "<<lotteryNumVect.size()<<endl;
	cout<<lotteryNumVect.at(2)<<endl;

	lotteryNumVect.insert(lotteryNumVect.begin()+5,44);
	cout<<"size of vector "<<lotteryNumVect.size()<<endl;
	cout<<lotteryNumVect.at(5)<<endl;

	lotteryNumVect.push_back(64);
	cout<<"size of vector "<<lotteryNumVect.size()<<endl;
	cout<<lotteryNumVect.front()<<endl;
	cout<<lotteryNumVect.back()<<endl;

	lotteryNumVect.pop_back();
	cout<<lotteryNumVect.back()<<endl;

	cout<<"size of vector "<<lotteryNumVect.size()<<endl;

	/*const int ZERO=0;
	try{
		if(ZERO!=0){
			cout<<2/ZERO<<endl;
		}
		else throw(ZERO);
	}
	catch(int ZERO){
		cout<<ZERO<<" is not vaild"<<endl;
	}*/
	/*string numberGuessed;
	int intNumberGuessed=0;
	do{
		getline(cin,numberGuessed);
		intNumberGuessed=stoi(numberGuessed); stod->string to double
		cout<<intNumberGuessed<<endl;
	}while(intNumberGuessed!=4);*/

	/*string Quote="Ring is a Japanese mystery horror novel";
	ofstream writer("Quote.txt");
	if (!writer){
		cout<< "Error opening file"<<endl;
		return -1;
	}
	else{
		writer<<Quote<<endl;
		writer.close();
	}
	ofstream writer2("Quote.txt",ios::app); //ios-> iostream::append 
	if (!writer2){
		cout<< "Error opening file"<<endl;
		return -1;
	}
	else{
		writer2<<"\nNovel quote"<<endl;
		writer2.close();
	}

	char letter;

	ifstream reader("Quote.txt");
	if (!reader){
		cout<<"Error opening file"<<endl;
		return -1;
	}
	else {
		for(int i=0;!reader.eof();i++){
			reader.get(letter);
			cout<<letter;
		}
	}
	cout<<endl;
	reader.close();
	*/
	return 0;
}
