#include "CameraSandbox/CameraSandbox.hpp"


int main(int argc, char* argv[]){
    auto Cam = CameraSandbox::CameraTool();
    Cam.TakePicture();
    return 0;
}