<?hh //strict
class :paper-toast extends :polymer-xhp{
  protected string $tagName = 'paper-toast';
  attribute
    Stringish text,
    int duration,
    bool opened,
    Stringish responsiveWidth,
    bool swipeDisabled,
    bool autoCloseDisabled;
  children empty;
  category %flow;
}