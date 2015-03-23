<?hh //strict
class :core-dropdown extends :core-overlay{
  protected string $tagName = 'core-dropdown';
  attribute
    Stringish relatedTarget,
    Stringish halign,
    Stringish valign;
  children (pcdata | %flow)*;
  category %flow;
}