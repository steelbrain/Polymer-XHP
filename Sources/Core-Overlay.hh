<?hh //strict
class :core-overlay extends :div{
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
  attribute
    Stringish core-overlay-open,
    Stringish core-overlay-open-completed,
    Stringish core-overlay-close-completed,
    Stringish core-overlay-position;
  protected string $tagName = 'core-overlay';
}
