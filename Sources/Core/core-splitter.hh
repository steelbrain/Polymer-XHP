<?hh //strict
class :core-splitter extends :polymer-xhp{
  protected string $tagName = 'core-splitter';
  attribute
    Stringish direction,
    Stringish minSize,
    bool locked,
    bool allowOverflow;
  children (pcdata | %flow)*;
  category %flow;
}