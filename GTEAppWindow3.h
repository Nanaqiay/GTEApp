#pragma once

#include <Applications/Window3.h>
using namespace gte;

class GTEAppWindow3 : public Window3
{
public:
    GTEAppWindow3(Parameters& parameters);

    virtual void OnIdle() override;

private:
};
