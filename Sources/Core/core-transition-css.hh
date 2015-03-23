<?hh //strict
class :core-transition-css extends :core-transition{
  protected string $tagName = 'core-transition-css';
  attribute
    Stringish baseClass,
    Stringish openedClass,
    Stringish closedClass,
    Stringish completeEventName,
    Stringish transitionType;
  children (pcdata | %flow)*;
  category %flow;
}