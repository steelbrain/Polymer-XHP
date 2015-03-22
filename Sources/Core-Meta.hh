<?hh //strict
class :core-meta extends :xhp:html-element{
  category %flow;
  children (:property);
  attribute Stringish type;
  protected string $tagName = 'core-meta';
}
