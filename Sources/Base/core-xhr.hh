<?hh //strict
class :core-xhr extends :polymer-xhp{
  protected string $tagName = 'core-xhr';
  attribute Stringish request;
  children empty;
  category %flow;
}