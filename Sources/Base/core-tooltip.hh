<?hh //strict
class :core-tooltip extends :polymer-xhp{
  protected string $tagName = 'core-tooltip';
  attribute
    Stringish label,
    bool show,
    Stringish position,
    bool noarrow,
    Stringish tipAttribute;
  children (pcdata | %flow)*;
  category %flow;
}