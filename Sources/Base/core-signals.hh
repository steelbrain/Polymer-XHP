<?hh //strict
class :core-signals extends :polymer-xhp{
  protected string $tagName = 'core-signals';
  children (pcdata | %flow)*;
  category %flow;
}