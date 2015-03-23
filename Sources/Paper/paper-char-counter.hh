<?hh //strict
class :paper-char-counter extends :polymer-xhp{
  protected string $tagName = 'paper-char-counter';
  attribute
    Stringish target,
    int showCounter;
  children (pcdata | %flow)*;
  category %flow;
}