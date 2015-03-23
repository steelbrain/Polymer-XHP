<?hh //strict
class :paper-toast extends :div{
  attribute
    Stringish text,
    int duration,
    bool opened,
    Stringish responsiveWidth,
    bool swipeDisabled,
    bool autoCloseDisabled;
  protected string $tagName = 'paper-toast';
}
