<?hh //strict
class :paper-button-base extends :polymer-xhp{
  protected string $tagName = 'paper-button-base';
  children (pcdata | %flow)*;
  category %flow;
}