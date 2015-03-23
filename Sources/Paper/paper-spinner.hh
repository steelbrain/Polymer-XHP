<?hh //strict
class :paper-spinner extends :polymer-xhp{
  protected string $tagName = 'paper-spinner';
  attribute
    bool active,
    Stringish alt;
  children empty;
  category %flow;
}