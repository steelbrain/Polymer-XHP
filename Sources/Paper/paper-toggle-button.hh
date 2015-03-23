<?hh //strict
class :paper-toggle-button extends :polymer-xhp{
  protected string $tagName = 'paper-toggle-button';
  attribute
    bool checked,
    bool disabled;
  children empty;
  category %flow;
}