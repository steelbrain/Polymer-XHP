<?hh //strict
class :core-transition extends :polymer-xhp{
  protected string $tagName = 'core-transition';
  children (:script)*;
  category %flow;
}