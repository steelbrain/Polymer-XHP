<?hh //strict
class :paper-radio-button extends :button{
  attribute
    bool checked,
    Stringish label,
    bool toggles,
    bool disabled;
  attribute
    Stringish change,
    Stringish core-change;
  protected string $tagName = 'paper-radio-button';
}
