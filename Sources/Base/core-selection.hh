<?hh //strict
class :core-selection extends :polymer-xhp{
  protected string $tagName = 'core-selection';
  attribute bool multi;
  children (pcdata | %flow)*;
  category %flow;
}