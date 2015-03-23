<?hh //strict
class :core-icon extends :polymer-xhp{
  protected string $tagName = 'core-icon';
  attribute
    Stringish src,
    Stringish icon,
    Stringish alt;
  children empty;
  category %flow;
}