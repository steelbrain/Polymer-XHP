<?hh //strict
class :core-label extends :polymer-xhp{
  protected string $tagName = 'core-label';
  attribute Stringish for;
  children (pcdata | %flow)*;
  category %flow;
}