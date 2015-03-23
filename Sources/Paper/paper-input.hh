<?hh //strict
class :paper-input extends :polymer-xhp{
  protected string $tagName = 'paper-inputs';
  attribute
    Stringish label,
    bool floatingLabel,
    bool disabled,
    Stringish value,
    Stringish committedValue;
  children (pcdata | %flow)*;
  category %flow;
}