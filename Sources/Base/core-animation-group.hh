<?hh //strict
class :core-animation-group extends :polymer-xhp{
  protected string $tagName = 'core-animation-group';
  attribute
    Stringish target,
    int duration,
    Stringish type;
  children (:core-animation | :core-animation-group)*;
  category %flow;
}