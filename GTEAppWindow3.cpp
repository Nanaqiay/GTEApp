#include "GTEAppWindow3.h"

GTEAppWindow3::GTEAppWindow3(Parameters& parameters)
    :
    Window3(parameters)
{
}

void GTEAppWindow3::OnIdle()
{
    mTimer.Measure();

    mEngine->ClearBuffers();
    mEngine->Draw(8, mYSize - 8, { 0.0f, 0.0f, 0.0f, 1.0f }, mTimer.GetFPS());
    mEngine->DisplayColorBuffer(0);

    mTimer.UpdateFrameCount();
}
