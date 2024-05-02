#ifndef __REMOTECONTROL__
#define __REMOTECONTROL__

class RemoteControlInterface {
    public:
    virtual void power(bool onOff) = 0;
    virtual void volumeControl(const unsigned int& volumeCount) = 0;
    virtual void channelNum(const unsigned int& num) = 0;
    virtual void mute(bool onOff) = 0;
    virtual void sleepMode(bool onOff) = 0;
    virtual void mode(const unsigned int& count) = 0; 
};




#endif // __REMOTECONTROL__