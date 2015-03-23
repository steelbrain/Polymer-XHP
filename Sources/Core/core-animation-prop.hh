<?hh //strict
class :core-animation-prop extends :polymer-xhp{
  protected string $tagName = 'core-animation-prop';
  attribute
    Stringish name,
    Stringish value;
  children empty;
  category %flow;
}