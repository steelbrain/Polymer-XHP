<?hh //strict
class :core-icon-button extends :polymer-xhp{
  protected string $tagName = 'core-icon-button';
  attribute
    Stringish src,
    Stringish icon,
    bool active;
  children empty;
  category %flow;
}