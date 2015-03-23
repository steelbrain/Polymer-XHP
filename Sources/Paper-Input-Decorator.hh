<?hh //strict
class :paper-input-decorator extends :div{
  attribute
    Stringish label,
    bool floatingLabel,
    bool disabled,
    bool labelVisible,
    bool isInvalid,
    bool autoValidate,
    Stringish error;
  attribute
    Stringish validate,
    Stringish updateLabelVisibility;
  protected string $tagName = 'paper-input-decorator';
}
