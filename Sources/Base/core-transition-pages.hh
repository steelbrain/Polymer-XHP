<?hh //strict
class :core-transition-pages extends :core-transition{
  protected string $tagName = 'core-transition-pages';
  attribute
    Stringish scopeClass,
    Stringish activeClass,
    Stringish transitionProperty,
    bool completed;
  children (:script)*;
  category %flow;
}