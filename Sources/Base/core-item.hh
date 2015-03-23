<?hh //strict
class :core-item extends :polymer-xhp{
  protected string $tagName = 'core-item';
  attribute
    Stringish src,
    Stringish icon,
    Stringish label;
  children (pcdata | %flow)*;
  category %flow;
}