<?hh //strict
class :paper-input-decorator extends :polymer-xhp{
  protected string $tagName = 'paper-input-decorator';
  attribute
    Stringish label,
    bool floatingLabel,
    bool disabled,
    bool labelVisible,
    bool isInvalid,
    bool autoValidate,
    Stringish error;
  children (pcdata | %flow)*;
  category %flow;
}