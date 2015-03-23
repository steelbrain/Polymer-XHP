<?hh //strict
class :core-style extends :polymer-xhp{
  protected string $tagName = 'core-style';
  attribute
    Stringish id,
    Stringish ref,
    Stringish list;
  children (pcdata | %flow)*;
  category %flow;
}