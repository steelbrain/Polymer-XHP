<?hh //strict
class :paper-radio-button extends :polymer-xhp{
  protected string $tagName = 'paper-radio-button';
  attribute
    bool checked,
    Stringish label,
    bool toggles,
    bool disabled;
  children (pcdata | %flow)*;
  category %flow;
}