<?hh //strict
class :core-field extends :polymer-xhp{
  protected string $tagName = 'core-field';
  children (pcdata | %flow)*;
  category %flow;
}