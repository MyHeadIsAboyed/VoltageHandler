template <class T>
class Singleton
{
	public:
		// Return existing or create new instance
		static T* instance() {
			// Do we have an instance of this type? If so return it, otherwise create a new one.
			if (m_pInstance != 0){
				//do nothing
			}
			else {
				m_pInstance = new T;
			}
			return m_pInstance; 
		}
 
		// Manually destroy an existing instance. Call at end of program to clean up.
		static void destroy() {
			delete m_pInstance;
			m_pInstance = 0;
		}
 
	private:
		Singleton() {}                            // Constructor                   (empty & cannot be called externally)
		~Singleton();                           // Destructor                    (empty & cannot be called externally)
		Singleton(Singleton const&);            // Copy constructor              (empty & cannot be called externally - no copies allowed)
		Singleton& operator=(Singleton const&); // Assignment operator           (empty & cannot be called externally - no assignment allowed)
		static T* m_pInstance;                  // Static template-type instance
};

// Set static instance value to NULL
template <class T> 
T* Singleton<T>::m_pInstance = 0;