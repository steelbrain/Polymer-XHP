<?hh //strict
class :core-range extends :polymer-xhp{
  protected string $tagName = 'core-range';
  attribute
    int value,
    int min,
    int max,
    int step,
    int ratio;
  children (pcdata | %flow)*;
  category %flow;
}