#include "ScrollingText.h"


ScrollingText::ScrollingText(SSD1306Wire *display)
{
  _display = display;
  requestedLength = _display->width();
};

void ScrollingText::enableScroll()
{
  if (longString)
    scrollEnabled = true;
}

void ScrollingText::setText(String text)
{
  scrollIndex = 0;
  _length = _display->getStringWidth(text);
  if (_length > requestedLength)
  {
    longString = true;
    _text = text + repeatStr;
    _length = _display->getStringWidth(_text);
    _text += text;
  }
  else
  {
    _text = text;
    longString = false;
  }
    
  oldTime = millis();
}

String ScrollingText::getText()
{
  return _text;
}

void ScrollingText::setHeight(uint8_t height)
{
  _height = height;
}

void ScrollingText::draw(uint8_t y)
{

  if (longString && scrollEnabled)
  {
    unsigned long newTime = millis();
    if ((newTime - oldTime) >= _timer)
    {

      oldTime = newTime;

      if (scrollIndex == 0)
      {
        scrollIndex--;
        _timer = 50;
      }
      else if (_length+scrollIndex == 0)
      {
        scrollIndex = 0;
        _timer = 50;
        scrollEnabled = false;
      }
      else
      {
        scrollIndex--;
      }
    }
  }
  else
  {
    scrollIndex = 0;
  }

  _display->drawString(scrollIndex, y, _text);
}

void ScrollingText::draw()
{
  draw(_height);
}

bool ScrollingText::isScrolling()
{
  return scrollEnabled;
}