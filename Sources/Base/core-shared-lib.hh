<?hh //strict
class :core-shared-lib extends :polymer-xhp{
  protected string $tagName = 'core-shared-lib';
  attribute Stringish url;
  children (pcdata | %flow)*;
  category %flow;
}