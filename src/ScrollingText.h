#ifndef ScrollingText_h
#define ScrollingText_h

#include "Arduino.h"
#include <SSD1306Wire.h>

class ScrollingText
{
  public:
    ScrollingText(SSD1306Wire *display);

    void setText(String text);
    String getText();
    void setHeight(uint8_t height);

    bool isScrolling();
    void enableScroll();

    void draw();
    void draw(uint8_t y);
    
  private:
    SSD1306Wire *_display;
    String _text;
    bool longString;
    bool scrollEnabled;
    uint16_t _length;
    uint16_t requestedLength;
    int16_t scrollIndex = 0;
    uint8_t _height;
    unsigned long oldTime;
    uint16_t _timer = 50;
    String repeatStr = "          ";
};

#endif