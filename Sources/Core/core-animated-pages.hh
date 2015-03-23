<?hh //strict
class :core-animated-pages extends :core-selector{
  attribute
    Stringish transitions,
    Stringish lastSelected;
  protected string $tagName = 'core-animated-pages';
}