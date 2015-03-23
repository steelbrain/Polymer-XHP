<?hh //strict
class :core-menu extends :core-selector{
  protected string $tagName = 'core-menu';
  children (:core-item | :paper-item | :core-submenu)*;
  category %flow;
}