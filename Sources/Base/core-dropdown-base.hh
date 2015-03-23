<?hh //strict
class :core-dropdown-base extends :polymer-xhp{
  protected string $tagName = 'core-dropdown-base';
  attribute bool opened;
  children (pcdata | %flow)*;
  category %flow;
}