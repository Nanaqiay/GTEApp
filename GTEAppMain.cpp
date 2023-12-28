#include "GTEAppWindow3.h"
#include <iostream>

int main()
{
    try
    {
        Window::Parameters parameters(L"GTEAppWindow3", 0, 0, 512, 512);
        auto window = TheWindowSystem.Create<GTEAppWindow3>(parameters);
        TheWindowSystem.MessagePump(window, TheWindowSystem.DEFAULT_ACTION);
        TheWindowSystem.Destroy(window);
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
