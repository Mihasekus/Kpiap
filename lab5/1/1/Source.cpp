#include <iostream>

using namespace std;

template<class Type>
class DoubleQueue;

template<class Type>
struct QueueElement
{
	Type data;
	QueueElement *Next=NULL;
	QueueElement *Prev=NULL;
};



template<class Type>
class Iterator
{ 
public:
	Iterator(DoubleQueue<Type> &link);
	~Iterator();
	void AddElem(Type num);
	void DeleteElem();
	void MoveUp();
	void MoveDown();
	void ShowCurrent();
private:
	QueueElement<Type> *StructPointer;
	DoubleQueue<Type> &QueuePointer;
};

template<class Type>
Iterator<Type>::Iterator(DoubleQueue<Type> &link)
	: QueuePointer(link)
{
	StructPointer = QueuePointer.first;
};

template<class Type>
Iterator<Type>::~Iterator()
{

};

template<class Type>
void Iterator<Type>::ShowCurrent()
{
	if (StructPointer)
	{
		cout << "Текущий элемент" << endl;
		cout << StructPointer->data << endl;
	}
};

template<class Type>
void Iterator<Type>::MoveUp()
{
	if (QueuePointer.first == NULL || StructPointer->Prev == NULL)
	{
		cout << "Невозможно выполнить" << endl;
		system("pause");
	}
	else
		StructPointer = StructPointer->Prev;
};

template<class Type>
void Iterator<Type>::MoveDown()
{	
	if (QueuePointer.last == NULL || StructPointer->Next == NULL)
	{
		cout << "Невозможно выполнить" << endl;
		system("pause");
	}
	else
		StructPointer = StructPointer->Next;
};

template<class Type>
void Iterator<Type>::AddElem(Type num)
{

	QueueElement<Type>* unit = new QueueElement<Type>;

	if (!QueuePointer.first && !QueuePointer.last)
	{
		QueuePointer.first = unit;
		QueuePointer.last = unit;
		StructPointer = unit;
			unit->Prev = NULL;
			unit->Next = NULL;
			unit->data = num;
	}
	else
	{
		if (QueuePointer.first == QueuePointer.last)
		{
			StructPointer->Prev = unit;
			QueuePointer.first = unit;
			unit->Next = StructPointer;
			StructPointer = unit;
			unit->data = num;
		}
		else
		{
			unit->Next = StructPointer;
			unit->Prev = StructPointer->Prev;
			if (StructPointer->Prev)
				StructPointer->Prev->Next = unit;
			StructPointer->Prev = unit;
			if (QueuePointer.first == StructPointer)
				QueuePointer.first = unit;
			/*if (StructPointer->Next)
				StructPointer->Next->Prev = unit;*/
			StructPointer = unit;
			unit->data = num;
		}

	}
};

template<class Type>
void Iterator<Type>::DeleteElem()
{
	int flag=-1;
	QueueElement<Type> *buf;
		if (StructPointer->Next)
			StructPointer->Next->Prev = StructPointer->Prev;
		else
			StructPointer->Prev = NULL;
		if (StructPointer->Prev)
			StructPointer->Prev->Next = StructPointer->Next;
		else
			StructPointer->Next=NULL;

		if (StructPointer == QueuePointer.first)
		{
			QueuePointer.first = StructPointer->Next;
			flag = 0;
		}
		if (StructPointer == QueuePointer.last)
		{
			QueuePointer.last = StructPointer->Prev;
			flag = 1;
		}			
		buf = StructPointer;
		if (flag == 0)
		{
			StructPointer = StructPointer->Next;
		}
		if (flag==-1)
		{
			StructPointer = StructPointer->Prev;
		}
		delete buf;
};

template<class Type>
class DoubleQueue
{
public:
	friend class Iterator<Type>;
	DoubleQueue();
	~DoubleQueue();
private:
	QueueElement<Type> *first;
	QueueElement<Type> *last;
};

template<class Type>
DoubleQueue<Type>::DoubleQueue()
{
	first = NULL;
	last = NULL;
};

template<class Type>
DoubleQueue<Type>::~DoubleQueue()
{
	delete first;
	delete last;
};


int main()
{
	setlocale(LC_ALL, "Russian");
	
	char choice;
	int num;

	DoubleQueue<int> queue;
	
	Iterator<int> iter(queue);

	while (true)
	{
		do
		{
			iter.ShowCurrent();
			cout << "1.Двигаться вверх.\n"
				 << "2. Двигаться вниз.\n"
				 << "3. Добавить элемент.\n"
				 << "4. Удалить элемент.\n"
				 << "5. Выход." << endl;
			cin >> choice;
			if (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5')
			{
				system("cls");
				cout << "Ошибка ввода.Повторите" << endl;
			}
		} while (choice<1 && choice>5);
		switch (choice)
		{
		case '1':
			iter.MoveUp();
			system("cls");
			break;
		case '2':
			iter.MoveDown();
			system("cls");
			break;
		case '3':
			
			cout << "Введите число" << endl;
			cin >> num;
			iter.AddElem(num);
			system("cls");
			break;
		case '4':
			iter.DeleteElem();
			system("cls");
			break;
		case '5':
			system("pause");
			return 0;		
		}
	}
	return 0;
}