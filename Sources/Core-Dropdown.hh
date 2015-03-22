<?hh //strict
class :core-dropdown extends :core-overlay{
  attribute
    Stringish relatedTarget,
    Stringish halign,
    Stringish valign;
  protected string $tagname = 'core-dropdown';
}
