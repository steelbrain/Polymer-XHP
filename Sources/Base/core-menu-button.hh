<?hh //strict
class :core-menu-button extends :core-dropdown-base{
  protected string $tagName = 'core-menu-button';
  children (:core-item | :paper-item)*;
  category %flow;
}