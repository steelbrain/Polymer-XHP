<?hh //strict
class :paper-shadow extends :polymer-xhp{
  protected string $tagName = 'paper-shadow';
  attribute
    int z,
    bool animated;
  children (pcdata | %flow)*;
  category %flow;
}