<?hh //strict
class :core-submenu extends :core-item{
  protected string $tagName = 'core-submenu';
  children (:core-item | :paper-item)*;
  category %flow;
}