<?hh //strict
class :core-pages extends :core-selector{
  protected string $tagName = 'core-pages';
  children (pcdata | %flow)*;
  category %flow;
}