<?hh //strict
class :core-overlay extends :polymer-xhp{
  protected string $tagName = 'core-overlay';
  attribute
    Stringish target,
    Stringish sizingTarget,
    bool opened,
    bool backdrop,
    bool layered,
    bool autoCloseDisabled,
    bool autoFocusDisabled,
    Stringish closeAttribute,
    Stringish closeSelector,
    Stringish transition;
  children (pcdata | %flow)*;
  category %flow;
}