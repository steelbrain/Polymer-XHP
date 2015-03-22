<?hh //strict
class :core-transition-css extends :core-transition{
  children (:style);
  attribute
    Stringish baseClass,
    Stringish openedClass,
    Stringish closedClass,
    Stringish completeEventName,
    Stringish transitionType;
  protected string $tagName = 'core-transition-css';
}
