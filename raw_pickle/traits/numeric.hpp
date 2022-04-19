#include <iostream>
#include <utility>

namespace pickle
{

    template <class T>
    concept Numeric =
        std::is_integral<T>::value || std::is_floating_point<T>::value;

    template <Numeric T>
    class PickableNumeric
    {

    public:
        PickableNumeric(T &&data)
            : m_data(std::forward<T>(data))
        {
        }

        T const &get() const
        {
            return m_data;
        }

    private:
        T m_data;
    };

} // namespace pickle
