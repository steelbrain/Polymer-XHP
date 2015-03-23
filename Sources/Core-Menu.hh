<?hh //strict
class :core-menu extends :core-selector{
  children(:core-item | :paper-item)*;
  protected string $tagName = 'core-menu';
}
