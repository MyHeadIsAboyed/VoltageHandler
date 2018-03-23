
#include "Singleton.h"
#include <iostream>

using namespace std;


template<class T>
T* Singleton<T>::instance()
{
	// Do we have an instance of this type? If so return it, otherwise create a new one.
	if (m_pInstance){
		cout << "instance already existent" << endl;
	}
	else {
		cout << "new instance created" << endl;
		m_pInstance = new T;
	}
	return m_pInstance; 
}

template<class T>
void Singleton<T>::destroy()
{
	delete m_pInstance;
	m_pInstance = NULL;
}

template<class T>
Singleton<T>::Singleton()
{
	cout << "singleton instance created" << endl;
}

// Set static instance value to NULL
template <class T> 
T* Singleton<T>::m_pInstance = NULL;