<?hh //strict
class :paper-tabs extends :core-selector{
  attribute
    bool noink,
    bool nobar,
    bool noslide,
    bool scrollable,
    bool disableDrag,
    bool hideScrollButton,
    bool alignBottom;
  children (:paper-tab)*;
  protected string $tagName = 'paper-tabs';
}
