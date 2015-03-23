<?hh //strict
class :paper-tab extends :polymer-xhp{
  protected string $tagName = 'paper-tab';
  attribute bool noink;
  children (pcdata | %flow)*;
  category %flow;
}