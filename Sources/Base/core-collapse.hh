<?hh //strict
class :core-collapse extends :polymer-xhp{
  protected string $tagName = 'core-collapse';
  attribute
    Stringish target,
    bool horizontal,
    bool opened,
    int duration,
    bool fixedSize,
    bool allowOverflow;
  children (pcdata | %flow)*;
  category %flow;
}